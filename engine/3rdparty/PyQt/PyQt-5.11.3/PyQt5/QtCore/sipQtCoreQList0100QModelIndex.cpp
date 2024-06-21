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

#include <qlist.h>

#include <qabstractitemmodel.h>


extern "C" {static void assign_QList_0100QModelIndex(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0100QModelIndex(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QModelIndex> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QModelIndex> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QModelIndex(SIP_SSIZE_T);}
static void *array_QList_0100QModelIndex(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QModelIndex>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QModelIndex(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QModelIndex(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QModelIndex>(reinterpret_cast<const QList< ::QModelIndex> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QModelIndex(void *, int);}
static void release_QList_0100QModelIndex(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QModelIndex> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QModelIndex(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QModelIndex(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QModelIndex> **sipCppPtr = reinterpret_cast<QList< ::QModelIndex> **>(sipCppPtrV);

    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        PyErr_Clear();
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QModelIndex> *ql = new QList<QModelIndex>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QModelIndex *t = reinterpret_cast<QModelIndex *>(
                sipForceConvertToType(itm, sipType_QModelIndex, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QModelIndex' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QModelIndex, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_QList_0100QModelIndex(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QModelIndex(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QModelIndex> *sipCpp = reinterpret_cast<QList< ::QModelIndex> *>(sipCppV);

    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QModelIndex *t = new QModelIndex(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QModelIndex,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, tobj);
    }

    return l;
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QModelIndex = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16679,     /* QList<QModelIndex> */
        {0},
        0
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0100QModelIndex,
    array_QList_0100QModelIndex,
    copy_QList_0100QModelIndex,
    release_QList_0100QModelIndex,
    convertTo_QList_0100QModelIndex,
    convertFrom_QList_0100QModelIndex
};