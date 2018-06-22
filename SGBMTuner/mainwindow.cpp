#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <ostream>
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    bmState = cv::StereoSGBM::create(-16, 128, 11);
    wls_filter = cv::ximgproc::createDisparityWLSFilter(bmState);

    // the default values used in OpenCV are defined here:
    // https://github.com/Itseez/opencv/blob/master/modules/calib3d/src/stereobm.cpp
    // std::cout << bmState << std::endl;
    bmState->setBlockSize(11);
    bmState->setPreFilterCap(31);   // must be within 1 and 63
    bmState->setBlockSize(11);      // must be odd, be within 5..11 and be not larger than image width or height
    bmState->setMinDisparity(-16);
    bmState->setNumDisparities(128);  // must be > 0 and divisible by 16
    bmState->setUniquenessRatio(15);  // must be non-negative
    bmState->setSpeckleWindowSize(0);
    bmState->setSpeckleRange(0);
    bmState->setDisp12MaxDiff(-1);
    bmState->setMode(0);
    bmState->setP1(8*11*11);
    bmState->setP2(32*11*11);

    wls_filter->setLambda(6000);
    wls_filter->setSigmaColor(1.0);

    // we override the default values defined in the UI file with Qt Designer
    // to the ones defined above
    ui->horizontalSlider_pre_filter_cap->setValue(bmState->getPreFilterCap());
    ui->horizontalSlider_SAD_window_size->setValue(bmState->getBlockSize());
    ui->horizontalSlider_min_disparity->setValue(bmState->getMinDisparity());
    ui->horizontalSlider_num_of_disparity->setValue(bmState->getNumDisparities());
    ui->horizontalSlider_uniqueness_ratio->setValue(bmState->getUniquenessRatio());
    ui->horizontalSlider_speckle_window_size->setValue(bmState->getSpeckleWindowSize());
    ui->horizontalSlider_speckle_range->setValue(bmState->getSpeckleRange());
    ui->horizontalSlider_disp_12_max_diff->setValue(bmState->getDisp12MaxDiff());
    ui->horizontalSlider_P1->setValue(bmState->getP1());
    ui->horizontalSlider_P2->setValue(bmState->getP2());
    ui->horizontalSlider_Mode->setValue(bmState->getMode());

    ui->horizontalSlider_WLS_lambda->setValue(wls_filter->getLambda());
    ui->horizontalSlider_WLS_sigma->setValue(wls_filter->getSigmaColor()*10);

    real_time_flag = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

// method called when the button to change the left image is clicked
// we prompt the user to select an image, and we display it
void MainWindow::on_pushButton_left_clicked()
{
    // we prompt the user with a file dialog,
    // to select the picture file from the left camera
    QString filename = QFileDialog::getOpenFileName(this, "Select left picture file", QDir::homePath(), NULL);
    if (filename.isNull() || filename.isEmpty())
        return;

    ///// Qt display stuff

    // we load the picture from the file, to display it in a QLabel in the GUI
    QImage left_picture;
    left_picture.load(filename);

    // some computation to resize the image if it is too big to fit in the GUI
    QPixmap left_pixmap = QPixmap::fromImage(left_picture);
    int max_width  = std::min(ui->label_image_left->maximumWidth(), left_picture.width());
    int max_height = std::min(ui->label_image_left->maximumHeight(), left_picture.height());
    ui->label_image_left->setPixmap(left_pixmap.scaled(max_width, max_height, Qt::KeepAspectRatio));

    set_SADWindowSize();  // the SAD window size parameter depends on the size of the image

    ///// OpenCV disparity map computation

    // we convert filename from QString to std::string (needed by OpenCV)
    std::string filename_s = filename.toUtf8().constData();

    // we load the picture in the OpenCV Mat format, to compute depth map
    cv::Mat mat = cv::imread(filename_s, CV_LOAD_IMAGE_COLOR);
    cv::cvtColor(mat, mat, CV_BGR2GRAY);  // we convert to gray, needed to compute depth map
    this->left_image = mat;

    compute_depth_map();
}

