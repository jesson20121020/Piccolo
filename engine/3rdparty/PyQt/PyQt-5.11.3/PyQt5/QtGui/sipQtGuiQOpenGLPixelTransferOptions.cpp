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

#include <qopenglpixeltransferoptions.h>



PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_swap, "swap(self, QOpenGLPixelTransferOptions)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_swap(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QOpenGLPixelTransferOptions* a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, sipType_QOpenGLPixelTransferOptions, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_swap, doc_QOpenGLPixelTransferOptions_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setAlignment, "setAlignment(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setAlignment(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setAlignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setAlignment(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setAlignment, doc_QOpenGLPixelTransferOptions_setAlignment);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_alignment, "alignment(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_alignment(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_alignment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->alignment();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_alignment, doc_QOpenGLPixelTransferOptions_alignment);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setSkipImages, "setSkipImages(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setSkipImages(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setSkipImages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setSkipImages(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setSkipImages, doc_QOpenGLPixelTransferOptions_setSkipImages);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_skipImages, "skipImages(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_skipImages(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_skipImages(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->skipImages();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_skipImages, doc_QOpenGLPixelTransferOptions_skipImages);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setSkipRows, "setSkipRows(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setSkipRows(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setSkipRows(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setSkipRows(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setSkipRows, doc_QOpenGLPixelTransferOptions_setSkipRows);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_skipRows, "skipRows(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_skipRows(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_skipRows(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->skipRows();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_skipRows, doc_QOpenGLPixelTransferOptions_skipRows);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setSkipPixels, "setSkipPixels(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setSkipPixels(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setSkipPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setSkipPixels(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setSkipPixels, doc_QOpenGLPixelTransferOptions_setSkipPixels);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_skipPixels, "skipPixels(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_skipPixels(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_skipPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->skipPixels();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_skipPixels, doc_QOpenGLPixelTransferOptions_skipPixels);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setImageHeight, "setImageHeight(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setImageHeight(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setImageHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setImageHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setImageHeight, doc_QOpenGLPixelTransferOptions_setImageHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_imageHeight, "imageHeight(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_imageHeight(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_imageHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->imageHeight();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_imageHeight, doc_QOpenGLPixelTransferOptions_imageHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setRowLength, "setRowLength(self, int)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setRowLength(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setRowLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setRowLength(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setRowLength, doc_QOpenGLPixelTransferOptions_setRowLength);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_rowLength, "rowLength(self) -> int");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_rowLength(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_rowLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->rowLength();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_rowLength, doc_QOpenGLPixelTransferOptions_rowLength);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst, "setLeastSignificantByteFirst(self, bool)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setLeastSignificantByteFirst(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setLeastSignificantByteFirst, doc_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst, "isLeastSignificantBitFirst(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLeastSignificantBitFirst();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_isLeastSignificantBitFirst, doc_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_setSwapBytesEnabled, "setSwapBytesEnabled(self, bool)");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_setSwapBytesEnabled(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_setSwapBytesEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp, &a0))
        {
            sipCpp->setSwapBytesEnabled(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_setSwapBytesEnabled, doc_QOpenGLPixelTransferOptions_setSwapBytesEnabled);

    return NULL;
}


PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions_isSwapBytesEnabled, "isSwapBytesEnabled(self) -> bool");

extern "C" {static PyObject *meth_QOpenGLPixelTransferOptions_isSwapBytesEnabled(PyObject *, PyObject *);}
static PyObject *meth_QOpenGLPixelTransferOptions_isSwapBytesEnabled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QOpenGLPixelTransferOptions *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QOpenGLPixelTransferOptions, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSwapBytesEnabled();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QOpenGLPixelTransferOptions, sipName_isSwapBytesEnabled, doc_QOpenGLPixelTransferOptions_isSwapBytesEnabled);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLPixelTransferOptions(void *, int);}
static void release_QOpenGLPixelTransferOptions(void *sipCppV, int)
{
    delete reinterpret_cast< ::QOpenGLPixelTransferOptions *>(sipCppV);
}


extern "C" {static void assign_QOpenGLPixelTransferOptions(void *, SIP_SSIZE_T, void *);}
static void assign_QOpenGLPixelTransferOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QOpenGLPixelTransferOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QOpenGLPixelTransferOptions *>(sipSrc);
}


extern "C" {static void *array_QOpenGLPixelTransferOptions(SIP_SSIZE_T);}
static void *array_QOpenGLPixelTransferOptions(SIP_SSIZE_T sipNrElem)
{
    return new  ::QOpenGLPixelTransferOptions[sipNrElem];
}


extern "C" {static void *copy_QOpenGLPixelTransferOptions(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLPixelTransferOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QOpenGLPixelTransferOptions(reinterpret_cast<const  ::QOpenGLPixelTransferOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLPixelTransferOptions(sipSimpleWrapper *);}
static void dealloc_QOpenGLPixelTransferOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QOpenGLPixelTransferOptions(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QOpenGLPixelTransferOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLPixelTransferOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QOpenGLPixelTransferOptions *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QOpenGLPixelTransferOptions();

            return sipCpp;
        }
    }

    {
        const  ::QOpenGLPixelTransferOptions* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QOpenGLPixelTransferOptions, &a0))
        {
            sipCpp = new  ::QOpenGLPixelTransferOptions(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QOpenGLPixelTransferOptions[] = {
    {SIP_MLNAME_CAST(sipName_alignment), meth_QOpenGLPixelTransferOptions_alignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_alignment)},
    {SIP_MLNAME_CAST(sipName_imageHeight), meth_QOpenGLPixelTransferOptions_imageHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_imageHeight)},
    {SIP_MLNAME_CAST(sipName_isLeastSignificantBitFirst), meth_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_isLeastSignificantBitFirst)},
    {SIP_MLNAME_CAST(sipName_isSwapBytesEnabled), meth_QOpenGLPixelTransferOptions_isSwapBytesEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_isSwapBytesEnabled)},
    {SIP_MLNAME_CAST(sipName_rowLength), meth_QOpenGLPixelTransferOptions_rowLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_rowLength)},
    {SIP_MLNAME_CAST(sipName_setAlignment), meth_QOpenGLPixelTransferOptions_setAlignment, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setAlignment)},
    {SIP_MLNAME_CAST(sipName_setImageHeight), meth_QOpenGLPixelTransferOptions_setImageHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setImageHeight)},
    {SIP_MLNAME_CAST(sipName_setLeastSignificantByteFirst), meth_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setLeastSignificantByteFirst)},
    {SIP_MLNAME_CAST(sipName_setRowLength), meth_QOpenGLPixelTransferOptions_setRowLength, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setRowLength)},
    {SIP_MLNAME_CAST(sipName_setSkipImages), meth_QOpenGLPixelTransferOptions_setSkipImages, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setSkipImages)},
    {SIP_MLNAME_CAST(sipName_setSkipPixels), meth_QOpenGLPixelTransferOptions_setSkipPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setSkipPixels)},
    {SIP_MLNAME_CAST(sipName_setSkipRows), meth_QOpenGLPixelTransferOptions_setSkipRows, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setSkipRows)},
    {SIP_MLNAME_CAST(sipName_setSwapBytesEnabled), meth_QOpenGLPixelTransferOptions_setSwapBytesEnabled, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_setSwapBytesEnabled)},
    {SIP_MLNAME_CAST(sipName_skipImages), meth_QOpenGLPixelTransferOptions_skipImages, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_skipImages)},
    {SIP_MLNAME_CAST(sipName_skipPixels), meth_QOpenGLPixelTransferOptions_skipPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_skipPixels)},
    {SIP_MLNAME_CAST(sipName_skipRows), meth_QOpenGLPixelTransferOptions_skipRows, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_skipRows)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QOpenGLPixelTransferOptions_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QOpenGLPixelTransferOptions_swap)}
};

PyDoc_STRVAR(doc_QOpenGLPixelTransferOptions, "\1QOpenGLPixelTransferOptions()\n"
"QOpenGLPixelTransferOptions(QOpenGLPixelTransferOptions)");


static pyqt5ClassPluginDef plugin_QOpenGLPixelTransferOptions = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QOpenGLPixelTransferOptions = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLPixelTransferOptions,
        {0},
        &plugin_QOpenGLPixelTransferOptions
    },
    {
        sipNameNr_QOpenGLPixelTransferOptions,
        {0, 0, 1},
        17, methods_QOpenGLPixelTransferOptions,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLPixelTransferOptions,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QOpenGLPixelTransferOptions,
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
    dealloc_QOpenGLPixelTransferOptions,
    assign_QOpenGLPixelTransferOptions,
    array_QOpenGLPixelTransferOptions,
    copy_QOpenGLPixelTransferOptions,
    release_QOpenGLPixelTransferOptions,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
