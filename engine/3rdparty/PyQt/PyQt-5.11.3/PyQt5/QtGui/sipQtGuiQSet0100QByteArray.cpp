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

#include <qset.h>

#include <qbytearray.h>


extern "C" {static void assign_QSet_0100QByteArray(void *, SIP_SSIZE_T, void *);}
static void assign_QSet_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QSet< ::QByteArray> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QSet< ::QByteArray> *>(sipSrc);
}


extern "C" {static void *array_QSet_0100QByteArray(SIP_SSIZE_T);}
static void *array_QSet_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QSet< ::QByteArray>[sipNrElem];
}


extern "C" {static void *copy_QSet_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QSet_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSet< ::QByteArray>(reinterpret_cast<const QSet< ::QByteArray> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QSet_0100QByteArray(void *, int);}
static void release_QSet_0100QByteArray(void *ptr, int)
{
    delete reinterpret_cast<QSet< ::QByteArray> *>(ptr);
}



extern "C" {static int convertTo_QSet_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSet_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSet< ::QByteArray> **sipCppPtr = reinterpret_cast<QSet< ::QByteArray> **>(sipCppPtrV);

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

    QSet<QByteArray> *qs = new QSet<QByteArray>;
 
    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qs;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QByteArray *t = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(itm, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QByteArray' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete qs;
            Py_DECREF(iter);

            return 0;
        }

        qs->insert(*t);

        sipReleaseType(t, sipType_QByteArray, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = qs;
 
    return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_QSet_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QSet_0100QByteArray(void *sipCppV, PyObject *sipTransferObj)
{
   QSet< ::QByteArray> *sipCpp = reinterpret_cast<QSet< ::QByteArray> *>(sipCppV);

    PyObject *s = PySet_New(0);

    if (!s)
        return 0;

    QSet<QByteArray>::const_iterator it = sipCpp->constBegin();
    QSet<QByteArray>::const_iterator end = sipCpp->constEnd();

    while (it != end)
    {
        QByteArray *t = new QByteArray(*it);
        PyObject *tobj = sipConvertFromNewType(t, sipType_QByteArray,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(s);

            return 0;
        }

        PySet_Add(s, tobj);

        ++it;
    }

    return s;
}


sipMappedTypeDef sipTypeDef_QtGui_QSet_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_19365,     /* QSet<QByteArray> */
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
    assign_QSet_0100QByteArray,
    array_QSet_0100QByteArray,
    copy_QSet_0100QByteArray,
    release_QSet_0100QByteArray,
    convertTo_QSet_0100QByteArray,
    convertFrom_QSet_0100QByteArray
};
