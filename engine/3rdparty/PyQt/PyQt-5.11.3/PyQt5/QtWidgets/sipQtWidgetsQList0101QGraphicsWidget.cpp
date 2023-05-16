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

#include <qlist.h>

#include <qgraphicswidget.h>


extern "C" {static void assign_QList_0101QGraphicsWidget(void *, SIP_SSIZE_T, void *);}
static void assign_QList_0101QGraphicsWidget(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast<QList< ::QGraphicsWidget*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<QList< ::QGraphicsWidget*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QGraphicsWidget(SIP_SSIZE_T);}
static void *array_QList_0101QGraphicsWidget(SIP_SSIZE_T sipNrElem)
{
    return new QList< ::QGraphicsWidget*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QGraphicsWidget(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QGraphicsWidget(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList< ::QGraphicsWidget*>(reinterpret_cast<const QList< ::QGraphicsWidget*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QGraphicsWidget(void *, int);}
static void release_QList_0101QGraphicsWidget(void *ptr, int)
{
    delete reinterpret_cast<QList< ::QGraphicsWidget*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QGraphicsWidget(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QGraphicsWidget(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList< ::QGraphicsWidget*> **sipCppPtr = reinterpret_cast<QList< ::QGraphicsWidget*> **>(sipCppPtrV);

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

    QList<QGraphicsWidget *> *ql = new QList<QGraphicsWidget *>;
 
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

        QGraphicsWidget *t = reinterpret_cast<QGraphicsWidget *>(
                sipForceConvertToType(itm, sipType_QGraphicsWidget, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index %zd has type '%s' but 'QGraphicsWidget' is expected", i,
                    sipPyTypeName(Py_TYPE(itm)));

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
}


extern "C" {static PyObject *convertFrom_QList_0101QGraphicsWidget(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QGraphicsWidget(void *sipCppV, PyObject *sipTransferObj)
{
   QList< ::QGraphicsWidget*> *sipCpp = reinterpret_cast<QList< ::QGraphicsWidget*> *>(sipCppV);

    int gc_enabled = sipEnableGC(0);
    PyObject *l = PyList_New(sipCpp->size());

    if (l)
    {
        for (int i = 0; i < sipCpp->size(); ++i)
        {
            QGraphicsWidget *t = sipCpp->at(i);

            // The explicit (void *) cast allows QGraphicsWidget to be const.
            PyObject *tobj = sipConvertFromType((void *)t, sipType_QGraphicsWidget,
                    sipTransferObj);

            if (!tobj)
            {
                Py_DECREF(l);
                l = 0;

                break;
            }

            PyList_SetItem(l, i, tobj);
        }
    }

    sipEnableGC(gc_enabled);

    return l;
}


sipMappedTypeDef sipTypeDef_QtWidgets_QList_0101QGraphicsWidget = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_13961,     /* QList<QGraphicsWidget*> */
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
    assign_QList_0101QGraphicsWidget,
    array_QList_0101QGraphicsWidget,
    copy_QList_0101QGraphicsWidget,
    release_QList_0101QGraphicsWidget,
    convertTo_QList_0101QGraphicsWidget,
    convertFrom_QList_0101QGraphicsWidget
};
