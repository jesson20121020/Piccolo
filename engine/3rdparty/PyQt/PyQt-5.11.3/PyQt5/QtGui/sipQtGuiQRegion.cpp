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

#include <qregion.h>

#include <qrect.h>
#include <qpolygon.h>
#include <qnamespace.h>
#include <qbitmap.h>
#include <qvariant.h>
#include <qtransform.h>
#include <qvector.h>
#include <qpoint.h>


PyDoc_STRVAR(doc_QRegion_isEmpty, "isEmpty(self) -> bool");

extern "C" {static PyObject *meth_QRegion_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QRegion_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegion, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_isEmpty, doc_QRegion_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_contains, "contains(self, QPoint) -> bool\n"
"contains(self, QRect) -> bool");

extern "C" {static PyObject *meth_QRegion_contains(PyObject *, PyObject *);}
static PyObject *meth_QRegion_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QPoint, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QRect* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRect, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_contains, doc_QRegion_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_translate, "translate(self, int, int)\n"
"translate(self, QPoint)");

extern "C" {static PyObject *meth_QRegion_translate(PyObject *, PyObject *);}
static PyObject *meth_QRegion_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
         ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QRegion, &sipCpp, &a0, &a1))
        {
            sipCpp->translate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QPoint* a0;
         ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QPoint, &a0))
        {
            sipCpp->translate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_translate, doc_QRegion_translate);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_translated, "translated(self, int, int) -> QRegion\n"
"translated(self, QPoint) -> QRegion");

extern "C" {static PyObject *meth_QRegion_translated(PyObject *, PyObject *);}
static PyObject *meth_QRegion_translated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QRegion, &sipCpp, &a0, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->translated(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
        const  ::QPoint* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QPoint, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->translated(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_translated, doc_QRegion_translated);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_united, "united(self, QRegion) -> QRegion\n"
"united(self, QRect) -> QRegion");

extern "C" {static PyObject *meth_QRegion_united(PyObject *, PyObject *);}
static PyObject *meth_QRegion_united(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->united(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
        const  ::QRect* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRect, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->united(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_united, doc_QRegion_united);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_boundingRect, "boundingRect(self) -> QRect");

extern "C" {static PyObject *meth_QRegion_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QRegion_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegion, &sipCpp))
        {
             ::QRect*sipRes;

            sipRes = new  ::QRect(sipCpp->boundingRect());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_boundingRect, doc_QRegion_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_rects, "rects(self) -> List[QRect]");

extern "C" {static PyObject *meth_QRegion_rects(PyObject *, PyObject *);}
static PyObject *meth_QRegion_rects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegion, &sipCpp))
        {
            QVector< ::QRect>*sipRes;

            sipRes = new QVector< ::QRect>(sipCpp->rects());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_rects, doc_QRegion_rects);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_setRects, "setRects(self, Iterable[QRect])");

extern "C" {static PyObject *meth_QRegion_setRects(PyObject *, PyObject *);}
static PyObject *meth_QRegion_setRects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector< ::QRect>* a0;
        int a0State = 0;
         ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QRegion, &sipCpp, sipType_QVector_0100QRect,&a0, &a0State))
        {
        if (a0->size())
            sipCpp->setRects(a0->data(), a0->size());
        else
            sipCpp->setRects(0, 0);
            sipReleaseType(const_cast<QVector< ::QRect> *>(a0),sipType_QVector_0100QRect,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_setRects, doc_QRegion_setRects);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_intersected, "intersected(self, QRegion) -> QRegion\n"
"intersected(self, QRect) -> QRegion");

extern "C" {static PyObject *meth_QRegion_intersected(PyObject *, PyObject *);}
static PyObject *meth_QRegion_intersected(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->intersected(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
        const  ::QRect* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRect, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->intersected(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_intersected, doc_QRegion_intersected);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_subtracted, "subtracted(self, QRegion) -> QRegion");

extern "C" {static PyObject *meth_QRegion_subtracted(PyObject *, PyObject *);}
static PyObject *meth_QRegion_subtracted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->subtracted(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_subtracted, doc_QRegion_subtracted);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_xored, "xored(self, QRegion) -> QRegion");

extern "C" {static PyObject *meth_QRegion_xored(PyObject *, PyObject *);}
static PyObject *meth_QRegion_xored(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->xored(*a0));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_xored, doc_QRegion_xored);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_intersects, "intersects(self, QRegion) -> bool\n"
"intersects(self, QRect) -> bool");

