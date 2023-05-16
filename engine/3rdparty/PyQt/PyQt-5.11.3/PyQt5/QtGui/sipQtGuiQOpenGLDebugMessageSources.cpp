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

#include <qopengldebug.h>

#include <qopengldebug.h>


extern "C" {static long slot_QOpenGLDebugMessage_Sources___hash__(PyObject *);}
static long slot_QOpenGLDebugMessage_Sources___hash__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator QOpenGLDebugMessage::Sources::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QOpenGLDebugMessage_Sources___bool__(PyObject *);}
static int slot_QOpenGLDebugMessage_Sources___bool__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator QOpenGLDebugMessage::Sources::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QOpenGLDebugMessage::Sources::Int() != a0->operator QOpenGLDebugMessage::Sources::Int());
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Sources *>(a0),sipType_QOpenGLDebugMessage_Sources,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QOpenGLDebugMessage_Sources, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QOpenGLDebugMessage::Sources::Int() == a0->operator QOpenGLDebugMessage::Sources::Int());
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Sources *>(a0),sipType_QOpenGLDebugMessage_Sources,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QOpenGLDebugMessage_Sources, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Sources)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QOpenGLDebugMessage::Sources(*sipCpp ^ a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Sources*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Sources((*a0 ^ a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Sources,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Sources,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Sources)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QOpenGLDebugMessage::Sources(*sipCpp | a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Sources*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Sources((*a0 | a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Sources,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Sources,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Sources)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QOpenGLDebugMessage::Sources::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State, &a1))
        {
             ::QOpenGLDebugMessage::Sources*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Sources((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Sources,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Sources,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___invert__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___invert__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;


    {
        {
             ::QOpenGLDebugMessage::Sources*sipRes;

            sipRes = new  ::QOpenGLDebugMessage::Sources(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Sources,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Sources___int__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Sources___int__(PyObject *sipSelf)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Sources));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLDebugMessage_Sources(void *, int);}
static void release_QOpenGLDebugMessage_Sources(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipCppV);
}


extern "C" {static void assign_QOpenGLDebugMessage_Sources(void *, SIP_SSIZE_T, void *);}
static void assign_QOpenGLDebugMessage_Sources(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLDebugMessage::Sources *>(sipSrc);
}


extern "C" {static void *array_QOpenGLDebugMessage_Sources(SIP_SSIZE_T);}
static void *array_QOpenGLDebugMessage_Sources(SIP_SSIZE_T sipNrElem)
{
    return new  ::QOpenGLDebugMessage::Sources[sipNrElem];
}


extern "C" {static void *copy_QOpenGLDebugMessage_Sources(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLDebugMessage_Sources(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QOpenGLDebugMessage::Sources(reinterpret_cast<const  ::QOpenGLDebugMessage::Sources *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage_Sources(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage_Sources(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLDebugMessage_Sources(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage_Sources(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage_Sources(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLDebugMessage::Sources *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Sources();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Sources(a0);

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLDebugMessage::Sources* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLDebugMessage_Sources, &a0, &a0State))
        {
            sipCpp = new  ::QOpenGLDebugMessage::Sources(*a0);
            sipReleaseType(const_cast< ::QOpenGLDebugMessage::Sources *>(a0),sipType_QOpenGLDebugMessage_Sources,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLDebugMessage_Sources(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLDebugMessage_Sources(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QOpenGLDebugMessage::Sources **sipCppPtr = reinterpret_cast< ::QOpenGLDebugMessage::Sources **>(sipCppPtrV);

// Allow an instance of the base enum whenever a QOpenGLDebugMessage::Sources is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Source)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLDebugMessage_Sources, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Source)))
{
    *sipCppPtr = new QOpenGLDebugMessage::Sources(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Sources *>(sipConvertToType(sipPy, sipType_QOpenGLDebugMessage_Sources, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage_Sources[] = {
    {(void *)slot_QOpenGLDebugMessage_Sources___hash__, hash_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___bool__, bool_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___eq__, eq_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___ixor__, ixor_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___xor__, xor_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___ior__, ior_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___or__, or_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___iand__, iand_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___and__, and_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___invert__, invert_slot},
    {(void *)slot_QOpenGLDebugMessage_Sources___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage_Sources, "\1QOpenGLDebugMessage.Sources()\n"
"QOpenGLDebugMessage.Sources(Union[QOpenGLDebugMessage.Sources, QOpenGLDebugMessage.Source])\n"
"QOpenGLDebugMessage.Sources(QOpenGLDebugMessage.Sources)");


static pyqt5ClassPluginDef plugin_QOpenGLDebugMessage_Sources = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage_Sources = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage__Sources,
        {0},
        &plugin_QOpenGLDebugMessage_Sources
    },
    {
        sipNameNr_Sources,
        {135, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLDebugMessage_Sources,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLDebugMessage_Sources,
    init_type_QOpenGLDebugMessage_Sources,
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
    dealloc_QOpenGLDebugMessage_Sources,
    assign_QOpenGLDebugMessage_Sources,
    array_QOpenGLDebugMessage_Sources,
    copy_QOpenGLDebugMessage_Sources,
    release_QOpenGLDebugMessage_Sources,
    0,
    convertTo_QOpenGLDebugMessage_Sources,
    0,
    0,
    0,
    0,
    0
};
