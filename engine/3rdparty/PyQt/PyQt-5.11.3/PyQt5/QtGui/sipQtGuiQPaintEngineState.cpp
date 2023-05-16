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

#include <qpaintengine.h>

#include <qtransform.h>
#include <qpainter.h>
#include <qpainter.h>
#include <qpainterpath.h>
#include <qregion.h>
#include <qnamespace.h>
#include <qfont.h>
#include <qbrush.h>
#include <qpoint.h>
#include <qpen.h>
#include <qpaintengine.h>


PyDoc_STRVAR(doc_QPaintEngineState_state, "state(self) -> QPaintEngine.DirtyFlags");

extern "C" {static PyObject *meth_QPaintEngineState_state(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPaintEngine::DirtyFlags*sipRes;

            sipRes = new  ::QPaintEngine::DirtyFlags(sipCpp->state());

            return sipConvertFromNewType(sipRes,sipType_QPaintEngine_DirtyFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_state, doc_QPaintEngineState_state);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_pen, "pen(self) -> QPen");

extern "C" {static PyObject *meth_QPaintEngineState_pen(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_pen(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPen*sipRes;

            sipRes = new  ::QPen(sipCpp->pen());

            return sipConvertFromNewType(sipRes,sipType_QPen,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_pen, doc_QPaintEngineState_pen);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brush, "brush(self) -> QBrush");

extern "C" {static PyObject *meth_QPaintEngineState_brush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QBrush*sipRes;

            sipRes = new  ::QBrush(sipCpp->brush());

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brush, doc_QPaintEngineState_brush);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brushOrigin, "brushOrigin(self) -> QPointF");

extern "C" {static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushOrigin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->brushOrigin());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brushOrigin, doc_QPaintEngineState_brushOrigin);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_backgroundBrush, "backgroundBrush(self) -> QBrush");

extern "C" {static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundBrush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QBrush*sipRes;

            sipRes = new  ::QBrush(sipCpp->backgroundBrush());

            return sipConvertFromNewType(sipRes,sipType_QBrush,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_backgroundBrush, doc_QPaintEngineState_backgroundBrush);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_backgroundMode, "backgroundMode(self) -> Qt.BGMode");

extern "C" {static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_backgroundMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::Qt::BGMode sipRes;

            sipRes = sipCpp->backgroundMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_BGMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_backgroundMode, doc_QPaintEngineState_backgroundMode);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_font, "font(self) -> QFont");