extern "C" {static PyObject *meth_QRegion_intersects(PyObject *, PyObject *);}
static PyObject *meth_QRegion_intersects(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->intersects(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QRect* a0;
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRect, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->intersects(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_intersects, doc_QRegion_intersects);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_rectCount, "rectCount(self) -> int");

extern "C" {static PyObject *meth_QRegion_rectCount(PyObject *, PyObject *);}
static PyObject *meth_QRegion_rectCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegion, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->rectCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_rectCount, doc_QRegion_rectCount);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_swap, "swap(self, QRegion)");

extern "C" {static PyObject *meth_QRegion_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegion_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
         ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegion, &sipCpp, sipType_QRegion, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_swap, doc_QRegion_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QRegion_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QRegion_isNull(PyObject *, PyObject *);}
static PyObject *meth_QRegion_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegion, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName_isNull, doc_QRegion_isNull);

    return NULL;
}


extern "C" {static PyObject *slot_QRegion___mul__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;
        const  ::QTransform* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QTransform, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, mul_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegion___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QRegion::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, ne_slot, sipType_QRegion, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegion___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::QRegion::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, eq_slot, sipType_QRegion, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRegion___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            sipCpp-> ::QRegion::operator^=(*a0);

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


extern "C" {static PyObject *slot_QRegion___isub__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            sipCpp-> ::QRegion::operator-=(*a0);

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


extern "C" {static PyObject *slot_QRegion___iand__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            sipCpp-> ::QRegion::operator&=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::QRect* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRect, &a0))
        {
            sipCpp-> ::QRegion::operator&=(*a0);

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


extern "C" {static PyObject *slot_QRegion___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            sipCpp-> ::QRegion::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::QRect* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRect, &a0))
        {
            sipCpp-> ::QRegion::operator+=(*a0);

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


extern "C" {static PyObject *slot_QRegion___ior__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegion)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRegion* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRegion, &a0))
        {
            sipCpp-> ::QRegion::operator|=(*a0);

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


extern "C" {static PyObject *slot_QRegion___xor__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
        const  ::QRegion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRegion, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 ^ *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, xor_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegion___sub__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
        const  ::QRegion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRegion, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegion___and__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
        const  ::QRegion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRegion, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 & *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
         ::QRegion* a0;
        const  ::QRect* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRect, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 & *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, and_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegion___add__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
        const  ::QRegion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRegion, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    {
         ::QRegion* a0;
        const  ::QRect* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRect, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QRegion___or__(PyObject *,PyObject *);}
static PyObject *slot_QRegion___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRegion* a0;
        const  ::QRegion* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QRegion, &a0, sipType_QRegion, &a1))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion((*a0 | *a1));

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui, or_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static int slot_QRegion___contains__(PyObject *,PyObject *);}
static int slot_QRegion___contains__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return -1;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPoint, &a0))
        {
            int sipRes = 0;

        sipRes = sipCpp->contains(*a0);

            return sipRes;
        }
    }

    {
        const  ::QRect* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRect, &a0))
        {
            int sipRes = 0;

        sipRes = sipCpp->contains(*a0);

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegion, sipName___contains__, NULL);

    return -1;
}


extern "C" {static int slot_QRegion___bool__(PyObject *);}
static int slot_QRegion___bool__(PyObject *sipSelf)
{
     ::QRegion *sipCpp = reinterpret_cast< ::QRegion *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegion));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = !sipCpp->isEmpty();

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegion(void *, int);}
static void release_QRegion(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRegion *>(sipCppV);
}


extern "C" {static void assign_QRegion(void *, SIP_SSIZE_T, void *);}
static void assign_QRegion(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRegion *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRegion *>(sipSrc);
}


extern "C" {static void *array_QRegion(SIP_SSIZE_T);}
static void *array_QRegion(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRegion[sipNrElem];
}


