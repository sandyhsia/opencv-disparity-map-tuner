/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label_image_left;
    QLabel *label_image_right;
    QLabel *label_depth_map;
    QGridLayout *gridLayout_buttons;
    QSlider *horizontalSlider_num_of_disparity;
    QSlider *horizontalSlider_uniqueness_ratio;
    QLabel *label_Mode_display;
    QLabel *label_10;
    QLabel *label_5;
    QSlider *horizontalSlider_speckle_range;
    QSlider *horizontalSlider_Mode;
    QLabel *label_disp_12_max_diff;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_num_of_disparity;
    QSlider *horizontalSlider_SAD_window_size;
    QLabel *label_4;
    QSlider *horizontalSlider_P1;
    QLabel *label_SAD_window_size;
    QLabel *label_min_disparity;
    QLabel *label_Mode;
    QLabel *label_pre_filter_cap;
    QLabel *label_P2;
    QPushButton *pushButton_right;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_speckle_window_size;
    QLabel *label_P1_display;
    QSlider *horizontalSlider_speckle_window_size;
    QSlider *horizontalSlider_P2;
    QLabel *label_P1;
    QLabel *label_WLS_sigma;
    QSlider *horizontalSlider_disp_12_max_diff;
    QLabel *label_P2_display;
    QSlider *horizontalSlider_min_disparity;
    QSlider *horizontalSlider_pre_filter_cap;
    QLabel *label_uniqueness_ratio;
    QPushButton *pushButton_left;
    QLabel *label_7;
    QLabel *label_WLS_lambda;
    QSlider *horizontalSlider_WLS_lambda;
    QLabel *label_wls_lambda_display;
    QLabel *label_speckle_range;
    QSlider *horizontalSlider_WLS_sigma;
    QLabel *label_wls_sigma_display;
    QGridLayout *gridLayout_3;
    QPushButton *pushButton_depth_map;
    QPushButton *pushButton_wls_filter;
    QCheckBox *checkBox_realtime;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(646, 367);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_image_left = new QLabel(centralWidget);
        label_image_left->setObjectName(QString::fromUtf8("label_image_left"));
        label_image_left->setMaximumSize(QSize(480, 360));
        label_image_left->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_image_left, 0, 0, 1, 1);

        label_image_right = new QLabel(centralWidget);
        label_image_right->setObjectName(QString::fromUtf8("label_image_right"));
        label_image_right->setMaximumSize(QSize(480, 360));
        label_image_right->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_image_right, 0, 1, 1, 1);

        label_depth_map = new QLabel(centralWidget);
        label_depth_map->setObjectName(QString::fromUtf8("label_depth_map"));
        label_depth_map->setMaximumSize(QSize(480, 360));
        label_depth_map->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_depth_map, 2, 1, 1, 2);

        gridLayout_buttons = new QGridLayout();
        gridLayout_buttons->setSpacing(6);
        gridLayout_buttons->setObjectName(QString::fromUtf8("gridLayout_buttons"));
        horizontalSlider_num_of_disparity = new QSlider(centralWidget);
        horizontalSlider_num_of_disparity->setObjectName(QString::fromUtf8("horizontalSlider_num_of_disparity"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(horizontalSlider_num_of_disparity->sizePolicy().hasHeightForWidth());
        horizontalSlider_num_of_disparity->setSizePolicy(sizePolicy);
        horizontalSlider_num_of_disparity->setMinimum(16);
        horizontalSlider_num_of_disparity->setMaximum(256);
        horizontalSlider_num_of_disparity->setSingleStep(16);
        horizontalSlider_num_of_disparity->setPageStep(16);
        horizontalSlider_num_of_disparity->setValue(128);
        horizontalSlider_num_of_disparity->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_num_of_disparity, 4, 1, 1, 1);

        horizontalSlider_uniqueness_ratio = new QSlider(centralWidget);
        horizontalSlider_uniqueness_ratio->setObjectName(QString::fromUtf8("horizontalSlider_uniqueness_ratio"));
        sizePolicy.setHeightForWidth(horizontalSlider_uniqueness_ratio->sizePolicy().hasHeightForWidth());
        horizontalSlider_uniqueness_ratio->setSizePolicy(sizePolicy);
        horizontalSlider_uniqueness_ratio->setMaximum(255);
        horizontalSlider_uniqueness_ratio->setValue(15);
        horizontalSlider_uniqueness_ratio->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_uniqueness_ratio, 7, 1, 1, 1);

        label_Mode_display = new QLabel(centralWidget);
        label_Mode_display->setObjectName(QString::fromUtf8("label_Mode_display"));

        gridLayout_buttons->addWidget(label_Mode_display, 12, 2, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_buttons->addWidget(label_10, 11, 2, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_buttons->addWidget(label_5, 4, 2, 1, 1);

        horizontalSlider_speckle_range = new QSlider(centralWidget);
        horizontalSlider_speckle_range->setObjectName(QString::fromUtf8("horizontalSlider_speckle_range"));
        sizePolicy.setHeightForWidth(horizontalSlider_speckle_range->sizePolicy().hasHeightForWidth());
        horizontalSlider_speckle_range->setSizePolicy(sizePolicy);
        horizontalSlider_speckle_range->setMinimum(0);
        horizontalSlider_speckle_range->setMaximum(3);
        horizontalSlider_speckle_range->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_speckle_range, 10, 1, 1, 1);

        horizontalSlider_Mode = new QSlider(centralWidget);
        horizontalSlider_Mode->setObjectName(QString::fromUtf8("horizontalSlider_Mode"));
        horizontalSlider_Mode->setMaximum(2);
        horizontalSlider_Mode->setSliderPosition(0);
        horizontalSlider_Mode->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_Mode, 12, 1, 1, 1);

        label_disp_12_max_diff = new QLabel(centralWidget);
        label_disp_12_max_diff->setObjectName(QString::fromUtf8("label_disp_12_max_diff"));

        gridLayout_buttons->addWidget(label_disp_12_max_diff, 11, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_buttons->addWidget(label_2, 1, 2, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_buttons->addWidget(label_9, 10, 2, 1, 1);

        label_num_of_disparity = new QLabel(centralWidget);
        label_num_of_disparity->setObjectName(QString::fromUtf8("label_num_of_disparity"));

        gridLayout_buttons->addWidget(label_num_of_disparity, 4, 0, 1, 1);

        horizontalSlider_SAD_window_size = new QSlider(centralWidget);
        horizontalSlider_SAD_window_size->setObjectName(QString::fromUtf8("horizontalSlider_SAD_window_size"));
        sizePolicy.setHeightForWidth(horizontalSlider_SAD_window_size->sizePolicy().hasHeightForWidth());
        horizontalSlider_SAD_window_size->setSizePolicy(sizePolicy);
        horizontalSlider_SAD_window_size->setMinimum(5);
        horizontalSlider_SAD_window_size->setMaximum(255);
        horizontalSlider_SAD_window_size->setSingleStep(2);
        horizontalSlider_SAD_window_size->setValue(41);
        horizontalSlider_SAD_window_size->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_SAD_window_size, 2, 1, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_buttons->addWidget(label_4, 3, 2, 1, 1);

        horizontalSlider_P1 = new QSlider(centralWidget);
        horizontalSlider_P1->setObjectName(QString::fromUtf8("horizontalSlider_P1"));
        horizontalSlider_P1->setMaximum(5000);
        horizontalSlider_P1->setValue(1);
        horizontalSlider_P1->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_P1, 5, 1, 1, 1);

        label_SAD_window_size = new QLabel(centralWidget);
        label_SAD_window_size->setObjectName(QString::fromUtf8("label_SAD_window_size"));

        gridLayout_buttons->addWidget(label_SAD_window_size, 2, 0, 1, 1);

        label_min_disparity = new QLabel(centralWidget);
        label_min_disparity->setObjectName(QString::fromUtf8("label_min_disparity"));

        gridLayout_buttons->addWidget(label_min_disparity, 3, 0, 1, 1);

        label_Mode = new QLabel(centralWidget);
        label_Mode->setObjectName(QString::fromUtf8("label_Mode"));

        gridLayout_buttons->addWidget(label_Mode, 12, 0, 1, 1);

        label_pre_filter_cap = new QLabel(centralWidget);
        label_pre_filter_cap->setObjectName(QString::fromUtf8("label_pre_filter_cap"));

        gridLayout_buttons->addWidget(label_pre_filter_cap, 1, 0, 1, 1);

        label_P2 = new QLabel(centralWidget);
        label_P2->setObjectName(QString::fromUtf8("label_P2"));

        gridLayout_buttons->addWidget(label_P2, 6, 0, 1, 1);

        pushButton_right = new QPushButton(centralWidget);
        pushButton_right->setObjectName(QString::fromUtf8("pushButton_right"));

        gridLayout_buttons->addWidget(pushButton_right, 0, 1, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_buttons->addWidget(label_3, 2, 2, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_buttons->addWidget(label_8, 9, 2, 1, 1);

        label_speckle_window_size = new QLabel(centralWidget);
        label_speckle_window_size->setObjectName(QString::fromUtf8("label_speckle_window_size"));

        gridLayout_buttons->addWidget(label_speckle_window_size, 9, 0, 1, 1);

        label_P1_display = new QLabel(centralWidget);
        label_P1_display->setObjectName(QString::fromUtf8("label_P1_display"));

        gridLayout_buttons->addWidget(label_P1_display, 5, 2, 1, 1);

        horizontalSlider_speckle_window_size = new QSlider(centralWidget);
        horizontalSlider_speckle_window_size->setObjectName(QString::fromUtf8("horizontalSlider_speckle_window_size"));
        sizePolicy.setHeightForWidth(horizontalSlider_speckle_window_size->sizePolicy().hasHeightForWidth());
        horizontalSlider_speckle_window_size->setSizePolicy(sizePolicy);
        horizontalSlider_speckle_window_size->setMaximum(250);
        horizontalSlider_speckle_window_size->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_speckle_window_size, 9, 1, 1, 1);

        horizontalSlider_P2 = new QSlider(centralWidget);
        horizontalSlider_P2->setObjectName(QString::fromUtf8("horizontalSlider_P2"));
        horizontalSlider_P2->setMaximum(5000);
        horizontalSlider_P2->setValue(1);
        horizontalSlider_P2->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_P2, 6, 1, 1, 1);

        label_P1 = new QLabel(centralWidget);
        label_P1->setObjectName(QString::fromUtf8("label_P1"));

        gridLayout_buttons->addWidget(label_P1, 5, 0, 1, 1);

        label_WLS_sigma = new QLabel(centralWidget);
        label_WLS_sigma->setObjectName(QString::fromUtf8("label_WLS_sigma"));

        gridLayout_buttons->addWidget(label_WLS_sigma, 14, 0, 1, 1);

        horizontalSlider_disp_12_max_diff = new QSlider(centralWidget);
        horizontalSlider_disp_12_max_diff->setObjectName(QString::fromUtf8("horizontalSlider_disp_12_max_diff"));
        sizePolicy.setHeightForWidth(horizontalSlider_disp_12_max_diff->sizePolicy().hasHeightForWidth());
        horizontalSlider_disp_12_max_diff->setSizePolicy(sizePolicy);
        horizontalSlider_disp_12_max_diff->setMinimum(-1);
        horizontalSlider_disp_12_max_diff->setMaximum(100);
        horizontalSlider_disp_12_max_diff->setValue(-1);
        horizontalSlider_disp_12_max_diff->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_disp_12_max_diff, 11, 1, 1, 1);

        label_P2_display = new QLabel(centralWidget);
        label_P2_display->setObjectName(QString::fromUtf8("label_P2_display"));

        gridLayout_buttons->addWidget(label_P2_display, 6, 2, 1, 1);

        horizontalSlider_min_disparity = new QSlider(centralWidget);
        horizontalSlider_min_disparity->setObjectName(QString::fromUtf8("horizontalSlider_min_disparity"));
        sizePolicy.setHeightForWidth(horizontalSlider_min_disparity->sizePolicy().hasHeightForWidth());
        horizontalSlider_min_disparity->setSizePolicy(sizePolicy);
        horizontalSlider_min_disparity->setMinimum(-300);
        horizontalSlider_min_disparity->setMaximum(100);
        horizontalSlider_min_disparity->setSingleStep(1);
        horizontalSlider_min_disparity->setPageStep(10);
        horizontalSlider_min_disparity->setValue(-64);
        horizontalSlider_min_disparity->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_min_disparity, 3, 1, 1, 1);

        horizontalSlider_pre_filter_cap = new QSlider(centralWidget);
        horizontalSlider_pre_filter_cap->setObjectName(QString::fromUtf8("horizontalSlider_pre_filter_cap"));
        sizePolicy.setHeightForWidth(horizontalSlider_pre_filter_cap->sizePolicy().hasHeightForWidth());
        horizontalSlider_pre_filter_cap->setSizePolicy(sizePolicy);
        horizontalSlider_pre_filter_cap->setMinimum(1);
        horizontalSlider_pre_filter_cap->setMaximum(63);
        horizontalSlider_pre_filter_cap->setValue(31);
        horizontalSlider_pre_filter_cap->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_pre_filter_cap, 1, 1, 1, 1);

        label_uniqueness_ratio = new QLabel(centralWidget);
        label_uniqueness_ratio->setObjectName(QString::fromUtf8("label_uniqueness_ratio"));

        gridLayout_buttons->addWidget(label_uniqueness_ratio, 7, 0, 1, 1);

        pushButton_left = new QPushButton(centralWidget);
        pushButton_left->setObjectName(QString::fromUtf8("pushButton_left"));

        gridLayout_buttons->addWidget(pushButton_left, 0, 0, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_buttons->addWidget(label_7, 7, 2, 1, 1);

        label_WLS_lambda = new QLabel(centralWidget);
        label_WLS_lambda->setObjectName(QString::fromUtf8("label_WLS_lambda"));

        gridLayout_buttons->addWidget(label_WLS_lambda, 13, 0, 1, 1);

        horizontalSlider_WLS_lambda = new QSlider(centralWidget);
        horizontalSlider_WLS_lambda->setObjectName(QString::fromUtf8("horizontalSlider_WLS_lambda"));
        horizontalSlider_WLS_lambda->setMaximum(80000);
        horizontalSlider_WLS_lambda->setSingleStep(1000);
        horizontalSlider_WLS_lambda->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_WLS_lambda, 13, 1, 1, 1);

        label_wls_lambda_display = new QLabel(centralWidget);
        label_wls_lambda_display->setObjectName(QString::fromUtf8("label_wls_lambda_display"));

        gridLayout_buttons->addWidget(label_wls_lambda_display, 13, 2, 1, 1);

        label_speckle_range = new QLabel(centralWidget);
        label_speckle_range->setObjectName(QString::fromUtf8("label_speckle_range"));

        gridLayout_buttons->addWidget(label_speckle_range, 10, 0, 1, 1);

        horizontalSlider_WLS_sigma = new QSlider(centralWidget);
        horizontalSlider_WLS_sigma->setObjectName(QString::fromUtf8("horizontalSlider_WLS_sigma"));
        horizontalSlider_WLS_sigma->setMinimum(0);
        horizontalSlider_WLS_sigma->setMaximum(20);
        horizontalSlider_WLS_sigma->setSingleStep(1);
        horizontalSlider_WLS_sigma->setPageStep(10);
        horizontalSlider_WLS_sigma->setSliderPosition(8);
        horizontalSlider_WLS_sigma->setOrientation(Qt::Horizontal);

        gridLayout_buttons->addWidget(horizontalSlider_WLS_sigma, 14, 1, 1, 1);

        label_wls_sigma_display = new QLabel(centralWidget);
        label_wls_sigma_display->setObjectName(QString::fromUtf8("label_wls_sigma_display"));

        gridLayout_buttons->addWidget(label_wls_sigma_display, 14, 2, 1, 1);


        gridLayout->addLayout(gridLayout_buttons, 2, 0, 2, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        pushButton_depth_map = new QPushButton(centralWidget);
        pushButton_depth_map->setObjectName(QString::fromUtf8("pushButton_depth_map"));

        gridLayout_3->addWidget(pushButton_depth_map, 0, 1, 1, 1);

        pushButton_wls_filter = new QPushButton(centralWidget);
        pushButton_wls_filter->setObjectName(QString::fromUtf8("pushButton_wls_filter"));

        gridLayout_3->addWidget(pushButton_wls_filter, 0, 2, 1, 1);

        checkBox_realtime = new QCheckBox(centralWidget);
        checkBox_realtime->setObjectName(QString::fromUtf8("checkBox_realtime"));

        gridLayout_3->addWidget(checkBox_realtime, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout_3, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_pre_filter_cap, SIGNAL(valueChanged(int)), label_2, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_SAD_window_size, SIGNAL(valueChanged(int)), label_3, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_min_disparity, SIGNAL(valueChanged(int)), label_4, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_num_of_disparity, SIGNAL(valueChanged(int)), label_5, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_uniqueness_ratio, SIGNAL(valueChanged(int)), label_7, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_speckle_window_size, SIGNAL(valueChanged(int)), label_8, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_speckle_range, SIGNAL(valueChanged(int)), label_9, SLOT(setNum(int)));
        QObject::connect(horizontalSlider_disp_12_max_diff, SIGNAL(valueChanged(int)), label_10, SLOT(setNum(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "OpenCV StereoCorrespondenceBM Tuner", 0, QApplication::UnicodeUTF8));
        label_image_left->setText(QApplication::translate("MainWindow", "Left image", 0, QApplication::UnicodeUTF8));
        label_image_right->setText(QApplication::translate("MainWindow", "Right image", 0, QApplication::UnicodeUTF8));
        label_depth_map->setText(QApplication::translate("MainWindow", "Depth map", 0, QApplication::UnicodeUTF8));
        label_Mode_display->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindow", "-1", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindow", "128", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_disp_12_max_diff->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum allowed difference (in integer pixel units) in the left-right disparity check. Set it to a non-positive value to disable the check.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_disp_12_max_diff->setText(QApplication::translate("MainWindow", "Disp. 12 max. diff.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindow", "31", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_num_of_disparity->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum disparity minus minimum disparity. The value is always greater than zero. In the current implementation, this parameter must be divisible by 16.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_num_of_disparity->setText(QApplication::translate("MainWindow", "Number of disparity", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "-64", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_SAD_window_size->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Matched block size. It must be an odd number <span style=\" font-family:'Courier New,courier';\">&gt;=1</span> . Normally, it should be somewhere in the <span style=\" font-family:'Courier New,courier';\">3..11</span> range.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_SAD_window_size->setText(QApplication::translate("MainWindow", "SAD window size", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_min_disparity->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Minimum possible disparity value. Normally, it is zero but sometimes rectification algorithms can shift images, so this parameter needs to be adjusted accordingly.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_min_disparity->setText(QApplication::translate("MainWindow", "Minimum disparity", 0, QApplication::UnicodeUTF8));
        label_Mode->setText(QApplication::translate("MainWindow", "Mode", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_pre_filter_cap->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Truncation value for the prefiltered image pixels. The algorithm first computes x-derivative at each pixel and clips its value by <span style=\" font-family:'Courier New,courier';\">[-preFilterCap, preFilterCap]</span> interval. The result values are passed to the Birchfield-Tomasi pixel cost function.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_pre_filter_cap->setText(QApplication::translate("MainWindow", "Pre-filter cap", 0, QApplication::UnicodeUTF8));
        label_P2->setText(QApplication::translate("MainWindow", "P2", 0, QApplication::UnicodeUTF8));
        pushButton_right->setText(QApplication::translate("MainWindow", "Load right image", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "41", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindow", "0", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_speckle_window_size->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum size of smooth disparity regions to consider their noise speckles and invalidate. Set it to 0 to disable speckle filtering. Otherwise, set it somewhere in the 50-200 range.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_speckle_window_size->setText(QApplication::translate("MainWindow", "Speckle window size", 0, QApplication::UnicodeUTF8));
        label_P1_display->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
        label_P1->setText(QApplication::translate("MainWindow", "P1", 0, QApplication::UnicodeUTF8));
        label_WLS_sigma->setText(QApplication::translate("MainWindow", "WLS_sigma", 0, QApplication::UnicodeUTF8));
        label_P2_display->setText(QApplication::translate("MainWindow", "1", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_uniqueness_ratio->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Margin in percentage by which the best (minimum) computed cost function value should \342\200\234win\342\200\235 the second best value to consider the found match correct. Normally, a value within the 5-15 range is good enough.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_uniqueness_ratio->setText(QApplication::translate("MainWindow", "Uniqueness ratio", 0, QApplication::UnicodeUTF8));
        pushButton_left->setText(QApplication::translate("MainWindow", "Load left image", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindow", "15", 0, QApplication::UnicodeUTF8));
        label_WLS_lambda->setText(QApplication::translate("MainWindow", "WLS_lambda", 0, QApplication::UnicodeUTF8));
        label_wls_lambda_display->setText(QApplication::translate("MainWindow", "6000", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_speckle_range->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>Maximum disparity variation within each connected component. If you do speckle filtering, set the parameter to a positive value, it will be implicitly multiplied by 16. Normally, 1 or 2 is good enough.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_speckle_range->setText(QApplication::translate("MainWindow", "Speckle range", 0, QApplication::UnicodeUTF8));
        label_wls_sigma_display->setText(QApplication::translate("MainWindow", "1.0", 0, QApplication::UnicodeUTF8));
        pushButton_depth_map->setText(QApplication::translate("MainWindow", "depth map", 0, QApplication::UnicodeUTF8));
        pushButton_wls_filter->setText(QApplication::translate("MainWindow", "WLSFilter", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        checkBox_realtime->setToolTip(QApplication::translate("MainWindow", "<html><head/><body><p>If image is larger than 500x500, it's recommended to disable the realtime functionality.</p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        checkBox_realtime->setText(QApplication::translate("MainWindow", "RealTime_depth_map", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
