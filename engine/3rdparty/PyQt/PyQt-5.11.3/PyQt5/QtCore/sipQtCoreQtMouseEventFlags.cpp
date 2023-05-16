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

#include "sipAPIQtCore.h"

#include <qnamespace.h>

#include <qnamespace.h>


extern "C" {static long slot_Qt_MouseEventFlags___hash__(PyObject *);}
static long slot_Qt_MouseEventFlags___hash__(PyObject *sipSelf)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator Qt::MouseEventFlags::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_MouseEventFlags___bool__(PyObject *);}
static int slot_Qt_MouseEventFlags___bool__(PyObject *sipSelf)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator Qt::MouseEventFlags::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::MouseEventFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseEventFlags, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator Qt::MouseEventFlags::Int() != a0->operator Qt::MouseEventFlags::Int());
            sipReleaseType(const_cast< ::Qt::MouseEventFlags *>(a0),sipType_Qt_MouseEventFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_MouseEventFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::MouseEventFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_MouseEventFlags, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator Qt::MouseEventFlags::Int() == a0->operator Qt::MouseEventFlags::Int());
            sipReleaseType(const_cast< ::Qt::MouseEventFlags *>(a0),sipType_Qt_MouseEventFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_MouseEventFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseEventFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = Qt::MouseEventFlags(*sipCpp ^ a0);

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


extern "C" {static PyObject *slot_Qt_MouseEventFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MouseEventFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseEventFlags, &a0, &a0State, &a1))
        {
             ::Qt::MouseEventFlags*sipRes;

            sipRes = new  ::Qt::MouseEventFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_MouseEventFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseEventFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = Qt::MouseEventFlags(*sipCpp | a0);

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


extern "C" {static PyObject *slot_Qt_MouseEventFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MouseEventFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseEventFlags, &a0, &a0State, &a1))
        {
             ::Qt::MouseEventFlags*sipRes;

            sipRes = new  ::Qt::MouseEventFlags((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_MouseEventFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_MouseEventFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::MouseEventFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_MouseEventFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::MouseEventFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_MouseEventFlags, &a0, &a0State, &a1))
        {
             ::Qt::MouseEventFlags*sipRes;

            sipRes = new  ::Qt::MouseEventFlags((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_MouseEventFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___invert__(PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___invert__(PyObject *sipSelf)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::MouseEventFlags*sipRes;

            sipRes = new  ::Qt::MouseEventFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseEventFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_MouseEventFlags___int__(PyObject *);}
static PyObject *slot_Qt_MouseEventFlags___int__(PyObject *sipSelf)
{
     ::Qt::MouseEventFlags *sipCpp = reinterpret_cast< ::Qt::MouseEventFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_MouseEventFlags));

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
extern "C" {static void release_Qt_MouseEventFlags(void *, int);}
static void release_Qt_MouseEventFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::MouseEventFlags *>(sipCppV);
}


extern "C" {static void assign_Qt_MouseEventFlags(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_MouseEventFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::MouseEventFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::MouseEventFlags *>(sipSrc);
}


extern "C" {static void *array_Qt_MouseEventFlags(SIP_SSIZE_T);}
static void *array_Qt_MouseEventFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::MouseEventFlags[sipNrElem];
}


extern "C" {static void *copy_Qt_MouseEventFlags(const void *, SIP_SSIZE_T);}
static void *copy_Qt_MouseEventFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::MouseEventFlags(reinterpret_cast<const  ::Qt::MouseEventFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_MouseEventFlags(sipSimpleWrapper *);}
static void dealloc_Qt_MouseEventFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_MouseEventFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_MouseEventFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_MouseEventFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::MouseEventFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::Qt::MouseEventFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::MouseEventFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::MouseEventFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_MouseEventFlags, &a0, &a0State))
        {
            sipCpp = new  ::Qt::MouseEventFlags(*a0);
            sipReleaseType(const_cast< ::Qt::MouseEventFlags *>(a0),sipType_Qt_MouseEventFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_MouseEventFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_MouseEventFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::MouseEventFlags **sipCppPtr = reinterpret_cast< ::Qt::MouseEventFlags **>(sipCppPtrV);

// Allow an instance of the base enum whenever a Qt::MouseEventFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseEventFlag)) ||
            sipCanConvertToType(sipPy, sipType_Qt_MouseEventFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_MouseEventFlag)))
{
    *sipCppPtr = new Qt::MouseEventFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::MouseEventFlags *>(sipConvertToType(sipPy, sipType_Qt_MouseEventFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_MouseEventFlags[] = {
    {(void *)slot_Qt_MouseEventFlags___hash__, hash_slot},
    {(void *)slot_Qt_MouseEventFlags___bool__, bool_slot},
    {(void *)slot_Qt_MouseEventFlags___ne__, ne_slot},
    {(void *)slot_Qt_MouseEventFlags___eq__, eq_slot},
    {(void *)slot_Qt_MouseEventFlags___ixor__, ixor_slot},
    {(void *)slot_Qt_MouseEventFlags___xor__, xor_slot},
    {(void *)slot_Qt_MouseEventFlags___ior__, ior_slot},
    {(void *)slot_Qt_MouseEventFlags___or__, or_slot},
    {(void *)slot_Qt_MouseEventFlags___iand__, iand_slot},
    {(void *)slot_Qt_MouseEventFlags___and__, and_slot},
    {(void *)slot_Qt_MouseEventFlags___invert__, invert_slot},
    {(void *)slot_Qt_MouseEventFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_MouseEventFlags, "\1Qt.MouseEventFlags()\n"
"Qt.MouseEventFlags(Union[Qt.MouseEventFlags, Qt.MouseEventFlag])\n"
"Qt.MouseEventFlags(Qt.MouseEventFlags)");


static pyqt5ClassPluginDef plugin_Qt_MouseEventFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_MouseEventFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__MouseEventFlags,
        {0},
        &plugin_Qt_MouseEventFlags
    },
    {
        sipNameNr_MouseEventFlags,
        {327, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_MouseEventFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_MouseEventFlags,
    init_type_Qt_MouseEventFlags,
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
    dealloc_Qt_MouseEventFlags,
    assign_Qt_MouseEventFlags,
    array_Qt_MouseEventFlags,
    copy_Qt_MouseEventFlags,
    release_Qt_MouseEventFlags,
    0,
    convertTo_Qt_MouseEventFlags,
    0,
    0,
    0,
    0,
    0
};
