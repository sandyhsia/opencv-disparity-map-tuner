/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      41,   11,   11,   11, 0x08,
      71,   11,   11,   11, 0x08,
     115,  106,   11,   11, 0x08,
     175,  169,   11,   11, 0x08,
     230,  169,   11,   11, 0x08,
     284,  169,   11,   11, 0x08,
     337,  169,   11,   11, 0x08,
     389,  169,   11,   11, 0x08,
     444,  169,   11,   11, 0x08,
     502,  169,   11,   11, 0x08,
     554,  169,   11,   11, 0x08,
     609,  169,   11,   11, 0x08,
     650,  169,   11,   11, 0x08,
     691,  169,   11,   11, 0x08,
     734,  169,   11,   11, 0x08,
     783,  169,   11,   11, 0x08,
     839,  831,   11,   11, 0x08,
     874,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0on_pushButton_left_clicked()\0"
    "on_pushButton_right_clicked()\0"
    "on_pushButton_wls_filter_clicked()\0"
    "position\0on_horizontalSlider_num_of_disparity_sliderMoved(int)\0"
    "value\0on_horizontalSlider_num_of_disparity_valueChanged(int)\0"
    "on_horizontalSlider_SAD_window_size_valueChanged(int)\0"
    "on_horizontalSlider_pre_filter_cap_valueChanged(int)\0"
    "on_horizontalSlider_min_disparity_valueChanged(int)\0"
    "on_horizontalSlider_uniqueness_ratio_valueChanged(int)\0"
    "on_horizontalSlider_speckle_window_size_valueChanged(int)\0"
    "on_horizontalSlider_speckle_range_valueChanged(int)\0"
    "on_horizontalSlider_disp_12_max_diff_valueChanged(int)\0"
    "on_horizontalSlider_P1_valueChanged(int)\0"
    "on_horizontalSlider_P2_valueChanged(int)\0"
    "on_horizontalSlider_Mode_valueChanged(int)\0"
    "on_horizontalSlider_WLS_lambda_valueChanged(int)\0"
    "on_horizontalSlider_WLS_sigma_valueChanged(int)\0"
    "checked\0on_checkBox_realtime_toggled(bool)\0"
    "on_pushButton_depth_map_clicked()\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_left_clicked(); break;
        case 1: _t->on_pushButton_right_clicked(); break;
        case 2: _t->on_pushButton_wls_filter_clicked(); break;
        case 3: _t->on_horizontalSlider_num_of_disparity_sliderMoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_horizontalSlider_num_of_disparity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_horizontalSlider_SAD_window_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_horizontalSlider_pre_filter_cap_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_horizontalSlider_min_disparity_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_horizontalSlider_uniqueness_ratio_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_horizontalSlider_speckle_window_size_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->on_horizontalSlider_speckle_range_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->on_horizontalSlider_disp_12_max_diff_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_horizontalSlider_P1_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_horizontalSlider_P2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_horizontalSlider_Mode_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->on_horizontalSlider_WLS_lambda_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: _t->on_horizontalSlider_WLS_sigma_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->on_checkBox_realtime_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->on_pushButton_depth_map_clicked(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
