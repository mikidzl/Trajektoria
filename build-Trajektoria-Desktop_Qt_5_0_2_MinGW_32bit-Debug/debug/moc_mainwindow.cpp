/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Trajektoria/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[24];
    char stringdata[401];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 6),
QT_MOC_LITERAL(4, 34, 1),
QT_MOC_LITERAL(5, 36, 10),
QT_MOC_LITERAL(6, 47, 5),
QT_MOC_LITERAL(7, 53, 19),
QT_MOC_LITERAL(8, 73, 27),
QT_MOC_LITERAL(9, 101, 5),
QT_MOC_LITERAL(10, 107, 22),
QT_MOC_LITERAL(11, 130, 27),
QT_MOC_LITERAL(12, 158, 24),
QT_MOC_LITERAL(13, 183, 20),
QT_MOC_LITERAL(14, 204, 32),
QT_MOC_LITERAL(15, 237, 5),
QT_MOC_LITERAL(16, 243, 23),
QT_MOC_LITERAL(17, 267, 7),
QT_MOC_LITERAL(18, 275, 24),
QT_MOC_LITERAL(19, 300, 19),
QT_MOC_LITERAL(20, 320, 29),
QT_MOC_LITERAL(21, 350, 15),
QT_MOC_LITERAL(22, 366, 8),
QT_MOC_LITERAL(23, 375, 24)
    },
    "MainWindow\0przeslij_liste\0\0Punkt*\0g\0"
    "zapiszPlik\0nazwa\0on_pB_start_clicked\0"
    "on_hS_predkosc_valueChanged\0value\0"
    "on_hS_kat_valueChanged\0"
    "on_hS_wysokosc_valueChanged\0"
    "on_hS_wiatr_valueChanged\0on_pB_zapisz_clicked\0"
    "on_cB_obiekt_currentIndexChanged\0index\0"
    "on_cB_atmosfera_clicked\0checked\0"
    "on_actionAutor_triggered\0on_pb_pokaz_clicked\0"
    "on_actionInstrukcja_triggered\0"
    "aktualizuj_traj\0strzalki\0"
    "on_pB_statystyki_clicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       5,    1,   97,    2, 0x0a,
       7,    0,  100,    2, 0x08,
       8,    1,  101,    2, 0x08,
      10,    1,  104,    2, 0x08,
      11,    1,  107,    2, 0x08,
      12,    1,  110,    2, 0x08,
      13,    0,  113,    2, 0x08,
      14,    1,  114,    2, 0x08,
      16,    1,  117,    2, 0x08,
      18,    0,  120,    2, 0x08,
      19,    0,  121,    2, 0x08,
      20,    0,  122,    2, 0x08,
      21,    0,  123,    2, 0x08,
      22,    0,  124,    2, 0x08,
      23,    0,  125,    2, 0x08,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->przeslij_liste((*reinterpret_cast< Punkt*(*)>(_a[1]))); break;
        case 1: _t->zapiszPlik((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_hS_predkosc_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_hS_kat_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_hS_wysokosc_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_hS_wiatr_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_pB_zapisz_clicked(); break;
        case 8: _t->on_cB_obiekt_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->on_cB_atmosfera_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_actionAutor_triggered(); break;
        case 11: _t->on_pb_pokaz_clicked(); break;
        case 12: _t->on_actionInstrukcja_triggered(); break;
        case 13: _t->aktualizuj_traj(); break;
        case 14: _t->strzalki(); break;
        case 15: _t->on_pB_statystyki_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(Punkt * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::przeslij_liste)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::przeslij_liste(Punkt * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
