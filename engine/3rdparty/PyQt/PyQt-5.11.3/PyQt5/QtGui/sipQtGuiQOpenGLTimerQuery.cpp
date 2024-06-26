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


class sipQOpenGLTimerQuery : public  ::QOpenGLTimerQuery
{
public:
    sipQOpenGLTimerQuery( ::QObject*);
    virtual ~sipQOpenGLTimerQuery();

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
    sipQOpenGLTimerQuery(const sipQOpenGLTimerQuery &);
    sipQOpenGLTimerQuery &operator = (const sipQOpenGLTimerQuery &);

    char sipPyMethods[7];
};

sipQOpenGLTimerQuery::sipQOpenGLTimerQuery( ::QObject*a0):  ::QOpenGLTimerQuery(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQOpenGLTimerQuery::~sipQOpenGLTimerQuery()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQOpenGLTimerQuery::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtGui_qt_metaobject(sipPySelf,sipType_QOpenGLTimerQuery);

    return  ::QOpenGLTimerQuery::metaObject();
}

int sipQOpenGLTimerQuery::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QOpenGLTimerQuery::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtGui_qt_metacall(sipPySelf,sipType_QOpenGLTimerQuery,_c,_id,_a);

    return _id;
}

void *sipQOpenGLTimerQuery::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtGui_qt_metacast(sipPySelf, sipType_QOpenGLTimerQuery, _clname, &sipCpp) ? sipCpp :  ::QOpenGLTimerQuery::qt_metacast(_clname));
}

bool sipQOpenGLTimerQuery::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QOpenGLTimerQuery::event(a0);

    extern bool sipVH_QtGui_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtGui_5(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQOpenGLTimerQuery::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QOpenGLTimerQuery::eventFilter(a0,a1);

    extern bool sipVH_QtGui_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtGui_4(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void sipQOpenGLTimerQuery::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimerQuery::timerEvent(a0);
        return;
    }

    extern void sipVH_QtGui_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtGui_3(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimerQuery::childEvent(a0);
        return;
    }

    extern void sipVH_QtGui_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtGui_2(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QOpenGLTimerQuery::customEvent(a0);
        return;
    }

    extern void sipVH_QtGui_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtGui_1(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QOpenGLTimerQuery::connectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQOpenGLTimerQuery::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QOpenGLTimerQuery::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtGui_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtGui_0(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QObject* sipQOpenGLTimerQuery::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipQOpenGLTimerQuery::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipQOpenGLTimerQuery::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQOpenGLTimerQuery::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipQOpenGLTimerQuery::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipQOpenGLTimerQuery::sipProtectVirt_connectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQOpenGLTimerQuery::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQOpenGLTimerQuery::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}

bool sipQOpenGLTimerQuery::sipProtect_isSignalConnected(const  ::QMetaMethod& a0) const
{
    return  ::QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_sender, "sender(self) -> QObject");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_sender, doc_QOpenGLTimerQuery_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_receivers, "receivers(self, PYQT_SIGNAL) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, &a0))
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
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_receivers, doc_QOpenGLTimerQuery_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_timerEvent, "timerEvent(self, QTimerEvent)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_timerEvent, doc_QOpenGLTimerQuery_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_childEvent, "childEvent(self, QChildEvent)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_childEvent, doc_QOpenGLTimerQuery_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_customEvent, "customEvent(self, QEvent)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_customEvent, doc_QOpenGLTimerQuery_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_connectNotify, "connectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_connectNotify, doc_QOpenGLTimerQuery_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_disconnectNotify, "disconnectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_disconnectNotify, doc_QOpenGLTimerQuery_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_senderSignalIndex, "senderSignalIndex(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_senderSignalIndex, doc_QOpenGLTimerQuery_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_isSignalConnected, "isSignalConnected(self, QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMetaMethod* a0;
        const sipQOpenGLTimerQuery *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_isSignalConnected, doc_QOpenGLTimerQuery_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_create, "create(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_create(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_create(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->create();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_create, doc_QOpenGLTimerQuery_create);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_destroy, "destroy(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_destroy(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_destroy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->destroy();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_destroy, doc_QOpenGLTimerQuery_destroy);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_isCreated, "isCreated(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_isCreated(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_isCreated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_isCreated, doc_QOpenGLTimerQuery_isCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_objectId, "objectId(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_objectId(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_objectId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
             ::GLuint sipRes;

            sipRes = sipCpp->objectId();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_objectId, doc_QOpenGLTimerQuery_objectId);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_begin, "begin(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_begin(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_begin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->begin();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_begin, doc_QOpenGLTimerQuery_begin);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_end, "end(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_end(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_end(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->end();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_end, doc_QOpenGLTimerQuery_end);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_waitForTimestamp, "waitForTimestamp(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_waitForTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_waitForTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
             ::GLuint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForTimestamp();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_waitForTimestamp, doc_QOpenGLTimerQuery_waitForTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_recordTimestamp, "recordTimestamp(self)");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_recordTimestamp(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_recordTimestamp(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            sipCpp->recordTimestamp();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_recordTimestamp, doc_QOpenGLTimerQuery_recordTimestamp);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_isResultAvailable, "isResultAvailable(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_isResultAvailable(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_isResultAvailable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isResultAvailable();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_isResultAvailable, doc_QOpenGLTimerQuery_isResultAvailable);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLTimerQuery_waitForResult, "waitForResult(self) -> int");

extern "C" {static PyObject *meth_QOpenGLTimerQuery_waitForResult(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLTimerQuery_waitForResult(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLTimerQuery *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLTimerQuery, &sipCpp))
        {
             ::GLuint64 sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->waitForResult();
            Py_END_ALLOW_THREADS

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLTimerQuery, sipName_waitForResult, doc_QOpenGLTimerQuery_waitForResult);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QOpenGLTimerQuery(void *, const sipTypeDef *);}
static void *cast_QOpenGLTimerQuery(void *sipCppV, const sipTypeDef *targetType)
{
     ::QOpenGLTimerQuery *sipCpp = reinterpret_cast< ::QOpenGLTimerQuery *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLTimerQuery(void *, int);}
static void release_QOpenGLTimerQuery(void *sipCppV, int)
{
     ::QOpenGLTimerQuery *sipCpp = reinterpret_cast< ::QOpenGLTimerQuery *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QOpenGLTimerQuery(sipSimpleWrapper *);}
static void dealloc_QOpenGLTimerQuery(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQOpenGLTimerQuery *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLTimerQuery(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QOpenGLTimerQuery(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLTimerQuery(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQOpenGLTimerQuery *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQOpenGLTimerQuery(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QOpenGLTimerQuery[] = {{25, 0, 1}};


static PyMethodDef methods_QOpenGLTimerQuery[] = {
    {SIP_MLNAME_CAST(sipName_begin), meth_QOpenGLTimerQuery_begin, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_begin)},
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QOpenGLTimerQuery_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QOpenGLTimerQuery_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_create), meth_QOpenGLTimerQuery_create, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_create)},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QOpenGLTimerQuery_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_destroy), meth_QOpenGLTimerQuery_destroy, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_destroy)},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QOpenGLTimerQuery_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_end), meth_QOpenGLTimerQuery_end, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_end)},
    {SIP_MLNAME_CAST(sipName_isCreated), meth_QOpenGLTimerQuery_isCreated, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_isCreated)},
    {SIP_MLNAME_CAST(sipName_isResultAvailable), meth_QOpenGLTimerQuery_isResultAvailable, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_isResultAvailable)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QOpenGLTimerQuery_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_objectId), meth_QOpenGLTimerQuery_objectId, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_objectId)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QOpenGLTimerQuery_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_recordTimestamp), meth_QOpenGLTimerQuery_recordTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_recordTimestamp)},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QOpenGLTimerQuery_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QOpenGLTimerQuery_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QOpenGLTimerQuery_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_waitForResult), meth_QOpenGLTimerQuery_waitForResult, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_waitForResult)},
    {SIP_MLNAME_CAST(sipName_waitForTimestamp), meth_QOpenGLTimerQuery_waitForTimestamp, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLTimerQuery_waitForTimestamp)}
};

PyDoc_STRVAR(doc_QOpenGLTimerQuery, "\1QOpenGLTimerQuery(parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QOpenGLTimerQuery = {
    & ::QOpenGLTimerQuery::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLTimerQuery = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLTimerQuery,
        {0},
        &plugin_QOpenGLTimerQuery
    },
    {
        sipNameNr_QOpenGLTimerQuery,
        {0, 0, 1},
        19, methods_QOpenGLTimerQuery,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLTimerQuery,
    -1,
    -1,
    supers_QOpenGLTimerQuery,
    0,
    init_type_QOpenGLTimerQuery,
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
    dealloc_QOpenGLTimerQuery,
    0,
    0,
    0,
    release_QOpenGLTimerQuery,
    cast_QOpenGLTimerQuery,
    0,
    0,
    0,
    0,
    0,
    0
};
