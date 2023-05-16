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

#include <qrawfont.h>

#include <qrawfont.h>


extern "C" {static long slot_QRawFont_LayoutFlags___hash__(PyObject *);}
static long slot_QRawFont_LayoutFlags___hash__(PyObject *sipSelf)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator QRawFont::LayoutFlags::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_QRawFont_LayoutFlags___bool__(PyObject *);}
static int slot_QRawFont_LayoutFlags___bool__(PyObject *sipSelf)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator QRawFont::LayoutFlags::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRawFont::LayoutFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRawFont_LayoutFlags, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QRawFont::LayoutFlags::Int() != a0->operator QRawFont::LayoutFlags::Int());
            sipReleaseType(const_cast< ::QRawFont::LayoutFlags *>(a0),sipType_QRawFont_LayoutFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QRawFont_LayoutFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRawFont::LayoutFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRawFont_LayoutFlags, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator QRawFont::LayoutFlags::Int() == a0->operator QRawFont::LayoutFlags::Int());
            sipReleaseType(const_cast< ::QRawFont::LayoutFlags *>(a0),sipType_QRawFont_LayoutFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QRawFont_LayoutFlags, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRawFont_LayoutFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QRawFont::LayoutFlags(*sipCpp ^ a0);

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


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRawFont::LayoutFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRawFont_LayoutFlags, &a0, &a0State, &a1))
        {
             ::QRawFont::LayoutFlags*sipRes;

            sipRes = new  ::QRawFont::LayoutFlags((*a0 ^ a1));
            sipReleaseType(a0,sipType_QRawFont_LayoutFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRawFont_LayoutFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRawFont_LayoutFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = QRawFont::LayoutFlags(*sipCpp | a0);

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


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRawFont::LayoutFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRawFont_LayoutFlags, &a0, &a0State, &a1))
        {
             ::QRawFont::LayoutFlags*sipRes;

            sipRes = new  ::QRawFont::LayoutFlags((*a0 | a1));
            sipReleaseType(a0,sipType_QRawFont_LayoutFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRawFont_LayoutFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRawFont_LayoutFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::QRawFont::LayoutFlags::operator&=(a0);

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


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRawFont::LayoutFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRawFont_LayoutFlags, &a0, &a0State, &a1))
        {
             ::QRawFont::LayoutFlags*sipRes;

            sipRes = new  ::QRawFont::LayoutFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QRawFont_LayoutFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRawFont_LayoutFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___invert__(PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___invert__(PyObject *sipSelf)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

    if (!sipCpp)
        return 0;


    {
        {
             ::QRawFont::LayoutFlags*sipRes;

            sipRes = new  ::QRawFont::LayoutFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QRawFont_LayoutFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRawFont_LayoutFlags___int__(PyObject *);}
static PyObject *slot_QRawFont_LayoutFlags___int__(PyObject *sipSelf)
{
     ::QRawFont::LayoutFlags *sipCpp = reinterpret_cast< ::QRawFont::LayoutFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRawFont_LayoutFlags));

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
extern "C" {static void release_QRawFont_LayoutFlags(void *, int);}
static void release_QRawFont_LayoutFlags(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRawFont::LayoutFlags *>(sipCppV);
}


extern "C" {static void assign_QRawFont_LayoutFlags(void *, SIP_SSIZE_T, void *);}
static void assign_QRawFont_LayoutFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRawFont::LayoutFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRawFont::LayoutFlags *>(sipSrc);
}


extern "C" {static void *array_QRawFont_LayoutFlags(SIP_SSIZE_T);}
static void *array_QRawFont_LayoutFlags(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRawFont::LayoutFlags[sipNrElem];
}


extern "C" {static void *copy_QRawFont_LayoutFlags(const void *, SIP_SSIZE_T);}
static void *copy_QRawFont_LayoutFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRawFont::LayoutFlags(reinterpret_cast<const  ::QRawFont::LayoutFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRawFont_LayoutFlags(sipSimpleWrapper *);}
static void dealloc_QRawFont_LayoutFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRawFont_LayoutFlags(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRawFont_LayoutFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRawFont_LayoutFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRawFont::LayoutFlags *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QRawFont::LayoutFlags();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::QRawFont::LayoutFlags(a0);

            return sipCpp;
        }
    }

    {
        const  ::QRawFont::LayoutFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QRawFont_LayoutFlags, &a0, &a0State))
        {
            sipCpp = new  ::QRawFont::LayoutFlags(*a0);
            sipReleaseType(const_cast< ::QRawFont::LayoutFlags *>(a0),sipType_QRawFont_LayoutFlags,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QRawFont_LayoutFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QRawFont_LayoutFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QRawFont::LayoutFlags **sipCppPtr = reinterpret_cast< ::QRawFont::LayoutFlags **>(sipCppPtrV);

// Allow an instance of the base enum whenever a QRawFont::LayoutFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRawFont_LayoutFlag)) ||
            sipCanConvertToType(sipPy, sipType_QRawFont_LayoutFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRawFont_LayoutFlag)))
{
    *sipCppPtr = new QRawFont::LayoutFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QRawFont::LayoutFlags *>(sipConvertToType(sipPy, sipType_QRawFont_LayoutFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRawFont_LayoutFlags[] = {
    {(void *)slot_QRawFont_LayoutFlags___hash__, hash_slot},
    {(void *)slot_QRawFont_LayoutFlags___bool__, bool_slot},
    {(void *)slot_QRawFont_LayoutFlags___ne__, ne_slot},
    {(void *)slot_QRawFont_LayoutFlags___eq__, eq_slot},
    {(void *)slot_QRawFont_LayoutFlags___ixor__, ixor_slot},
    {(void *)slot_QRawFont_LayoutFlags___xor__, xor_slot},
    {(void *)slot_QRawFont_LayoutFlags___ior__, ior_slot},
    {(void *)slot_QRawFont_LayoutFlags___or__, or_slot},
    {(void *)slot_QRawFont_LayoutFlags___iand__, iand_slot},
    {(void *)slot_QRawFont_LayoutFlags___and__, and_slot},
    {(void *)slot_QRawFont_LayoutFlags___invert__, invert_slot},
    {(void *)slot_QRawFont_LayoutFlags___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QRawFont_LayoutFlags, "\1QRawFont.LayoutFlags()\n"
"QRawFont.LayoutFlags(Union[QRawFont.LayoutFlags, QRawFont.LayoutFlag])\n"
"QRawFont.LayoutFlags(QRawFont.LayoutFlags)");


static pyqt5ClassPluginDef plugin_QRawFont_LayoutFlags = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QRawFont_LayoutFlags = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRawFont__LayoutFlags,
        {0},
        &plugin_QRawFont_LayoutFlags
    },
    {
        sipNameNr_LayoutFlags,
        {243, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRawFont_LayoutFlags,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRawFont_LayoutFlags,
    init_type_QRawFont_LayoutFlags,
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
    dealloc_QRawFont_LayoutFlags,
    assign_QRawFont_LayoutFlags,
    array_QRawFont_LayoutFlags,
    copy_QRawFont_LayoutFlags,
    release_QRawFont_LayoutFlags,
    0,
    convertTo_QRawFont_LayoutFlags,
    0,
    0,
    0,
    0,
    0
};
