/****************************************************************************
** Meta object code from reading C++ file 'debugger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.1.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../source/debugger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'debugger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.1.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Debugger_t {
    QByteArrayData data[20];
    char stringdata[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_Debugger_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_Debugger_t qt_meta_stringdata_Debugger = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 15),
QT_MOC_LITERAL(2, 25, 0),
QT_MOC_LITERAL(3, 26, 15),
QT_MOC_LITERAL(4, 42, 8),
QT_MOC_LITERAL(5, 51, 4),
QT_MOC_LITERAL(6, 56, 11),
QT_MOC_LITERAL(7, 68, 9),
QT_MOC_LITERAL(8, 78, 9),
QT_MOC_LITERAL(9, 88, 6),
QT_MOC_LITERAL(10, 95, 4),
QT_MOC_LITERAL(11, 100, 17),
QT_MOC_LITERAL(12, 118, 3),
QT_MOC_LITERAL(13, 122, 3),
QT_MOC_LITERAL(14, 126, 11),
QT_MOC_LITERAL(15, 138, 9),
QT_MOC_LITERAL(16, 148, 3),
QT_MOC_LITERAL(17, 152, 20),
QT_MOC_LITERAL(18, 173, 6),
QT_MOC_LITERAL(19, 180, 18)
    },
    "Debugger\0execInitialized\0\0execInterrupted\0"
    "filePath\0line\0execResumed\0execEnded\0"
    "interrupt\0resume\0stop\0cellDoubleClicked\0"
    "row\0col\0processData\0gameEnded\0ret\0"
    "QProcess::ExitStatus\0status\0"
    "sendAllBreakpoints\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Debugger[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x05,
       3,    2,   70,    2, 0x05,
       6,    0,   75,    2, 0x05,
       7,    0,   76,    2, 0x05,

 // slots: name, argc, parameters, tag, flags
       8,    0,   77,    2, 0x0a,
       9,    0,   78,    2, 0x0a,
      10,    0,   79,    2, 0x0a,
      11,    2,   80,    2, 0x08,
      14,    0,   85,    2, 0x08,
      15,    2,   86,    2, 0x08,
      19,    0,   91,    2, 0x08,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 17,   16,   18,
    QMetaType::Void,

       0        // eod
};

void Debugger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Debugger *_t = static_cast<Debugger *>(_o);
        switch (_id) {
        case 0: _t->execInitialized(); break;
        case 1: _t->execInterrupted((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->execResumed(); break;
        case 3: _t->execEnded(); break;
        case 4: _t->interrupt(); break;
        case 5: _t->resume(); break;
        case 6: _t->stop(); break;
        case 7: _t->cellDoubleClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->processData(); break;
        case 9: _t->gameEnded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 10: _t->sendAllBreakpoints(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::execInitialized)) {
                *result = 0;
            }
        }
        {
            typedef void (Debugger::*_t)(QString , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::execInterrupted)) {
                *result = 1;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::execResumed)) {
                *result = 2;
            }
        }
        {
            typedef void (Debugger::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Debugger::execEnded)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject Debugger::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Debugger.data,
      qt_meta_data_Debugger,  qt_static_metacall, 0, 0}
};


const QMetaObject *Debugger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Debugger::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Debugger.stringdata))
        return static_cast<void*>(const_cast< Debugger*>(this));
    return QObject::qt_metacast(_clname);
}

int Debugger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Debugger::execInitialized()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Debugger::execInterrupted(QString _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Debugger::execResumed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Debugger::execEnded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}
struct qt_meta_stringdata_OutputWidget_t {
    QByteArrayData data[1];
    char stringdata[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_OutputWidget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_OutputWidget_t qt_meta_stringdata_OutputWidget = {
    {
QT_MOC_LITERAL(0, 0, 12)
    },
    "OutputWidget\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OutputWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void OutputWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject OutputWidget::staticMetaObject = {
    { &QTextEdit::staticMetaObject, qt_meta_stringdata_OutputWidget.data,
      qt_meta_data_OutputWidget,  qt_static_metacall, 0, 0}
};


const QMetaObject *OutputWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OutputWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OutputWidget.stringdata))
        return static_cast<void*>(const_cast< OutputWidget*>(this));
    return QTextEdit::qt_metacast(_clname);
}

int OutputWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE