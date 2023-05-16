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

#include "sipAPIQtWidgets.h"

#include <qgesture.h>

#include <qobject.h>
#include <qpoint.h>
#include <qgesture.h>
#include <qnamespace.h>
#include <qmetaobject.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qstring.h>
#include <qvariant.h>
#include <qlist.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qthread.h>
#include <qnamespace.h>
#include <qregexp.h>
#include <qregularexpression.h>
#include <qobjectdefs.h>


class sipQTapAndHoldGesture : public  ::QTapAndHoldGesture
{
public:
    sipQTapAndHoldGesture( ::QObject*);
    virtual ~sipQTapAndHoldGesture();

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
    void disconnectNotify(const  ::QMetaMethod&);
    void connectNotify(const  ::QMetaMethod&);
    void customEvent( ::QEvent*);
    void childEvent( ::QChildEvent*);
    void timerEvent( ::QTimerEvent*);
    bool eventFilter( ::QObject*, ::QEvent*);
    bool event( ::QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTapAndHoldGesture(const sipQTapAndHoldGesture &);
    sipQTapAndHoldGesture &operator = (const sipQTapAndHoldGesture &);

    char sipPyMethods[7];
};

sipQTapAndHoldGesture::sipQTapAndHoldGesture( ::QObject*a0):  ::QTapAndHoldGesture(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTapAndHoldGesture::~sipQTapAndHoldGesture()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

const QMetaObject *sipQTapAndHoldGesture::metaObject() const
{
    if (sipGetInterpreter())
        return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtWidgets_qt_metaobject(sipPySelf,sipType_QTapAndHoldGesture);

    return  ::QTapAndHoldGesture::metaObject();
}

int sipQTapAndHoldGesture::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id =  ::QTapAndHoldGesture::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtWidgets_qt_metacall(sipPySelf,sipType_QTapAndHoldGesture,_c,_id,_a);

    return _id;
}

void *sipQTapAndHoldGesture::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtWidgets_qt_metacast(sipPySelf, sipType_QTapAndHoldGesture, _clname, &sipCpp) ? sipCpp :  ::QTapAndHoldGesture::qt_metacast(_clname));
}

