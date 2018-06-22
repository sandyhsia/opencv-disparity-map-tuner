#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <iostream>

#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/ximgproc/disparity_filter.hpp"

#include <QMainWindow>
#include <QFileDialog>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_left_clicked();

    void on_pushButton_right_clicked();

    void on_pushButton_wls_filter_clicked();

    void on_horizontalSlider_num_of_disparity_sliderMoved(int position);

    void on_horizontalSlider_num_of_disparity_valueChanged(int value);

    void on_horizontalSlider_SAD_window_size_valueChanged(int value);

    void on_horizontalSlider_pre_filter_cap_valueChanged(int value);

    void on_horizontalSlider_min_disparity_valueChanged(int value);

    void on_horizontalSlider_uniqueness_ratio_valueChanged(int value);

    void on_horizontalSlider_speckle_window_size_valueChanged(int value);

    void on_horizontalSlider_speckle_range_valueChanged(int value);

    void on_horizontalSlider_disp_12_max_diff_valueChanged(int value);

    void on_horizontalSlider_P1_valueChanged(int value);

    void on_horizontalSlider_P2_valueChanged(int value);

    void on_horizontalSlider_Mode_valueChanged(int value);

    void on_horizontalSlider_WLS_lambda_valueChanged(int value);

    void on_horizontalSlider_WLS_sigma_valueChanged(int value);

    void on_checkBox_realtime_toggled(bool checked);

    void on_pushButton_depth_map_clicked();

private:
    // the UI object, to access the UI elements created with Qt Designer
    Ui::MainWindow *ui;

    // the left and right pictures, converted to OpenCV Mat format
    cv::Mat left_image;
    cv::Mat right_image;

    cv::Mat disparity_16S;  // 16 bits, signed

    // the object that holds the parameters for the semi-global block-matching algorithm
    cv::Ptr<cv::StereoSGBM> bmState;
    cv::Ptr<cv::StereoMatcher> rightState;

    // the object that holds the parameters for the wls-filter
    cv::Ptr<cv::ximgproc::DisparityWLSFilter> wls_filter;

    void compute_depth_map();  // compute depth map with OpenCV
    void compute_filter_map();  // compute depth map with OpenCV wls filter

    // functions to manage constraints on sliders
    void set_SADWindowSize();  // manage max value of SADWindowSize slider
    void set_num_of_disparity_slider_to_multiple_16(int position);

    //other configs
    bool real_time_flag;
};

#endif // MAINWINDOW_H
