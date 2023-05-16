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

#include <qgesturerecognizer.h>

#include <qgesturerecognizer.h>


extern "C" {static long slot_QGestureRecognizer_Result___hash__(PyObject *);}
static long slot_QGestureRecognizer_Result___hash__(PyObject *sipSelf)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator QGestureRecognizer::Result::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QGestureRecognizer_Result___bool__(PyObject *);}
static int slot_QGestureRecognizer_Result___bool__(PyObject *sipSelf)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator QGestureRecognizer::Result::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGestureRecognizer::Result* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGestureRecognizer_Result, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QGestureRecognizer::Result::Int() != a0->operator QGestureRecognizer::Result::Int());
            sipReleaseType(const_cast< ::QGestureRecognizer::Result *>(a0),sipType_QGestureRecognizer_Result,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QGestureRecognizer_Result, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QGestureRecognizer::Result* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGestureRecognizer_Result, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QGestureRecognizer::Result::Int() == a0->operator QGestureRecognizer::Result::Int());
            sipReleaseType(const_cast< ::QGestureRecognizer::Result *>(a0),sipType_QGestureRecognizer_Result,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QGestureRecognizer_Result, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGestureRecognizer_Result)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QGestureRecognizer::Result(*sipCpp ^ a0);

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


extern "C" {static PyObject *slot_QGestureRecognizer_Result___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGestureRecognizer::Result* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGestureRecognizer_Result, &a0, &a0State, &a1))
        {
             ::QGestureRecognizer::Result*sipRes;

            sipRes = new  ::QGestureRecognizer::Result((*a0 ^ a1));
            sipReleaseType(a0,sipType_QGestureRecognizer_Result,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGestureRecognizer_Result)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QGestureRecognizer::Result(*sipCpp | a0);

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


extern "C" {static PyObject *slot_QGestureRecognizer_Result___or__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGestureRecognizer::Result* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGestureRecognizer_Result, &a0, &a0State, &a1))
        {
             ::QGestureRecognizer::Result*sipRes;

            sipRes = new  ::QGestureRecognizer::Result((*a0 | a1));
            sipReleaseType(a0,sipType_QGestureRecognizer_Result,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGestureRecognizer_Result)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QGestureRecognizer::Result::operator&=(a0);

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


extern "C" {static PyObject *slot_QGestureRecognizer_Result___and__(PyObject *,PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGestureRecognizer::Result* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGestureRecognizer_Result, &a0, &a0State, &a1))
        {
             ::QGestureRecognizer::Result*sipRes;

            sipRes = new  ::QGestureRecognizer::Result((*a0 & a1));
            sipReleaseType(a0,sipType_QGestureRecognizer_Result,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___invert__(PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___invert__(PyObject *sipSelf)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

    if (!sipCpp)
        return 0;


    {
        {
             ::QGestureRecognizer::Result*sipRes;

            sipRes = new  ::QGestureRecognizer::Result(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGestureRecognizer_Result,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGestureRecognizer_Result___int__(PyObject *);}
static PyObject *slot_QGestureRecognizer_Result___int__(PyObject *sipSelf)
{
     ::QGestureRecognizer::Result *sipCpp = reinterpret_cast< ::QGestureRecognizer::Result *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGestureRecognizer_Result));

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
extern "C" {static void release_QGestureRecognizer_Result(void *, int);}
static void release_QGestureRecognizer_Result(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGestureRecognizer::Result *>(sipCppV);
}


extern "C" {static void assign_QGestureRecognizer_Result(void *, SIP_SSIZE_T, void *);}
static void assign_QGestureRecognizer_Result(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QGestureRecognizer::Result *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QGestureRecognizer::Result *>(sipSrc);
}


extern "C" {static void *array_QGestureRecognizer_Result(SIP_SSIZE_T);}
static void *array_QGestureRecognizer_Result(SIP_SSIZE_T sipNrElem)
{
    return new  ::QGestureRecognizer::Result[sipNrElem];
}


extern "C" {static void *copy_QGestureRecognizer_Result(const void *, SIP_SSIZE_T);}
static void *copy_QGestureRecognizer_Result(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QGestureRecognizer::Result(reinterpret_cast<const  ::QGestureRecognizer::Result *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGestureRecognizer_Result(sipSimpleWrapper *);}
static void dealloc_QGestureRecognizer_Result(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGestureRecognizer_Result(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QGestureRecognizer_Result(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGestureRecognizer_Result(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QGestureRecognizer::Result *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QGestureRecognizer::Result();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QGestureRecognizer::Result(a0);

            return sipCpp;
        }
    }

    {
        const  ::QGestureRecognizer::Result* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGestureRecognizer_Result, &a0, &a0State))
        {
            sipCpp = new  ::QGestureRecognizer::Result(*a0);
            sipReleaseType(const_cast< ::QGestureRecognizer::Result *>(a0),sipType_QGestureRecognizer_Result,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGestureRecognizer_Result(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGestureRecognizer_Result(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QGestureRecognizer::Result **sipCppPtr = reinterpret_cast< ::QGestureRecognizer::Result **>(sipCppPtrV);

// Allow an instance of the base enum whenever a QGestureRecognizer::Result is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGestureRecognizer_ResultFlag)) ||
            sipCanConvertToType(sipPy, sipType_QGestureRecognizer_Result, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGestureRecognizer_ResultFlag)))
{
    *sipCppPtr = new QGestureRecognizer::Result(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGestureRecognizer::Result *>(sipConvertToType(sipPy, sipType_QGestureRecognizer_Result, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGestureRecognizer_Result[] = {
    {(void *)slot_QGestureRecognizer_Result___hash__, hash_slot},
    {(void *)slot_QGestureRecognizer_Result___bool__, bool_slot},
    {(void *)slot_QGestureRecognizer_Result___ne__, ne_slot},
    {(void *)slot_QGestureRecognizer_Result___eq__, eq_slot},
    {(void *)slot_QGestureRecognizer_Result___ixor__, ixor_slot},
    {(void *)slot_QGestureRecognizer_Result___xor__, xor_slot},
    {(void *)slot_QGestureRecognizer_Result___ior__, ior_slot},
    {(void *)slot_QGestureRecognizer_Result___or__, or_slot},
    {(void *)slot_QGestureRecognizer_Result___iand__, iand_slot},
    {(void *)slot_QGestureRecognizer_Result___and__, and_slot},
    {(void *)slot_QGestureRecognizer_Result___invert__, invert_slot},
    {(void *)slot_QGestureRecognizer_Result___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGestureRecognizer_Result, "\1QGestureRecognizer.Result()\n"
"QGestureRecognizer.Result(Union[QGestureRecognizer.Result, QGestureRecognizer.ResultFlag])\n"
"QGestureRecognizer.Result(QGestureRecognizer.Result)");


static pyqt5ClassPluginDef plugin_QGestureRecognizer_Result = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QGestureRecognizer_Result = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGestureRecognizer__Result,
        {0},
        &plugin_QGestureRecognizer_Result
    },
    {
        sipNameNr_Result,
        {106, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGestureRecognizer_Result,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGestureRecognizer_Result,
    init_type_QGestureRecognizer_Result,
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
    dealloc_QGestureRecognizer_Result,
    assign_QGestureRecognizer_Result,
    array_QGestureRecognizer_Result,
    copy_QGestureRecognizer_Result,
    release_QGestureRecognizer_Result,
    0,
    convertTo_QGestureRecognizer_Result,
    0,
    0,
    0,
    0,
    0
};