extern "C" {static PyObject *meth_QPaintEngineState_font(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_font(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QFont*sipRes;

            sipRes = new  ::QFont(sipCpp->font());

            return sipConvertFromNewType(sipRes,sipType_QFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_font, doc_QPaintEngineState_font);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_opacity, "opacity(self) -> float");

extern "C" {static PyObject *meth_QPaintEngineState_opacity(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_opacity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::qreal sipRes;

            sipRes = sipCpp->opacity();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_opacity, doc_QPaintEngineState_opacity);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipOperation, "clipOperation(self) -> Qt.ClipOperation");

extern "C" {static PyObject *meth_QPaintEngineState_clipOperation(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipOperation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::Qt::ClipOperation sipRes;

            sipRes = sipCpp->clipOperation();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_ClipOperation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipOperation, doc_QPaintEngineState_clipOperation);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipRegion, "clipRegion(self) -> QRegion");

extern "C" {static PyObject *meth_QPaintEngineState_clipRegion(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipRegion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QRegion*sipRes;

            sipRes = new  ::QRegion(sipCpp->clipRegion());

            return sipConvertFromNewType(sipRes,sipType_QRegion,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipRegion, doc_QPaintEngineState_clipRegion);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_clipPath, "clipPath(self) -> QPainterPath");

extern "C" {static PyObject *meth_QPaintEngineState_clipPath(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_clipPath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPainterPath*sipRes;

            sipRes = new  ::QPainterPath(sipCpp->clipPath());

            return sipConvertFromNewType(sipRes,sipType_QPainterPath,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_clipPath, doc_QPaintEngineState_clipPath);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_isClipEnabled, "isClipEnabled(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_isClipEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isClipEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_isClipEnabled, doc_QPaintEngineState_isClipEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_renderHints, "renderHints(self) -> QPainter.RenderHints");

extern "C" {static PyObject *meth_QPaintEngineState_renderHints(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_renderHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPainter::RenderHints*sipRes;

            sipRes = new  ::QPainter::RenderHints(sipCpp->renderHints());

            return sipConvertFromNewType(sipRes,sipType_QPainter_RenderHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_renderHints, doc_QPaintEngineState_renderHints);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_compositionMode, "compositionMode(self) -> QPainter.CompositionMode");

extern "C" {static PyObject *meth_QPaintEngineState_compositionMode(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_compositionMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPainter::CompositionMode sipRes;

            sipRes = sipCpp->compositionMode();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QPainter_CompositionMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_compositionMode, doc_QPaintEngineState_compositionMode);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_painter, "painter(self) -> QPainter");

extern "C" {static PyObject *meth_QPaintEngineState_painter(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_painter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QPainter*sipRes;

            sipRes = sipCpp->painter();

            return sipConvertFromType(sipRes,sipType_QPainter,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_painter, doc_QPaintEngineState_painter);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_transform, "transform(self) -> QTransform");

extern "C" {static PyObject *meth_QPaintEngineState_transform(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_transform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
             ::QTransform*sipRes;

            sipRes = new  ::QTransform(sipCpp->transform());

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_transform, doc_QPaintEngineState_transform);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_brushNeedsResolving, "brushNeedsResolving(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_brushNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->brushNeedsResolving();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_brushNeedsResolving, doc_QPaintEngineState_brushNeedsResolving);

    return NULL;
}


PyDoc_STRVAR(doc_QPaintEngineState_penNeedsResolving, "penNeedsResolving(self) -> bool");

extern "C" {static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *, PyObject *);}
static PyObject *meth_QPaintEngineState_penNeedsResolving(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QPaintEngineState *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPaintEngineState, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->penNeedsResolving();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPaintEngineState, sipName_penNeedsResolving, doc_QPaintEngineState_penNeedsResolving);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPaintEngineState(void *, int);}
static void release_QPaintEngineState(void *sipCppV, int)
{
    delete reinterpret_cast< ::QPaintEngineState *>(sipCppV);
}


extern "C" {static void assign_QPaintEngineState(void *, SIP_SSIZE_T, void *);}
static void assign_QPaintEngineState(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QPaintEngineState *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QPaintEngineState *>(sipSrc);
}


extern "C" {static void *array_QPaintEngineState(SIP_SSIZE_T);}
static void *array_QPaintEngineState(SIP_SSIZE_T sipNrElem)
{
    return new  ::QPaintEngineState[sipNrElem];
}


extern "C" {static void *copy_QPaintEngineState(const void *, SIP_SSIZE_T);}
static void *copy_QPaintEngineState(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QPaintEngineState(reinterpret_cast<const  ::QPaintEngineState *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPaintEngineState(sipSimpleWrapper *);}
static void dealloc_QPaintEngineState(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QPaintEngineState(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QPaintEngineState(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPaintEngineState(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QPaintEngineState *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QPaintEngineState();

            return sipCpp;
        }
    }

    {
        const  ::QPaintEngineState* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPaintEngineState, &a0))
        {
            sipCpp = new  ::QPaintEngineState(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPaintEngineState[] = {
    {SIP_MLNAME_CAST(sipName_backgroundBrush), meth_QPaintEngineState_backgroundBrush, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_backgroundBrush)},
    {SIP_MLNAME_CAST(sipName_backgroundMode), meth_QPaintEngineState_backgroundMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_backgroundMode)},
    {SIP_MLNAME_CAST(sipName_brush), meth_QPaintEngineState_brush, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brush)},
    {SIP_MLNAME_CAST(sipName_brushNeedsResolving), meth_QPaintEngineState_brushNeedsResolving, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brushNeedsResolving)},
    {SIP_MLNAME_CAST(sipName_brushOrigin), meth_QPaintEngineState_brushOrigin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_brushOrigin)},
    {SIP_MLNAME_CAST(sipName_clipOperation), meth_QPaintEngineState_clipOperation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipOperation)},
    {SIP_MLNAME_CAST(sipName_clipPath), meth_QPaintEngineState_clipPath, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipPath)},
    {SIP_MLNAME_CAST(sipName_clipRegion), meth_QPaintEngineState_clipRegion, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_clipRegion)},
    {SIP_MLNAME_CAST(sipName_compositionMode), meth_QPaintEngineState_compositionMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_compositionMode)},
    {SIP_MLNAME_CAST(sipName_font), meth_QPaintEngineState_font, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_font)},
    {SIP_MLNAME_CAST(sipName_isClipEnabled), meth_QPaintEngineState_isClipEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_isClipEnabled)},
    {SIP_MLNAME_CAST(sipName_opacity), meth_QPaintEngineState_opacity, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_opacity)},
    {SIP_MLNAME_CAST(sipName_painter), meth_QPaintEngineState_painter, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_painter)},
    {SIP_MLNAME_CAST(sipName_pen), meth_QPaintEngineState_pen, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_pen)},
    {SIP_MLNAME_CAST(sipName_penNeedsResolving), meth_QPaintEngineState_penNeedsResolving, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_penNeedsResolving)},
    {SIP_MLNAME_CAST(sipName_renderHints), meth_QPaintEngineState_renderHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_renderHints)},
    {SIP_MLNAME_CAST(sipName_state), meth_QPaintEngineState_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_state)},
    {SIP_MLNAME_CAST(sipName_transform), meth_QPaintEngineState_transform, METH_VARARGS, SIP_MLDOC_CAST(doc_QPaintEngineState_transform)}
};

PyDoc_STRVAR(doc_QPaintEngineState, "\1QPaintEngineState()\n"
"QPaintEngineState(QPaintEngineState)");


static pyqt5ClassPluginDef plugin_QPaintEngineState = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QPaintEngineState = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QPaintEngineState,
        {0},
        &plugin_QPaintEngineState
    },
    {
        sipNameNr_QPaintEngineState,
        {0, 0, 1},
        18, methods_QPaintEngineState,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPaintEngineState,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPaintEngineState,
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
    dealloc_QPaintEngineState,
    assign_QPaintEngineState,
    array_QPaintEngineState,
    copy_QPaintEngineState,
    release_QPaintEngineState,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
