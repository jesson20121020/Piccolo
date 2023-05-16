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


extern "C" {static long slot_Qt_DockWidgetAreas___hash__(PyObject *);}
static long slot_Qt_DockWidgetAreas___hash__(PyObject *sipSelf)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = sipCpp->operator Qt::DockWidgetAreas::Int();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static int slot_Qt_DockWidgetAreas___bool__(PyObject *);}
static int slot_Qt_DockWidgetAreas___bool__(PyObject *sipSelf)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = (sipCpp->operator Qt::DockWidgetAreas::Int() != 0);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::DockWidgetAreas* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DockWidgetAreas, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator Qt::DockWidgetAreas::Int() != a0->operator Qt::DockWidgetAreas::Int());
            sipReleaseType(const_cast< ::Qt::DockWidgetAreas *>(a0),sipType_Qt_DockWidgetAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_Qt_DockWidgetAreas, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::Qt::DockWidgetAreas* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_DockWidgetAreas, &a0, &a0State))
        {
            bool sipRes = 0;

        sipRes = (sipCpp->operator Qt::DockWidgetAreas::Int() == a0->operator Qt::DockWidgetAreas::Int());
            sipReleaseType(const_cast< ::Qt::DockWidgetAreas *>(a0),sipType_Qt_DockWidgetAreas,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_Qt_DockWidgetAreas, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DockWidgetAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = Qt::DockWidgetAreas(*sipCpp ^ a0);

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


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::DockWidgetAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DockWidgetAreas, &a0, &a0State, &a1))
        {
             ::Qt::DockWidgetAreas*sipRes;

            sipRes = new  ::Qt::DockWidgetAreas((*a0 ^ a1));
            sipReleaseType(a0,sipType_Qt_DockWidgetAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DockWidgetAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DockWidgetAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
        *sipCpp = Qt::DockWidgetAreas(*sipCpp | a0);

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


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::DockWidgetAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DockWidgetAreas, &a0, &a0State, &a1))
        {
             ::Qt::DockWidgetAreas*sipRes;

            sipRes = new  ::Qt::DockWidgetAreas((*a0 | a1));
            sipReleaseType(a0,sipType_Qt_DockWidgetAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DockWidgetAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_DockWidgetAreas)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp-> ::Qt::DockWidgetAreas::operator&=(a0);

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


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::DockWidgetAreas* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_DockWidgetAreas, &a0, &a0State, &a1))
        {
             ::Qt::DockWidgetAreas*sipRes;

            sipRes = new  ::Qt::DockWidgetAreas((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_DockWidgetAreas,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_DockWidgetAreas,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___invert__(PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___invert__(PyObject *sipSelf)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

    if (!sipCpp)
        return 0;


    {
        {
             ::Qt::DockWidgetAreas*sipRes;

            sipRes = new  ::Qt::DockWidgetAreas(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_DockWidgetAreas,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_DockWidgetAreas___int__(PyObject *);}
static PyObject *slot_Qt_DockWidgetAreas___int__(PyObject *sipSelf)
{
     ::Qt::DockWidgetAreas *sipCpp = reinterpret_cast< ::Qt::DockWidgetAreas *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_DockWidgetAreas));

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
extern "C" {static void release_Qt_DockWidgetAreas(void *, int);}
static void release_Qt_DockWidgetAreas(void *sipCppV, int)
{
    delete reinterpret_cast< ::Qt::DockWidgetAreas *>(sipCppV);
}


extern "C" {static void assign_Qt_DockWidgetAreas(void *, SIP_SSIZE_T, void *);}
static void assign_Qt_DockWidgetAreas(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::Qt::DockWidgetAreas *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::Qt::DockWidgetAreas *>(sipSrc);
}


extern "C" {static void *array_Qt_DockWidgetAreas(SIP_SSIZE_T);}
static void *array_Qt_DockWidgetAreas(SIP_SSIZE_T sipNrElem)
{
    return new  ::Qt::DockWidgetAreas[sipNrElem];
}


extern "C" {static void *copy_Qt_DockWidgetAreas(const void *, SIP_SSIZE_T);}
static void *copy_Qt_DockWidgetAreas(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::Qt::DockWidgetAreas(reinterpret_cast<const  ::Qt::DockWidgetAreas *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_DockWidgetAreas(sipSimpleWrapper *);}
static void dealloc_Qt_DockWidgetAreas(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_Qt_DockWidgetAreas(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_Qt_DockWidgetAreas(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_DockWidgetAreas(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::Qt::DockWidgetAreas *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::Qt::DockWidgetAreas();

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new  ::Qt::DockWidgetAreas(a0);

            return sipCpp;
        }
    }

    {
        const  ::Qt::DockWidgetAreas* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_DockWidgetAreas, &a0, &a0State))
        {
            sipCpp = new  ::Qt::DockWidgetAreas(*a0);
            sipReleaseType(const_cast< ::Qt::DockWidgetAreas *>(a0),sipType_Qt_DockWidgetAreas,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_DockWidgetAreas(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_DockWidgetAreas(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::Qt::DockWidgetAreas **sipCppPtr = reinterpret_cast< ::Qt::DockWidgetAreas **>(sipCppPtrV);

// Allow an instance of the base enum whenever a Qt::DockWidgetAreas is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_DockWidgetArea)) ||
            sipCanConvertToType(sipPy, sipType_Qt_DockWidgetAreas, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_DockWidgetArea)))
{
    *sipCppPtr = new Qt::DockWidgetAreas(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::DockWidgetAreas *>(sipConvertToType(sipPy, sipType_Qt_DockWidgetAreas, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_DockWidgetAreas[] = {
    {(void *)slot_Qt_DockWidgetAreas___hash__, hash_slot},
    {(void *)slot_Qt_DockWidgetAreas___bool__, bool_slot},
    {(void *)slot_Qt_DockWidgetAreas___ne__, ne_slot},
    {(void *)slot_Qt_DockWidgetAreas___eq__, eq_slot},
    {(void *)slot_Qt_DockWidgetAreas___ixor__, ixor_slot},
    {(void *)slot_Qt_DockWidgetAreas___xor__, xor_slot},
    {(void *)slot_Qt_DockWidgetAreas___ior__, ior_slot},
    {(void *)slot_Qt_DockWidgetAreas___or__, or_slot},
    {(void *)slot_Qt_DockWidgetAreas___iand__, iand_slot},
    {(void *)slot_Qt_DockWidgetAreas___and__, and_slot},
    {(void *)slot_Qt_DockWidgetAreas___invert__, invert_slot},
    {(void *)slot_Qt_DockWidgetAreas___int__, int_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_DockWidgetAreas, "\1Qt.DockWidgetAreas()\n"
"Qt.DockWidgetAreas(Union[Qt.DockWidgetAreas, Qt.DockWidgetArea])\n"
"Qt.DockWidgetAreas(Qt.DockWidgetAreas)");


static pyqt5ClassPluginDef plugin_Qt_DockWidgetAreas = {
    0,
    1,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_Qt_DockWidgetAreas = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_Qt__DockWidgetAreas,
        {0},
        &plugin_Qt_DockWidgetAreas
    },
    {
        sipNameNr_DockWidgetAreas,
        {327, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_DockWidgetAreas,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_DockWidgetAreas,
    init_type_Qt_DockWidgetAreas,
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
    dealloc_Qt_DockWidgetAreas,
    assign_Qt_DockWidgetAreas,
    array_Qt_DockWidgetAreas,
    copy_Qt_DockWidgetAreas,
    release_Qt_DockWidgetAreas,
    0,
    convertTo_Qt_DockWidgetAreas,
    0,
    0,
    0,
    0,
    0
};
