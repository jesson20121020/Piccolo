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

#include <qmdiarea.h>

#include <qmdiarea.h>


extern "C" {static long slot_QMdiArea_AreaOptions___hash__(PyObject *);}
static long slot_QMdiArea_AreaOptions___hash__(PyObject *sipSelf)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator QMdiArea::AreaOptions::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QMdiArea_AreaOptions___bool__(PyObject *);}
static int slot_QMdiArea_AreaOptions___bool__(PyObject *sipSelf)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator QMdiArea::AreaOptions::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMdiArea::AreaOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QMdiArea::AreaOptions::Int() != a0->operator QMdiArea::AreaOptions::Int());
            sipReleaseType(const_cast< ::QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, ne_slot, sipType_QMdiArea_AreaOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QMdiArea::AreaOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QMdiArea::AreaOptions::Int() == a0->operator QMdiArea::AreaOptions::Int());
            sipReleaseType(const_cast< ::QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, eq_slot, sipType_QMdiArea_AreaOptions, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QMdiArea::AreaOptions(*sipCpp ^ a0);

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMdiArea::AreaOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiArea_AreaOptions, &a0, &a0State, &a1))
        {
             ::QMdiArea::AreaOptions*sipRes;

            sipRes = new  ::QMdiArea::AreaOptions((*a0 ^ a1));
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QMdiArea::AreaOptions(*sipCpp | a0);

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMdiArea::AreaOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiArea_AreaOptions, &a0, &a0State, &a1))
        {
             ::QMdiArea::AreaOptions*sipRes;

            sipRes = new  ::QMdiArea::AreaOptions((*a0 | a1));
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QMdiArea::AreaOptions::operator&=(a0);

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


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QMdiArea::AreaOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QMdiArea_AreaOptions, &a0, &a0State, &a1))
        {
             ::QMdiArea::AreaOptions*sipRes;

            sipRes = new  ::QMdiArea::AreaOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QMdiArea_AreaOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___invert__(PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___invert__(PyObject *sipSelf)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

    if (!sipCpp)
        return 0;


    {
        {
             ::QMdiArea::AreaOptions*sipRes;

            sipRes = new  ::QMdiArea::AreaOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QMdiArea_AreaOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QMdiArea_AreaOptions___int__(PyObject *);}
static PyObject *slot_QMdiArea_AreaOptions___int__(PyObject *sipSelf)
{
     ::QMdiArea::AreaOptions *sipCpp = reinterpret_cast< ::QMdiArea::AreaOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QMdiArea_AreaOptions));

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
extern "C" {static void release_QMdiArea_AreaOptions(void *, int);}
static void release_QMdiArea_AreaOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QMdiArea::AreaOptions *>(sipCppV);
}


extern "C" {static void assign_QMdiArea_AreaOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QMdiArea_AreaOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QMdiArea::AreaOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QMdiArea::AreaOptions *>(sipSrc);
}


extern "C" {static void *array_QMdiArea_AreaOptions(SIP_SSIZE_T);}
static void *array_QMdiArea_AreaOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QMdiArea::AreaOptions[sipNrElem];
}


extern "C" {static void *copy_QMdiArea_AreaOptions(const void *, SIP_SSIZE_T);}
static void *copy_QMdiArea_AreaOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QMdiArea::AreaOptions(reinterpret_cast<const  ::QMdiArea::AreaOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QMdiArea_AreaOptions(sipSimpleWrapper *);}
static void dealloc_QMdiArea_AreaOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QMdiArea_AreaOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QMdiArea_AreaOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMdiArea_AreaOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QMdiArea::AreaOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QMdiArea::AreaOptions();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QMdiArea::AreaOptions(a0);

            return sipCpp;
        }
    }

    {
        const  ::QMdiArea::AreaOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QMdiArea_AreaOptions, &a0, &a0State))
        {
            sipCpp = new  ::QMdiArea::AreaOptions(*a0);
            sipReleaseType(const_cast< ::QMdiArea::AreaOptions *>(a0),sipType_QMdiArea_AreaOptions,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QMdiArea_AreaOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QMdiArea_AreaOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QMdiArea::AreaOptions **sipCppPtr = reinterpret_cast< ::QMdiArea::AreaOptions **>(sipCppPtrV);

// Allow an instance of the base enum whenever a QMdiArea::AreaOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOption)) ||
            sipCanConvertToType(sipPy, sipType_QMdiArea_AreaOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QMdiArea_AreaOption)))
{
    *sipCppPtr = new QMdiArea::AreaOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QMdiArea::AreaOptions *>(sipConvertToType(sipPy, sipType_QMdiArea_AreaOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QMdiArea_AreaOptions[] = {
    {(void *)slot_QMdiArea_AreaOptions___hash__, hash_slot},
    {(void *)slot_QMdiArea_AreaOptions___bool__, bool_slot},
    {(void *)slot_QMdiArea_AreaOptions___ne__, ne_slot},
    {(void *)slot_QMdiArea_AreaOptions___eq__, eq_slot},
    {(void *)slot_QMdiArea_AreaOptions___ixor__, ixor_slot},
    {(void *)slot_QMdiArea_AreaOptions___xor__, xor_slot},
    {(void *)slot_QMdiArea_AreaOptions___ior__, ior_slot},
    {(void *)slot_QMdiArea_AreaOptions___or__, or_slot},
    {(void *)slot_QMdiArea_AreaOptions___iand__, iand_slot},
    {(void *)slot_QMdiArea_AreaOptions___and__, and_slot},
    {(void *)slot_QMdiArea_AreaOptions___invert__, invert_slot},
    {(void *)slot_QMdiArea_AreaOptions___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QMdiArea_AreaOptions, "\1QMdiArea.AreaOptions()\n"
"QMdiArea.AreaOptions(Union[QMdiArea.AreaOptions, QMdiArea.AreaOption])\n"
"QMdiArea.AreaOptions(QMdiArea.AreaOptions)");


static pyqt5ClassPluginDef plugin_QMdiArea_AreaOptions = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QMdiArea_AreaOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QMdiArea__AreaOptions,
        {0},
        &plugin_QMdiArea_AreaOptions
    },
    {
        sipNameNr_AreaOptions,
        {225, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMdiArea_AreaOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QMdiArea_AreaOptions,
    init_type_QMdiArea_AreaOptions,
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
    dealloc_QMdiArea_AreaOptions,
    assign_QMdiArea_AreaOptions,
    array_QMdiArea_AreaOptions,
    copy_QMdiArea_AreaOptions,
    release_QMdiArea_AreaOptions,
    0,
    convertTo_QMdiArea_AreaOptions,
    0,
    0,
    0,
    0,
    0
};