// method called when the button to change the right image is clicked
// we prompt the user to select an image, and we display it
void MainWindow::on_pushButton_right_clicked()
{
    // we prompt the user with a file dialog,
    // to select the picture file from the left camera
    QString filename = QFileDialog::getOpenFileName(this, "Select right picture file", QDir::homePath(), NULL);
    if (filename.isNull() || filename.isEmpty())
        return;

    ///// Qt display stuff

    // we load the picture from the file, to display it in a QLabel in the GUI
    QImage right_picture;
    right_picture.load(filename);

    // some computation to resize the image if it is too big to fit in the GUI
    QPixmap right_pixmap = QPixmap::fromImage(right_picture);
    int max_width  = std::min(ui->label_image_right->maximumWidth(), right_picture.width());
    int max_height = std::min(ui->label_image_right->maximumHeight(), right_picture.height());
    ui->label_image_right->setPixmap(right_pixmap.scaled(max_width, max_height, Qt::KeepAspectRatio));

    set_SADWindowSize();  // the SAD window size parameter depends on the size of the image

    ///// OpenCV disparity map computation

    // we convert filename from QString to std::string (needed by OpenCV)
    std::string filename_s = filename.toUtf8().constData();

    // we load the picture in the OpenCV Mat format, to compute depth map
    cv::Mat mat = cv::imread(filename_s, CV_LOAD_IMAGE_COLOR);
    cv::cvtColor(mat, mat, CV_BGR2GRAY);  // we convert to gray, needed to compute depth map
    this->right_image = mat;

    compute_depth_map();
}

void MainWindow::on_pushButton_wls_filter_clicked()
{
    compute_filter_map();
}

// we compute the depth map, if both left image and right image have been added
void MainWindow::compute_depth_map() {
    // we check that both images have been loaded
    if (this->left_image.empty() || this->right_image.empty())
        return;

    // we check that both images have the same size (else OpenCV throws an error)
    if (left_image.rows != right_image.rows || left_image.cols != right_image.cols) {
        ui->label_depth_map->setText("Can't compute depth map: left and right images should be the same size");
        return;
    }

    // we compute the depth map
    // cv::Mat disparity_16S;  // 16 bits, signed
    bmState->compute(left_image, right_image, disparity_16S);

    // we convert the depth map to a QPixmap, to display it in the QUI
    // first, we need to convert the disparity map to a more regular grayscale format
    // then, we convert to RGB, and finally, we can convert to a QImage and then a QPixmap

    // we normalize the values, so that they all fit in the range [0, 255]
    cv::Mat disparity_16S_normal;
    cv::normalize(disparity_16S, disparity_16S_normal, 0, 255, CV_MINMAX);

    // we convert the values from 16 bits signed to 8 bits unsigned
    cv::Mat disp(disparity_16S.rows, disparity_16S.cols, CV_8UC1);
    for (int i=0; i<disparity_16S.rows; i++)
        for (int j=0; j<disparity_16S.cols; j++)
            disp.at<unsigned char>(i,j) = (unsigned char)disparity_16S_normal.at<short>(i,j);

    // we convert from gray to color
    cv::Mat disp_color;
    cv::cvtColor(disp, disp_color, CV_GRAY2RGB);

    // we finally can convert the image to a QPixmap and display it
    QImage disparity_image = QImage((unsigned char*) disp_color.data, disp_color.cols, disp_color.rows, QImage::Format_RGB888);
    QPixmap disparity_pixmap = QPixmap::fromImage(disparity_image);

    // some computation to resize the image if it is too big to fit in the GUI
    int max_width  = std::min(ui->label_depth_map->maximumWidth(),  disparity_image.width());
    int max_height = std::min(ui->label_depth_map->maximumHeight(), disparity_image.height());
    ui->label_depth_map->setPixmap(disparity_pixmap.scaled(max_width, max_height, Qt::KeepAspectRatio));
    ui->label_depth_map->setPixmap(disparity_pixmap);
}

void MainWindow::compute_filter_map() {

    cv::Mat disparity_right_16S, filtered_disparity, filtered_disparity_normal;
    rightState = cv::ximgproc::createRightMatcher(bmState);
    rightState->compute(right_image, left_image, disparity_right_16S);
    wls_filter->filter(disparity_16S, left_image, filtered_disparity, disparity_right_16S);

    cv::Mat filtered_disparth_map();
    cv::normalize(filtered_disparity, filtered_disparity_normal, 0, 255, CV_MINMAX);

    // we convert the values from 16 bits signed to 8 bits unsigned
    cv::Mat disp(filtered_disparity.rows, filtered_disparity.cols, CV_8UC1);
    for (int i=0; i<filtered_disparity.rows; i++)
        for (int j=0; j<filtered_disparity.cols; j++)
            disp.at<unsigned char>(i,j) = (unsigned char)filtered_disparity_normal.at<short>(i,j);

    // we convert from gray to color
    cv::Mat disp_color;
    cv::cvtColor(disp, disp_color, CV_GRAY2RGB);

    // we finally can convert the image to a QPixmap and display it
    QImage disparity_image = QImage((unsigned char*) disp_color.data, disp_color.cols, disp_color.rows, QImage::Format_RGB888);
    QPixmap disparity_pixmap = QPixmap::fromImage(disparity_image);

    // some computation to resize the image if it is too big to fit in the GUI
    int max_width  = std::min(ui->label_depth_map->maximumWidth(),  disparity_image.width());
    int max_height = std::min(ui->label_depth_map->maximumHeight(), disparity_image.height());
    ui->label_depth_map->setPixmap(disparity_pixmap.scaled(max_width, max_height, Qt::KeepAspectRatio));
    ui->label_depth_map->setPixmap(disparity_pixmap);

}


