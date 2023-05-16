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

#include <qpoint.h>



PyDoc_STRVAR(doc_QPoint_manhattanLength, "manhattanLength(self) -> int");

extern "C" {static PyObject *meth_QPoint_manhattanLength(PyObject *, PyObject *);}
static PyObject *meth_QPoint_manhattanLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPoint, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->manhattanLength();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_manhattanLength, doc_QPoint_manhattanLength);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QPoint_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPoint_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPoint, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_isNull, doc_QPoint_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_x, "x(self) -> int");

extern "C" {static PyObject *meth_QPoint_x(PyObject *, PyObject *);}
static PyObject *meth_QPoint_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPoint, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_x, doc_QPoint_x);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_y, "y(self) -> int");

extern "C" {static PyObject *meth_QPoint_y(PyObject *, PyObject *);}
static PyObject *meth_QPoint_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPoint, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_y, doc_QPoint_y);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_setX, "setX(self, int)");

extern "C" {static PyObject *meth_QPoint_setX(PyObject *, PyObject *);}
static PyObject *meth_QPoint_setX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPoint, &sipCpp, &a0))
        {
            sipCpp->setX(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_setX, doc_QPoint_setX);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_setY, "setY(self, int)");

extern "C" {static PyObject *meth_QPoint_setY(PyObject *, PyObject *);}
static PyObject *meth_QPoint_setY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QPoint *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPoint, &sipCpp, &a0))
        {
            sipCpp->setY(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_setY, doc_QPoint_setY);

    return NULL;
}


PyDoc_STRVAR(doc_QPoint_dotProduct, "dotProduct(QPoint, QPoint) -> int");

extern "C" {static PyObject *meth_QPoint_dotProduct(PyObject *, PyObject *);}
static PyObject *meth_QPoint_dotProduct(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QPoint* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
            int sipRes;

            sipRes =  ::QPoint::dotProduct(*a0,*a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPoint, sipName_dotProduct, doc_QPoint_dotProduct);

    return NULL;
}


extern "C" {static PyObject *slot_QPoint___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPoint, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPoint___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPoint, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QPoint, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QPoint___add__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QPoint* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPoint___sub__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        const  ::QPoint* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPoint___mul__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9Xi", sipType_QPoint, &a0, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    {
        int a0;
        const  ::QPoint* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "XiJ9", &a0, sipType_QPoint, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    {
        const  ::QPoint* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QPoint, &a0, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    {
        double a0;
        const  ::QPoint* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QPoint, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, mul_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPoint___div__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;
         ::qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QPoint, &a0, &a1))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, div_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_QPoint___neg__(PyObject *);}
static PyObject *slot_QPoint___neg__(PyObject *sipSelf)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;


    {
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPoint___pos__(PyObject *);}
static PyObject *slot_QPoint___pos__(PyObject *sipSelf)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;


    {
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(+(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPoint___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::QPoint::operator/=(a0);

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


extern "C" {static PyObject *slot_QPoint___imul__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1Xi", &a0))
        {
            sipCpp-> ::QPoint::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::QPoint::operator*=(a0);

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


extern "C" {static PyObject *slot_QPoint___isub__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPoint, &a0))
        {
            sipCpp-> ::QPoint::operator-=(*a0);

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


extern "C" {static PyObject *slot_QPoint___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QPoint___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QPoint)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPoint, &a0))
        {
            sipCpp-> ::QPoint::operator+=(*a0);

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


extern "C" {static int slot_QPoint___bool__(PyObject *);}
static int slot_QPoint___bool__(PyObject *sipSelf)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

        sipRes = !sipCpp->isNull();

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QPoint___repr__(PyObject *);}
static PyObject *slot_QPoint___repr__(PyObject *sipSelf)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPoint));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QPoint()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QPoint()");
        #endif
        }
        else
        {
            sipRes =
        #if PY_MAJOR_VERSION >= 3
                PyUnicode_FromFormat
        #else
                PyString_FromFormat
        #endif
                    ("PyQt5.QtCore.QPoint(%i, %i)", sipCpp->x(), sipCpp->y());
        }

            return sipRes;
        }
    }

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPoint(void *, int);}
static void release_QPoint(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPoint *>(sipCppV);
}