void sipQTapAndHoldGesture::disconnectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::connectNotify(const  ::QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::connectNotify(a0);
        return;
    }

    extern void sipVH_QtWidgets_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QMetaMethod&);

    sipVH_QtWidgets_0(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::customEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::customEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWidgets_1(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::childEvent( ::QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::childEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QChildEvent*);

    sipVH_QtWidgets_2(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQTapAndHoldGesture::timerEvent( ::QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
         ::QTapAndHoldGesture::timerEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTimerEvent*);

    sipVH_QtWidgets_3(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQTapAndHoldGesture::eventFilter( ::QObject*a0, ::QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return  ::QTapAndHoldGesture::eventFilter(a0,a1);

    extern bool sipVH_QtWidgets_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QObject*, ::QEvent*);

    return sipVH_QtWidgets_4(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQTapAndHoldGesture::event( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return  ::QTapAndHoldGesture::event(a0);

    extern bool sipVH_QtWidgets_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    return sipVH_QtWidgets_5(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QObject* sipQTapAndHoldGesture::sipProtect_sender() const
{
    return  ::QObject::sender();
}

int sipQTapAndHoldGesture::sipProtect_receivers(const char*a0) const
{
    return  ::QObject::receivers(a0);
}

void sipQTapAndHoldGesture::sipProtectVirt_timerEvent(bool sipSelfWasArg, ::QTimerEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQTapAndHoldGesture::sipProtectVirt_childEvent(bool sipSelfWasArg, ::QChildEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::childEvent(a0) : childEvent(a0));
}

void sipQTapAndHoldGesture::sipProtectVirt_customEvent(bool sipSelfWasArg, ::QEvent*a0)
{
    (sipSelfWasArg ?  ::QObject::customEvent(a0) : customEvent(a0));
}

void sipQTapAndHoldGesture::sipProtectVirt_connectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQTapAndHoldGesture::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const  ::QMetaMethod& a0)
{
    (sipSelfWasArg ?  ::QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQTapAndHoldGesture::sipProtect_senderSignalIndex() const
{
    return  ::QObject::senderSignalIndex();
}

bool sipQTapAndHoldGesture::sipProtect_isSignalConnected(const  ::QMetaMethod& a0) const
{
    return  ::QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_sender, "sender(self) -> QObject");

extern "C" {static PyObject *meth_QTapAndHoldGesture_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp))
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
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_sender, doc_QTapAndHoldGesture_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_receivers, "receivers(self, PYQT_SIGNAL) -> int");

extern "C" {static PyObject *meth_QTapAndHoldGesture_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, &a0))
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
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_receivers, doc_QTapAndHoldGesture_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_timerEvent, "timerEvent(self, QTimerEvent)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QTimerEvent* a0;
        sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_timerEvent, doc_QTapAndHoldGesture_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_childEvent, "childEvent(self, QChildEvent)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QChildEvent* a0;
        sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_childEvent, doc_QTapAndHoldGesture_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_customEvent, "customEvent(self, QEvent)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
        sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_customEvent, doc_QTapAndHoldGesture_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_connectNotify, "connectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_connectNotify, doc_QTapAndHoldGesture_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_disconnectNotify, "disconnectNotify(self, QMetaMethod)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QMetaMethod* a0;
        sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_disconnectNotify, doc_QTapAndHoldGesture_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_senderSignalIndex, "senderSignalIndex(self) -> int");

extern "C" {static PyObject *meth_QTapAndHoldGesture_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_senderSignalIndex, doc_QTapAndHoldGesture_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_isSignalConnected, "isSignalConnected(self, QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QTapAndHoldGesture_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QMetaMethod* a0;
        const sipQTapAndHoldGesture *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_isSignalConnected, doc_QTapAndHoldGesture_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_position, "position(self) -> QPointF");

extern "C" {static PyObject *meth_QTapAndHoldGesture_position(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_position(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTapAndHoldGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->position());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_position, doc_QTapAndHoldGesture_position);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_setPosition, "setPosition(self, Union[QPointF, QPoint])");

extern "C" {static PyObject *meth_QTapAndHoldGesture_setPosition(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_setPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPointF* a0;
        int a0State = 0;
         ::QTapAndHoldGesture *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTapAndHoldGesture, &sipCpp, sipType_QPointF, &a0, &a0State))
        {
            sipCpp->setPosition(*a0);
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_setPosition, doc_QTapAndHoldGesture_setPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_setTimeout, "setTimeout(int)");

extern "C" {static PyObject *meth_QTapAndHoldGesture_setTimeout(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_setTimeout(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
             ::QTapAndHoldGesture::setTimeout(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_setTimeout, doc_QTapAndHoldGesture_setTimeout);

    return NULL;
}


PyDoc_STRVAR(doc_QTapAndHoldGesture_timeout, "timeout() -> int");

extern "C" {static PyObject *meth_QTapAndHoldGesture_timeout(PyObject *, PyObject *);}
static PyObject *meth_QTapAndHoldGesture_timeout(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            sipRes =  ::QTapAndHoldGesture::timeout();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTapAndHoldGesture, sipName_timeout, doc_QTapAndHoldGesture_timeout);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QTapAndHoldGesture(void *, const sipTypeDef *);}
static void *cast_QTapAndHoldGesture(void *sipCppV, const sipTypeDef *targetType)
{
     ::QTapAndHoldGesture *sipCpp = reinterpret_cast< ::QTapAndHoldGesture *>(sipCppV);

    if (targetType == sipType_QGesture)
        return static_cast< ::QGesture *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTapAndHoldGesture(void *, int);}
static void release_QTapAndHoldGesture(void *sipCppV, int)
{
     ::QTapAndHoldGesture *sipCpp = reinterpret_cast< ::QTapAndHoldGesture *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QTapAndHoldGesture(sipSimpleWrapper *);}
static void dealloc_QTapAndHoldGesture(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTapAndHoldGesture *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTapAndHoldGesture(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTapAndHoldGesture(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTapAndHoldGesture(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQTapAndHoldGesture *sipCpp = 0;

    {
         ::QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQTapAndHoldGesture(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QTapAndHoldGesture[] = {{103, 255, 1}};


static PyMethodDef methods_QTapAndHoldGesture[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QTapAndHoldGesture_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QTapAndHoldGesture_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QTapAndHoldGesture_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QTapAndHoldGesture_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QTapAndHoldGesture_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_position), meth_QTapAndHoldGesture_position, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_position)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QTapAndHoldGesture_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QTapAndHoldGesture_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QTapAndHoldGesture_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setPosition), meth_QTapAndHoldGesture_setPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_setPosition)},
    {SIP_MLNAME_CAST(sipName_setTimeout), meth_QTapAndHoldGesture_setTimeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_setTimeout)},
    {SIP_MLNAME_CAST(sipName_timeout), meth_QTapAndHoldGesture_timeout, METH_VARARGS, SIP_MLDOC_CAST(doc_QTapAndHoldGesture_timeout)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QTapAndHoldGesture_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};

PyDoc_STRVAR(doc_QTapAndHoldGesture, "\1QTapAndHoldGesture(parent: QObject = None)");


static pyqt5ClassPluginDef plugin_QTapAndHoldGesture = {
    & ::QTapAndHoldGesture::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QTapAndHoldGesture = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTapAndHoldGesture,
        {0},
        &plugin_QTapAndHoldGesture
    },
    {
        sipNameNr_QTapAndHoldGesture,
        {0, 0, 1},
        13, methods_QTapAndHoldGesture,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTapAndHoldGesture,
    -1,
    -1,
    supers_QTapAndHoldGesture,
    0,
    init_type_QTapAndHoldGesture,
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
    dealloc_QTapAndHoldGesture,
    0,
    0,
    0,
    release_QTapAndHoldGesture,
    cast_QTapAndHoldGesture,
    0,
    0,
    0,
    0,
    0,
    0
};