extern "C" {static void *copy_QRegion(const void *, SIP_SSIZE_T);}
static void *copy_QRegion(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRegion(reinterpret_cast<const  ::QRegion *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegion(sipSimpleWrapper *);}
static void dealloc_QRegion(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRegion(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRegion(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegion(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRegion *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QRegion();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;
         ::QRegion::RegionType a4 = QRegion::Rectangle;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "iiii|E", &a0, &a1, &a2, &a3, sipType_QRegion_RegionType, &a4))
        {
            sipCpp = new  ::QRegion(a0,a1,a2,a3,a4);

            return sipCpp;
        }
    }

    {
        const  ::QRect* a0;
         ::QRegion::RegionType a1 = QRegion::Rectangle;

        static const char *sipKwdList[] = {
            NULL,
            sipName_type,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|E", sipType_QRect, &a0, sipType_QRegion_RegionType, &a1))
        {
            sipCpp = new  ::QRegion(*a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QPolygon* a0;
         ::Qt::FillRule a1 = Qt::OddEvenFill;

        static const char *sipKwdList[] = {
            NULL,
            sipName_fillRule,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|E", sipType_QPolygon, &a0, sipType_Qt_FillRule, &a1))
        {
            sipCpp = new  ::QRegion(*a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QBitmap* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBitmap, &a0))
        {
            sipCpp = new  ::QRegion(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QRegion* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegion, &a0))
        {
            sipCpp = new  ::QRegion(*a0);

            return sipCpp;
        }
    }

    {
        const  ::QVariant* a0;
        PyObject *a0Wrapper;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "@J1", &a0Wrapper, sipType_QVariant, &a0, &a0State))
        {
            sipErrorState sipError = sipErrorNone;

        if (a0->canConvert<QRegion>())
            sipCpp = new QRegion(a0->value<QRegion>());
        else
            sipError = sipBadCallableArg(0, a0Wrapper);
            sipReleaseType(const_cast< ::QVariant *>(a0),sipType_QVariant,a0State);

            if (sipError == sipErrorNone)
                return sipCpp;

            if (sipUnused)
            {
                Py_XDECREF(*sipUnused);
            }

            sipAddException(sipError, sipParseErr);

            if (sipError == sipErrorFail)
                return NULL;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegion[] = {
    {(void *)slot_QRegion___mul__, mul_slot},
    {(void *)slot_QRegion___ne__, ne_slot},
    {(void *)slot_QRegion___eq__, eq_slot},
    {(void *)slot_QRegion___ixor__, ixor_slot},
    {(void *)slot_QRegion___isub__, isub_slot},
    {(void *)slot_QRegion___iand__, iand_slot},
    {(void *)slot_QRegion___iadd__, iadd_slot},
    {(void *)slot_QRegion___ior__, ior_slot},
    {(void *)slot_QRegion___xor__, xor_slot},
    {(void *)slot_QRegion___sub__, sub_slot},
    {(void *)slot_QRegion___and__, and_slot},
    {(void *)slot_QRegion___add__, add_slot},
    {(void *)slot_QRegion___or__, or_slot},
    {(void *)slot_QRegion___contains__, contains_slot},
    {(void *)slot_QRegion___bool__, bool_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRegion[] = {
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QRegion_boundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_boundingRect)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QRegion_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_contains)},
    {SIP_MLNAME_CAST(sipName_intersected), meth_QRegion_intersected, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_intersected)},
    {SIP_MLNAME_CAST(sipName_intersects), meth_QRegion_intersects, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_intersects)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QRegion_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QRegion_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_isNull)},
    {SIP_MLNAME_CAST(sipName_rectCount), meth_QRegion_rectCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_rectCount)},
    {SIP_MLNAME_CAST(sipName_rects), meth_QRegion_rects, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_rects)},
    {SIP_MLNAME_CAST(sipName_setRects), meth_QRegion_setRects, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_setRects)},
    {SIP_MLNAME_CAST(sipName_subtracted), meth_QRegion_subtracted, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_subtracted)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRegion_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_swap)},
    {SIP_MLNAME_CAST(sipName_translate), meth_QRegion_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_translate)},
    {SIP_MLNAME_CAST(sipName_translated), meth_QRegion_translated, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_translated)},
    {SIP_MLNAME_CAST(sipName_united), meth_QRegion_united, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_united)},
    {SIP_MLNAME_CAST(sipName_xored), meth_QRegion_xored, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegion_xored)}
};

static sipEnumMemberDef enummembers_QRegion[] = {
    {sipName_Ellipse, static_cast<int>( ::QRegion::Ellipse), 249},
    {sipName_Rectangle, static_cast<int>( ::QRegion::Rectangle), 249},
};

PyDoc_STRVAR(doc_QRegion, "\1QRegion()\n"
"QRegion(int, int, int, int, type: QRegion.RegionType = QRegion.Rectangle)\n"
"QRegion(QRect, type: QRegion.RegionType = QRegion.Rectangle)\n"
"QRegion(QPolygon, fillRule: Qt.FillRule = Qt.OddEvenFill)\n"
"QRegion(QBitmap)\n"
"QRegion(QRegion)\n"
"QRegion(Any)");


static pyqt5ClassPluginDef plugin_QRegion = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QRegion = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRegion,
        {0},
        &plugin_QRegion
    },
    {
        sipNameNr_QRegion,
        {0, 0, 1},
        15, methods_QRegion,
        2, enummembers_QRegion,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegion,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRegion,
    init_type_QRegion,
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
    dealloc_QRegion,
    assign_QRegion,
    array_QRegion,
    copy_QRegion,
    release_QRegion,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
