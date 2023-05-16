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

#include <qcollator.h>



PyDoc_STRVAR(doc_QCollatorSortKey_swap, "swap(self, QCollatorSortKey)");

extern "C" {static PyObject *meth_QCollatorSortKey_swap(PyObject *, PyObject *);}
static PyObject *meth_QCollatorSortKey_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QCollatorSortKey* a0;
         ::QCollatorSortKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollatorSortKey, &sipCpp, sipType_QCollatorSortKey, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollatorSortKey, sipName_swap, doc_QCollatorSortKey_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QCollatorSortKey_compare, "compare(self, QCollatorSortKey) -> int");

extern "C" {static PyObject *meth_QCollatorSortKey_compare(PyObject *, PyObject *);}
static PyObject *meth_QCollatorSortKey_compare(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QCollatorSortKey* a0;
        const  ::QCollatorSortKey *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCollatorSortKey, &sipCpp, sipType_QCollatorSortKey, &a0))
        {
            int sipRes;

            sipRes = sipCpp->compare(*a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCollatorSortKey, sipName_compare, doc_QCollatorSortKey_compare);

    return NULL;
}


extern "C" {static PyObject *slot_QCollatorSortKey___ge__(PyObject *,PyObject *);}
static PyObject *slot_QCollatorSortKey___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCollatorSortKey *sipCpp = reinterpret_cast< ::QCollatorSortKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCollatorSortKey));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCollatorSortKey, &a0))
        {
            bool sipRes;

            sipRes = !operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QCollatorSortKey, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QCollatorSortKey___lt__(PyObject *,PyObject *);}
static PyObject *slot_QCollatorSortKey___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QCollatorSortKey *sipCpp = reinterpret_cast< ::QCollatorSortKey *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCollatorSortKey));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QCollatorSortKey, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QCollatorSortKey, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QCollatorSortKey(void *, int);}
static void release_QCollatorSortKey(void *sipCppV, int)
{
    delete reinterpret_cast< ::QCollatorSortKey *>(sipCppV);
}


extern "C" {static void dealloc_QCollatorSortKey(sipSimpleWrapper *);}
static void dealloc_QCollatorSortKey(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QCollatorSortKey(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QCollatorSortKey(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCollatorSortKey(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QCollatorSortKey *sipCpp = 0;

    {
        const  ::QCollatorSortKey* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCollatorSortKey, &a0))
        {
            sipCpp = new  ::QCollatorSortKey(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCollatorSortKey[] = {
    {(void *)slot_QCollatorSortKey___ge__, ge_slot},
    {(void *)slot_QCollatorSortKey___lt__, lt_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QCollatorSortKey[] = {
    {SIP_MLNAME_CAST(sipName_compare), meth_QCollatorSortKey_compare, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollatorSortKey_compare)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QCollatorSortKey_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QCollatorSortKey_swap)}
};

PyDoc_STRVAR(doc_QCollatorSortKey, "\1QCollatorSortKey(QCollatorSortKey)");


static pyqt5ClassPluginDef plugin_QCollatorSortKey = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QCollatorSortKey = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QCollatorSortKey,
        {0},
        &plugin_QCollatorSortKey
    },
    {
        sipNameNr_QCollatorSortKey,
        {0, 0, 1},
        2, methods_QCollatorSortKey,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCollatorSortKey,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCollatorSortKey,
    init_type_QCollatorSortKey,
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
    dealloc_QCollatorSortKey,
    0,
    0,
    0,
    release_QCollatorSortKey,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
