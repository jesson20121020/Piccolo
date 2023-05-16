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

#include <qitemselectionmodel.h>

#include <qabstractitemmodel.h>
#include <qlist.h>
#include <qabstractitemmodel.h>
#include <qabstractitemmodel.h>


PyDoc_STRVAR(doc_QItemSelectionRange_top, "top(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_top(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_top(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->top();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_top, doc_QItemSelectionRange_top);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_left, "left(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_left(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_left(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->left();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_left, doc_QItemSelectionRange_left);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_bottom, "bottom(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_bottom(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_bottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->bottom();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_bottom, doc_QItemSelectionRange_bottom);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_right, "right(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_right(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_right(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->right();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_right, doc_QItemSelectionRange_right);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_width, "width(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_width(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->width();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_width, doc_QItemSelectionRange_width);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_height, "height(self) -> int");

extern "C" {static PyObject *meth_QItemSelectionRange_height(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->height();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_height, doc_QItemSelectionRange_height);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_topLeft, "topLeft(self) -> QPersistentModelIndex");

extern "C" {static PyObject *meth_QItemSelectionRange_topLeft(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_topLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
             ::QPersistentModelIndex*sipRes;

            sipRes = new  ::QPersistentModelIndex(sipCpp->topLeft());

            return sipConvertFromNewType(sipRes,sipType_QPersistentModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_topLeft, doc_QItemSelectionRange_topLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_bottomRight, "bottomRight(self) -> QPersistentModelIndex");

extern "C" {static PyObject *meth_QItemSelectionRange_bottomRight(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_bottomRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
             ::QPersistentModelIndex*sipRes;

            sipRes = new  ::QPersistentModelIndex(sipCpp->bottomRight());

            return sipConvertFromNewType(sipRes,sipType_QPersistentModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_bottomRight, doc_QItemSelectionRange_bottomRight);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_parent, "parent(self) -> QModelIndex");

extern "C" {static PyObject *meth_QItemSelectionRange_parent(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
             ::QModelIndex*sipRes;

            sipRes = new  ::QModelIndex(sipCpp->parent());

            return sipConvertFromNewType(sipRes,sipType_QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_parent, doc_QItemSelectionRange_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_model, "model(self) -> QAbstractItemModel");

extern "C" {static PyObject *meth_QItemSelectionRange_model(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_model(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            const  ::QAbstractItemModel*sipRes;

            sipRes = sipCpp->model();

            return sipConvertFromType(const_cast< ::QAbstractItemModel *>(sipRes),sipType_QAbstractItemModel,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_model, doc_QItemSelectionRange_model);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_contains, "contains(self, QModelIndex) -> bool\n"
"contains(self, int, int, QModelIndex) -> bool");

extern "C" {static PyObject *meth_QItemSelectionRange_contains(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QModelIndex* a0;
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QItemSelectionRange, &sipCpp, sipType_QModelIndex, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
        const  ::QModelIndex* a2;
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiiJ9", &sipSelf, sipType_QItemSelectionRange, &sipCpp, &a0, &a1, sipType_QModelIndex, &a2))
        {
            bool sipRes;

            sipRes = sipCpp->contains(a0,a1,*a2);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_contains, doc_QItemSelectionRange_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_intersects, "intersects(self, QItemSelectionRange) -> bool");

extern "C" {static PyObject *meth_QItemSelectionRange_intersects(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_intersects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QItemSelectionRange, &sipCpp, sipType_QItemSelectionRange, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->intersects(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_intersects, doc_QItemSelectionRange_intersects);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QItemSelectionRange_isValid(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_isValid, doc_QItemSelectionRange_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_indexes, "indexes(self) -> object");

extern "C" {static PyObject *meth_QItemSelectionRange_indexes(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_indexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
             ::QModelIndexList*sipRes;

            sipRes = new  ::QModelIndexList(sipCpp->indexes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QModelIndex,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_indexes, doc_QItemSelectionRange_indexes);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_intersected, "intersected(self, QItemSelectionRange) -> QItemSelectionRange");

extern "C" {static PyObject *meth_QItemSelectionRange_intersected(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_intersected(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QItemSelectionRange, &sipCpp, sipType_QItemSelectionRange, &a0))
        {
             ::QItemSelectionRange*sipRes;

            sipRes = new  ::QItemSelectionRange(sipCpp->intersected(*a0));

            return sipConvertFromNewType(sipRes,sipType_QItemSelectionRange,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_intersected, doc_QItemSelectionRange_intersected);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QItemSelectionRange_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QItemSelectionRange, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_isEmpty, doc_QItemSelectionRange_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QItemSelectionRange_swap, "swap(self, QItemSelectionRange)");

extern "C" {static PyObject *meth_QItemSelectionRange_swap(PyObject *, PyObject *);}
static PyObject *meth_QItemSelectionRange_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QItemSelectionRange* a0;
         ::QItemSelectionRange *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QItemSelectionRange, &sipCpp, sipType_QItemSelectionRange, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QItemSelectionRange, sipName_swap, doc_QItemSelectionRange_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QItemSelectionRange___ge__(PyObject *,PyObject *);}
static PyObject *slot_QItemSelectionRange___ge__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QItemSelectionRange *sipCpp = reinterpret_cast< ::QItemSelectionRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QItemSelectionRange, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::QItemSelectionRange::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ge_slot, sipType_QItemSelectionRange, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QItemSelectionRange___lt__(PyObject *,PyObject *);}
static PyObject *slot_QItemSelectionRange___lt__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QItemSelectionRange *sipCpp = reinterpret_cast< ::QItemSelectionRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QItemSelectionRange, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QItemSelectionRange::operator<(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, lt_slot, sipType_QItemSelectionRange, sipSelf, sipArg);
}


extern "C" {static long slot_QItemSelectionRange___hash__(PyObject *);}
static long slot_QItemSelectionRange___hash__(PyObject *sipSelf)
{
     ::QItemSelectionRange *sipCpp = reinterpret_cast< ::QItemSelectionRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionRange));

    if (!sipCpp)
        return 0;


    {
        {
            long sipRes = 0;

        sipRes = qHash(*sipCpp);

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QItemSelectionRange___ne__(PyObject *,PyObject *);}
static PyObject *slot_QItemSelectionRange___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QItemSelectionRange *sipCpp = reinterpret_cast< ::QItemSelectionRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QItemSelectionRange, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QItemSelectionRange::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QItemSelectionRange, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QItemSelectionRange___eq__(PyObject *,PyObject *);}
static PyObject *slot_QItemSelectionRange___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QItemSelectionRange *sipCpp = reinterpret_cast< ::QItemSelectionRange *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QItemSelectionRange));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QItemSelectionRange* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QItemSelectionRange, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QItemSelectionRange::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QItemSelectionRange, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_QItemSelectionRange(void *, int);}
static void release_QItemSelectionRange(void *sipCppV, int)
{
    delete reinterpret_cast< ::QItemSelectionRange *>(sipCppV);
}


extern "C" {static void assign_QItemSelectionRange(void *, SIP_SSIZE_T, void *);}
static void assign_QItemSelectionRange(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QItemSelectionRange *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QItemSelectionRange *>(sipSrc);
}


extern "C" {static void *array_QItemSelectionRange(SIP_SSIZE_T);}
static void *array_QItemSelectionRange(SIP_SSIZE_T sipNrElem)
{
    return new  ::QItemSelectionRange[sipNrElem];
}


extern "C" {static void *copy_QItemSelectionRange(const void *, SIP_SSIZE_T);}
static void *copy_QItemSelectionRange(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QItemSelectionRange(reinterpret_cast<const  ::QItemSelectionRange *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QItemSelectionRange(sipSimpleWrapper *);}
static void dealloc_QItemSelectionRange(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QItemSelectionRange(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QItemSelectionRange(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QItemSelectionRange(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QItemSelectionRange *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QItemSelectionRange();

            return sipCpp;
        }
    }

    {
        const  ::QItemSelectionRange* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QItemSelectionRange, &a0))
        {
            sipCpp = new  ::QItemSelectionRange(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QModelIndex* a0;
        const  ::QModelIndex* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QModelIndex, &a0, sipType_QModelIndex, &a1))
        {
            sipCpp = new  ::QItemSelectionRange(*a0,*a1);

            return sipCpp;
        }
    }

    {
        const  ::QModelIndex* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QModelIndex, &a0))
        {
            sipCpp = new  ::QItemSelectionRange(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QItemSelectionRange[] = {
    {(void *)slot_QItemSelectionRange___ge__, ge_slot},
    {(void *)slot_QItemSelectionRange___lt__, lt_slot},
    {(void *)slot_QItemSelectionRange___hash__, hash_slot},
    {(void *)slot_QItemSelectionRange___ne__, ne_slot},
    {(void *)slot_QItemSelectionRange___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QItemSelectionRange[] = {
    {SIP_MLNAME_CAST(sipName_bottom), meth_QItemSelectionRange_bottom, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_bottom)},
    {SIP_MLNAME_CAST(sipName_bottomRight), meth_QItemSelectionRange_bottomRight, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_bottomRight)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QItemSelectionRange_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_contains)},
    {SIP_MLNAME_CAST(sipName_height), meth_QItemSelectionRange_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_height)},
    {SIP_MLNAME_CAST(sipName_indexes), meth_QItemSelectionRange_indexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_indexes)},
    {SIP_MLNAME_CAST(sipName_intersected), meth_QItemSelectionRange_intersected, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_intersected)},
    {SIP_MLNAME_CAST(sipName_intersects), meth_QItemSelectionRange_intersects, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_intersects)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QItemSelectionRange_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QItemSelectionRange_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_isValid)},
    {SIP_MLNAME_CAST(sipName_left), meth_QItemSelectionRange_left, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_left)},
    {SIP_MLNAME_CAST(sipName_model), meth_QItemSelectionRange_model, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_model)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QItemSelectionRange_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_parent)},
    {SIP_MLNAME_CAST(sipName_right), meth_QItemSelectionRange_right, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_right)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QItemSelectionRange_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_swap)},
    {SIP_MLNAME_CAST(sipName_top), meth_QItemSelectionRange_top, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_top)},
    {SIP_MLNAME_CAST(sipName_topLeft), meth_QItemSelectionRange_topLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_topLeft)},
    {SIP_MLNAME_CAST(sipName_width), meth_QItemSelectionRange_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QItemSelectionRange_width)}
};

PyDoc_STRVAR(doc_QItemSelectionRange, "\1QItemSelectionRange()\n"
"QItemSelectionRange(QItemSelectionRange)\n"
"QItemSelectionRange(QModelIndex, QModelIndex)\n"
"QItemSelectionRange(QModelIndex)");


static pyqt5ClassPluginDef plugin_QItemSelectionRange = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QItemSelectionRange = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QItemSelectionRange,
        {0},
        &plugin_QItemSelectionRange
    },
    {
        sipNameNr_QItemSelectionRange,
        {0, 0, 1},
        17, methods_QItemSelectionRange,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QItemSelectionRange,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QItemSelectionRange,
    init_type_QItemSelectionRange,
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
    dealloc_QItemSelectionRange,
    assign_QItemSelectionRange,
    array_QItemSelectionRange,
    copy_QItemSelectionRange,
    release_QItemSelectionRange,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
