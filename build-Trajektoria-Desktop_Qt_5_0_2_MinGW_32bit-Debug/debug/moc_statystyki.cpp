/****************************************************************************
** Meta object code from reading C++ file 'statystyki.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.0.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Trajektoria/statystyki.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'statystyki.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.0.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_statystyki_t {
    QByteArrayData data[11];
    char stringdata[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_statystyki_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_statystyki_t qt_meta_stringdata_statystyki = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 14),
QT_MOC_LITERAL(2, 26, 0),
QT_MOC_LITERAL(3, 27, 6),
QT_MOC_LITERAL(4, 34, 1),
QT_MOC_LITERAL(5, 36, 20),
QT_MOC_LITERAL(6, 57, 12),
QT_MOC_LITERAL(7, 70, 6),
QT_MOC_LITERAL(8, 77, 6),
QT_MOC_LITERAL(9, 84, 16),
QT_MOC_LITERAL(10, 101, 12)
    },
    "statystyki\0przyjmij_liste\0\0Punkt*\0p\0"
    "on_pB_wykres_clicked\0rysuj_wykres\0"
    "size_x\0size_y\0aktualizuj_staty\0"
    "pokaz_wykres\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_statystyki[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a,
       5,    0,   42,    2, 0x08,
       6,    3,   43,    2, 0x08,
       9,    1,   50,    2, 0x08,
      10,    1,   53,    2, 0x08,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::QPixmap, 0x80000000 | 3, QMetaType::Int, QMetaType::Int,    4,    7,    8,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void statystyki::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        statystyki *_t = static_cast<statystyki *>(_o);
        switch (_id) {
        case 0: _t->przyjmij_liste((*reinterpret_cast< Punkt*(*)>(_a[1]))); break;
        case 1: _t->on_pB_wykres_clicked(); break;
        case 2: { QPixmap _r = _t->rysuj_wykres((*reinterpret_cast< Punkt*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])));
            if (_a[0]) *reinterpret_cast< QPixmap*>(_a[0]) = _r; }  break;
        case 3: _t->aktualizuj_staty((*reinterpret_cast< Punkt*(*)>(_a[1]))); break;
        case 4: _t->pokaz_wykres((*reinterpret_cast< Punkt*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject statystyki::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_statystyki.data,
      qt_meta_data_statystyki,  qt_static_metacall, 0, 0}
};


const QMetaObject *statystyki::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *statystyki::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_statystyki.stringdata))
        return static_cast<void*>(const_cast< statystyki*>(this));
    return QDialog::qt_metacast(_clname);
}

int statystyki::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
