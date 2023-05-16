/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.8
 *
 * Copyright (c) 2018 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtGui.h"

#include <qopengltimerquery.h>

#include <qobject.h>
#include <qvector.h>
#include <qopengl.h>
#include <qvector.h>
#include <qmetaobject.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qstring.h>
#include <qvariant.h>
#include <qlist.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qnamespace.h>
#include <qthread.h>
#include <qnamespace.h>
#include <qregexp.h>
#include <qregularexpression.h>
#include <qobjectdefs.h>


class sipQOpenGLTimeMonitor : public  ::QOpenGLTimeMonitor
{
public:
    sipQOpenGLTimeMonitor( ::QObject*);
    virtual ~sipQOpenGLTimeMonitor();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
     ::QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool, ::QTimerEvent*);
    void sipProtectVirt_childEvent(bool, ::QChildEvent*);
    void sipProtectVirt_customEvent(bool, ::QEvent*);
    void sipProtectVirt_connectNotify(bool,const  ::QMetaMethod&);
    void sipProtectVirt_disconnectNotify(bool,const  ::QMetaMethod&);
    int sipProtect_senderSignalIndex() const;
    bool sipProtect_isSignalConnected(const  ::QMetaMethod&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool event( ::QEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    void timerEvent( ::QTimerEvent*);
    void childEvent( ::QChildEvent*);
    void customEvent( ::QEvent*);
    void connectNotify(const  ::QMetaMethod&);
    void disconnectNotify(const  ::QMetaMethod&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQOpenGLTimeMonitor(const sipQOpenGLTimeMonitor &);
    sipQOpenGLTimeMonitor &operator = (const sipQOpenGLTimeMonitor &);

    char sipPyMethods[7];
};

sipQOpenGLTimeMonitor::sipQOpenGLTimeMonitor( ::QObject*a0):  ::QOpenGLTimeMonitor(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLTimeMonitor::~sipQOpenGLTimeMonitor()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQOpenGLTimeMonitor::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QOpenGLTimeMonitor);

    return  ::QOpenGLTimeMonitor::metaObject();
}

int sipQOpenGLTimeMonitor::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QOpenGLTimeMonitor::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QOpenGLTimeMonitor,_c,_id,_a);

    return _id;
}

void *sipQOpenGLTimeMonitor::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QOpenGLTimeMonitor, _clname, &sipCpp) ? sipCpp :  ::QOpenGLTimeMonitor::qt_metacast(_clname));
}

