/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Tue 1. Sep 00:33:08 2009
**      by: The Qt Meta Object Compiler version 61 (Qt 4.5.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 61
#error "This file was generated using the moc from 4.5.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       2,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   12, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      21,   11,   11,   11, 0x08,
      60,   52,   11,   11, 0x08,
      93,   11,   11,   11, 0x08,
     125,   11,   11,   11, 0x08,
     150,   11,   11,   11, 0x08,
     179,   11,   11,   11, 0x08,
     219,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0toggle()\0"
    "on_generateTerrain_triggered()\0checked\0"
    "on_actionWireframe_toggled(bool)\0"
    "on_actionBlendTexture_toggled()\0"
    "on_actionLight_toggled()\0"
    "on_actionHeightmap_toggled()\0"
    "on_actionVerticesDisplacement_toggled()\0"
    "on_generateCity_triggered()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

const QMetaObject *MainWindow::metaObject() const
{
    return &staticMetaObject;
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
        switch (_id) {
        case 0: toggle(); break;
        case 1: on_generateTerrain_triggered(); break;
        case 2: on_actionWireframe_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: on_actionBlendTexture_toggled(); break;
        case 4: on_actionLight_toggled(); break;
        case 5: on_actionHeightmap_toggled(); break;
        case 6: on_actionVerticesDisplacement_toggled(); break;
        case 7: on_generateCity_triggered(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