/////////////////// Sliders management (callbacks and constraints) //////////////////////

///// pre filter cap

void MainWindow::on_horizontalSlider_pre_filter_cap_valueChanged(int value)
{
    bmState->setPreFilterCap(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// SAD window size

// the SAD Window size should always be smaller than the size of the images
// so when a new image is loaded, we set the maximum value for the slider
void MainWindow::set_SADWindowSize() {
    int value = 255;  // max value allowed

    // we check that the value is not bigger than the size of the pictures
    if (! left_image.empty())
        value = std::min(value, std::min(left_image.cols, left_image.rows));
    if (! right_image.empty())
        value = std::min(value, std::min(right_image.cols, right_image.rows));

    // we check that the value is >= 5
    value = std::max(value, 5);

    ui->horizontalSlider_SAD_window_size->setMaximum(value);
}

// must be an odd number
void MainWindow::on_horizontalSlider_SAD_window_size_valueChanged(int value)
{
    if ((value % 2) == 0) {
        value -= 1;
        ui->horizontalSlider_SAD_window_size->setValue(value);
    }

    bmState->setBlockSize(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Minimum disparity

void MainWindow::on_horizontalSlider_min_disparity_valueChanged(int value)
{
    bmState->setMinDisparity(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Number of disparities

// callback when slider for number of disparities is moved
// we must allow only values that are divisible by 16
void MainWindow::on_horizontalSlider_num_of_disparity_sliderMoved(int value)
{
    set_num_of_disparity_slider_to_multiple_16(value);
}

// callback when slider for number of disparities is changed
// (for the case when the slider is not moved (just a click), because then the callback above is not called)
// we must allow only values that are divisible by 16
void MainWindow::on_horizontalSlider_num_of_disparity_valueChanged(int value)
{
    set_num_of_disparity_slider_to_multiple_16(value);
}

void MainWindow::set_num_of_disparity_slider_to_multiple_16(int value) {
    if ((value % 16) != 0) {
        value -= (value % 16);
        ui->horizontalSlider_num_of_disparity->setValue(value);
    }

    bmState->setNumDisparities(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Uniqueness ratio

void MainWindow::on_horizontalSlider_uniqueness_ratio_valueChanged(int value)
{
    bmState->setUniquenessRatio(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Speckle window size

void MainWindow::on_horizontalSlider_speckle_window_size_valueChanged(int value)
{
    bmState->setSpeckleWindowSize(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Speckle range

void MainWindow::on_horizontalSlider_speckle_range_valueChanged(int value)
{
    bmState->setSpeckleRange(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Disparity 12 maximum difference

void MainWindow::on_horizontalSlider_disp_12_max_diff_valueChanged(int value)
{
    bmState->setDisp12MaxDiff(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// P1

void MainWindow::on_horizontalSlider_P1_valueChanged(int value)
{
    ui->label_P1_display->setText(QString::number(value));
    bmState->setP1(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// P2

void MainWindow::on_horizontalSlider_P2_valueChanged(int value)
{
    ui->label_P2_display->setText(QString::number(value));
    bmState->setP2(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// Mode

void MainWindow::on_horizontalSlider_Mode_valueChanged(int value)
{
    ui->label_Mode_display->setText(QString::number(value));
    bmState->setMode(value);
    if(real_time_flag){
        compute_depth_map();
    }
}

///// WLS_lambda

void MainWindow::on_horizontalSlider_WLS_lambda_valueChanged(int value)
{
    ui->label_wls_lambda_display->setText(QString::number(value));
    wls_filter->setLambda(value);
}

///// WLS_sigma

void MainWindow::on_horizontalSlider_WLS_sigma_valueChanged(int value)
{
    ui->label_wls_sigma_display->setText(QString::number(value));
    wls_filter->setSigmaColor(value/10);
}


void MainWindow::on_checkBox_realtime_toggled(bool checked)
{
    real_time_flag = checked;
}

void MainWindow::on_pushButton_depth_map_clicked()
{
    if(real_time_flag == false){
        compute_depth_map();
    }
}