extern "C" {static PyObject *pickle_QPoint(void *);}
static PyObject *pickle_QPoint(void *sipCppV)
{
     ::QPoint *sipCpp = reinterpret_cast< ::QPoint *>(sipCppV);
    PyObject *sipRes;

    sipRes = Py_BuildValue((char *)"ii", sipCpp->x(), sipCpp->y());

    return sipRes;
}


extern "C" {static void assign_QPoint(void *, SIP_SSIZE_T, void *);}
static void assign_QPoint(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPoint *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPoint *>(sipSrc);
}


extern "C" {static void *array_QPoint(SIP_SSIZE_T);}
static void *array_QPoint(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPoint[sipNrElem];
}


extern "C" {static void *copy_QPoint(const void *, SIP_SSIZE_T);}
static void *copy_QPoint(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPoint(reinterpret_cast<const  ::QPoint *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPoint(sipSimpleWrapper *);}
static void dealloc_QPoint(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPoint(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPoint(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPoint(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPoint *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QPoint();

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ii", &a0, &a1))
        {
            sipCpp = new  ::QPoint(a0,a1);

            return sipCpp;
        }
    }

    {
        const  ::QPoint* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPoint, &a0))
        {
            sipCpp = new  ::QPoint(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPoint[] = {
    {(void *)slot_QPoint___eq__, eq_slot},
    {(void *)slot_QPoint___ne__, ne_slot},
    {(void *)slot_QPoint___add__, add_slot},
    {(void *)slot_QPoint___sub__, sub_slot},
    {(void *)slot_QPoint___mul__, mul_slot},
    {(void *)slot_QPoint___div__, div_slot},
    {(void *)slot_QPoint___neg__, neg_slot},
    {(void *)slot_QPoint___pos__, pos_slot},
    {(void *)slot_QPoint___idiv__, idiv_slot},
    {(void *)slot_QPoint___imul__, imul_slot},
    {(void *)slot_QPoint___isub__, isub_slot},
    {(void *)slot_QPoint___iadd__, iadd_slot},
    {(void *)slot_QPoint___bool__, bool_slot},
    {(void *)slot_QPoint___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPoint[] = {
    {SIP_MLNAME_CAST(sipName_dotProduct), meth_QPoint_dotProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_dotProduct)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPoint_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_isNull)},
    {SIP_MLNAME_CAST(sipName_manhattanLength), meth_QPoint_manhattanLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_manhattanLength)},
    {SIP_MLNAME_CAST(sipName_setX), meth_QPoint_setX, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_setX)},
    {SIP_MLNAME_CAST(sipName_setY), meth_QPoint_setY, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_setY)},
    {SIP_MLNAME_CAST(sipName_x), meth_QPoint_x, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_x)},
    {SIP_MLNAME_CAST(sipName_y), meth_QPoint_y, METH_VARARGS, SIP_MLDOC_CAST(doc_QPoint_y)}
};

PyDoc_STRVAR(doc_QPoint, "\1QPoint()\n"
"QPoint(int, int)\n"
"QPoint(QPoint)");


static pyqt5ClassPluginDef plugin_QPoint = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QPoint = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPoint,
        {0},
        &plugin_QPoint
    },
    {
        sipNameNr_QPoint,
        {0, 0, 1},
        7, methods_QPoint,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPoint,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPoint,
    init_type_QPoint,
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
    dealloc_QPoint,
    assign_QPoint,
    array_QPoint,
    copy_QPoint,
    release_QPoint,
    0,
    0,
    0,
    0,
    pickle_QPoint,
    0,
    0
};