bool sipQOpenGLTimeMonitor::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QOpenGLTimeMonitor::event(a0);

    extern bool sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_5(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQOpenGLTimeMonitor::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QOpenGLTimeMonitor::eventFilter(a0,a1);

    extern bool sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_4(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQOpenGLTimeMonitor::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimeMonitor::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_3(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimeMonitor::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_2(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimeMonitor::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_1(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QOpenGLTimeMonitor::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimeMonitor::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QOpenGLTimeMonitor::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QObject* sipQOpenGLTimeMonitor::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipQOpenGLTimeMonitor::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipQOpenGLTimeMonitor::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQOpenGLTimeMonitor::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipQOpenGLTimeMonitor::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipQOpenGLTimeMonitor::sipProtectVirt_connectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQOpenGLTimeMonitor::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQOpenGLTimeMonitor::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}

bool sipQOpenGLTimeMonitor::sipProtect_isSignalConnected(const  ::QMetaMethod& a0) const
{
    return  ::QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_sender, "sender(self) -> QObject");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
             ::QObject*sipRes = 0;

        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (!sipRes)
        {
            typedef QObject *(*qtcore_qobject_sender_t)();
        
            static qtcore_qobject_sender_t qtcore_qobject_sender = 0;
        
            if (!qtcore_qobject_sender)
            {
                qtcore_qobject_sender = (qtcore_qobject_sender_t)sipImportSymbol("qtcore_qobject_sender");
                Q_ASSERT(qtcore_qobject_sender);
            }
        
            sipRes = qtcore_qobject_sender();
        }

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_sender, doc_QOpenGLTimeMonitor_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_receivers, "receivers(self, PYQT_SIGNAL) -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

        // We need to handle the signal object.  Import the helper if it hasn't already
        // been done.
        typedef sipErrorState (*pyqt5_get_signal_signature_t)(PyObject *, const QObject *, const QByteArray &);
        
        static pyqt5_get_signal_signature_t pyqt5_get_signal_signature = 0;
        
        if (!pyqt5_get_signal_signature)
        {
            pyqt5_get_signal_signature = (pyqt5_get_signal_signature_t)sipImportSymbol("pyqt5_get_signal_signature");
            Q_ASSERT(pyqt5_get_signal_signature);
        }
        
        QByteArray signal_signature;
            
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        if ((sipError = pyqt5_get_signal_signature(a0, sipCpp, signal_signature)) == sipErrorNone)
        {
            sipRes = sipCpp->receivers(signal_signature.constData());
        }
        #else
        if ((sipError = pyqt5_get_signal_signature(a0, static_cast<const QObject *>(sipCpp), signal_signature)) == sipErrorNone)
        {
            sipRes = sipCpp->sipProtect_receivers(signal_signature.constData());
        }
        #endif
        else if (sipError == sipErrorContinue)
        {
            sipError = sipBadCallableArg(0, a0);
        }

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_receivers, doc_QOpenGLTimeMonitor_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_timerEvent, "timerEvent(self, QTimerEvent)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_timerEvent, doc_QOpenGLTimeMonitor_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_childEvent, "childEvent(self, QChildEvent)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_childEvent, doc_QOpenGLTimeMonitor_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_customEvent, "customEvent(self, QEvent)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_customEvent, doc_QOpenGLTimeMonitor_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_connectNotify, "connectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_connectNotify, doc_QOpenGLTimeMonitor_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_disconnectNotify, "disconnectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_disconnectNotify, doc_QOpenGLTimeMonitor_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_senderSignalIndex, "senderSignalIndex(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_senderSignalIndex, doc_QOpenGLTimeMonitor_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_isSignalConnected, "isSignalConnected(self, QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMetaMethod* a0;
        const sipQOpenGLTimeMonitor *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_isSignalConnected, doc_QOpenGLTimeMonitor_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_setSampleCount, "setSampleCount(self, int)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_setSampleCount(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_setSampleCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp, &a0))
        {
            sipCpp->setSampleCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_setSampleCount, doc_QOpenGLTimeMonitor_setSampleCount);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_sampleCount, "sampleCount(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_sampleCount(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_sampleCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sampleCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_sampleCount, doc_QOpenGLTimeMonitor_sampleCount);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_create, doc_QOpenGLTimeMonitor_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_destroy, doc_QOpenGLTimeMonitor_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_isCreated, doc_QOpenGLTimeMonitor_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_objectIds, "objectIds(self) -> List[int]");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_objectIds(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_objectIds(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
             ::QVector< ::GLuint>*sipRes;

            sipRes = new  ::QVector< ::GLuint>(sipCpp->objectIds());

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_objectIds, doc_QOpenGLTimeMonitor_objectIds);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_recordSample, "recordSample(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_recordSample(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_recordSample(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->recordSample();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_recordSample, doc_QOpenGLTimeMonitor_recordSample);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_isResultAvailable, "isResultAvailable(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_isResultAvailable(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_isResultAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isResultAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_isResultAvailable, doc_QOpenGLTimeMonitor_isResultAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_waitForSamples, "waitForSamples(self) -> List[int]");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_waitForSamples(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_waitForSamples(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
             ::QVector< ::GLuint64>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVector< ::GLuint64>(sipCpp->waitForSamples());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_3900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_waitForSamples, doc_QOpenGLTimeMonitor_waitForSamples);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_waitForIntervals, "waitForIntervals(self) -> List[int]");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_waitForIntervals(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_waitForIntervals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
             ::QVector< ::GLuint64>*sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = new  ::QVector< ::GLuint64>(sipCpp->waitForIntervals());
            Py_END_ALLOW_THREADS

            return sipConvertFromNewType(sipRes,sipType_QVector_3900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_waitForIntervals, doc_QOpenGLTimeMonitor_waitForIntervals);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimeMonitor_reset, "reset(self)");

extern "C" {static PyObject *meth_QOpenGLTimeMonitor_reset(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimeMonitor_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimeMonitor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimeMonitor, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimeMonitor, sipName_reset, doc_QOpenGLTimeMonitor_reset);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QOpenGLTimeMonitor(void *, const sipTypeDef *);}
static void *cast_QOpenGLTimeMonitor(void *sipCppV, const sipTypeDef *targetType)
{
     ::QOpenGLTimeMonitor *sipCpp = reinterpret_cast< ::QOpenGLTimeMonitor *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLTimeMonitor(void *, int);}
static void release_QOpenGLTimeMonitor(void *sipCppV, int)
{
     ::QOpenGLTimeMonitor *sipCpp = reinterpret_cast< ::QOpenGLTimeMonitor *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOpenGLTimeMonitor(sipSimpleWrapper *);}
static void dealloc_QOpenGLTimeMonitor(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQOpenGLTimeMonitor *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLTimeMonitor(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QOpenGLTimeMonitor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLTimeMonitor(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQOpenGLTimeMonitor *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQOpenGLTimeMonitor(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLTimeMonitor[] = {{25, 0, 1}};


static PyMethodDef methods_QOpenGLTimeMonitor[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QOpenGLTimeMonitor_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QOpenGLTimeMonitor_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLTimeMonitor_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_create)},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QOpenGLTimeMonitor_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLTimeMonitor_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_destroy)},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QOpenGLTimeMonitor_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLTimeMonitor_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_isCreated)},
    {SIP_MLNAME_CAST(sipName_isResultAvailable), meth_QOpenGLTimeMonitor_isResultAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_isResultAvailable)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QOpenGLTimeMonitor_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_objectIds), meth_QOpenGLTimeMonitor_objectIds, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_objectIds)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QOpenGLTimeMonitor_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_recordSample), meth_QOpenGLTimeMonitor_recordSample, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_recordSample)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QOpenGLTimeMonitor_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_reset)},
    {SIP_MLNAME_CAST(sipName_sampleCount), meth_QOpenGLTimeMonitor_sampleCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_sampleCount)},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QOpenGLTimeMonitor_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QOpenGLTimeMonitor_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setSampleCount), meth_QOpenGLTimeMonitor_setSampleCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_setSampleCount)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QOpenGLTimeMonitor_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_waitForIntervals), meth_QOpenGLTimeMonitor_waitForIntervals, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_waitForIntervals)},
    {SIP_MLNAME_CAST(sipName_waitForSamples), meth_QOpenGLTimeMonitor_waitForSamples, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimeMonitor_waitForSamples)}
};

PyDoc_STRVAR(doc_QOpenGLTimeMonitor, "\1QOpenGLTimeMonitor(parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QOpenGLTimeMonitor = {
    & ::QOpenGLTimeMonitor::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLTimeMonitor = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLTimeMonitor,
        {0},
        &plugin_QOpenGLTimeMonitor
    },
    {
        sipNameNr_QOpenGLTimeMonitor,
        {0, 0, 1},
        20, methods_QOpenGLTimeMonitor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLTimeMonitor,
    -1,
    -1,
    supers_QOpenGLTimeMonitor,
    0,
    init_type_QOpenGLTimeMonitor,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QOpenGLTimeMonitor,
    0,
    0,
    0,
    release_QOpenGLTimeMonitor,
    cast_QOpenGLTimeMonitor,
    0,
    0,
    0,
    0,
    0,
    0
};
