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

#include <qvector.h>
#include <qopengl.h>



extern "C" {static void assign_QVector_3900(void *, SIP_SSIZE_T, void *);}
static void assign_QVector_3900(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QVector< ::GLuint64> *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QVector< ::GLuint64> *>(sipSrc);
}


extern "C" {static void *array_QVector_3900(SIP_SSIZE_T);}
static void *array_QVector_3900(SIP_SSIZE_T sipNrElem)
{
    return new  ::QVector< ::GLuint64>[sipNrElem];
}


extern "C" {static void *copy_QVector_3900(const void *, SIP_SSIZE_T);}
static void *copy_QVector_3900(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QVector< ::GLuint64>(reinterpret_cast<const  ::QVector< ::GLuint64> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_3900(void *, int);}
static void release_QVector_3900(void *ptr, int)
{
    delete reinterpret_cast< ::QVector< ::GLuint64> *>(ptr);
}



extern "C" {static int convertTo_QVector_3900(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_3900(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
     ::QVector< ::GLuint64> **sipCppPtr = reinterpret_cast< ::QVector< ::GLuint64> **>(sipCppPtrV);

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

    QVector<GLuint64> *qv = new QVector<GLuint64>;

    for (Py_ssize_t i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        PyErr_Clear();
        unsigned PY_LONG_LONG val = PyLong_AsUnsignedLongLongMask(itm);

        if (PyErr_Occurred())
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'int' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        qv->append(val);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);

    *sipCppPtr = qv;

    return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_QVector_3900(void *, PyObject *);}
static PyObject *convertFrom_QVector_3900(void *sipCppV, PyObject *)
{
    ::QVector< ::GLuint64> *sipCpp = reinterpret_cast< ::QVector< ::GLuint64> *>(sipCppV);

    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        // Convert to a Python long to make sure it doesn't get interpreted as
        // a signed value.
        PyObject *pobj = PyLong_FromUnsignedLongLong(sipCpp->value(i));

        if (!pobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SetItem(l, i, pobj);
    }

    return l;
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_3900 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_16721,     /* QVector<GLuint64> */
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
    assign_QVector_3900,
    array_QVector_3900,
    copy_QVector_3900,
    release_QVector_3900,
    convertTo_QVector_3900,
    convertFrom_QVector_3900
};