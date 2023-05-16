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

#include <qtemporarydir.h>

#include <qstring.h>


PyDoc_STRVAR(doc_QTemporaryDir_isValid, "isValid(self) -> bool");

extern "C" {static PyObject *meth_QTemporaryDir_isValid(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTemporaryDir, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_isValid, doc_QTemporaryDir_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_autoRemove, "autoRemove(self) -> bool");

extern "C" {static PyObject *meth_QTemporaryDir_autoRemove(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_autoRemove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTemporaryDir, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoRemove();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_autoRemove, doc_QTemporaryDir_autoRemove);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_setAutoRemove, "setAutoRemove(self, bool)");

extern "C" {static PyObject *meth_QTemporaryDir_setAutoRemove(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_setAutoRemove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QTemporaryDir, &sipCpp, &a0))
        {
            sipCpp->setAutoRemove(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_setAutoRemove, doc_QTemporaryDir_setAutoRemove);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_remove, "remove(self) -> bool");

extern "C" {static PyObject *meth_QTemporaryDir_remove(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTemporaryDir, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->remove();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_remove, doc_QTemporaryDir_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_path, "path(self) -> str");

extern "C" {static PyObject *meth_QTemporaryDir_path(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_path(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTemporaryDir, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->path());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_path, doc_QTemporaryDir_path);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QTemporaryDir_errorString(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QTemporaryDir, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_errorString, doc_QTemporaryDir_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QTemporaryDir_filePath, "filePath(self, str) -> str");

extern "C" {static PyObject *meth_QTemporaryDir_filePath(PyObject *, PyObject *);}
static PyObject *meth_QTemporaryDir_filePath(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QTemporaryDir *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QTemporaryDir, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->filePath(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTemporaryDir, sipName_filePath, doc_QTemporaryDir_filePath);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTemporaryDir(void *, int);}
static void release_QTemporaryDir(void *sipCppV, int)
{
    delete reinterpret_cast< ::QTemporaryDir *>(sipCppV);
}


extern "C" {static void dealloc_QTemporaryDir(sipSimpleWrapper *);}
static void dealloc_QTemporaryDir(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTemporaryDir(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QTemporaryDir(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTemporaryDir(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QTemporaryDir *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QTemporaryDir();

            return sipCpp;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new  ::QTemporaryDir(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTemporaryDir[] = {
    {SIP_MLNAME_CAST(sipName_autoRemove), meth_QTemporaryDir_autoRemove, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_autoRemove)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QTemporaryDir_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_errorString)},
    {SIP_MLNAME_CAST(sipName_filePath), meth_QTemporaryDir_filePath, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_filePath)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QTemporaryDir_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_isValid)},
    {SIP_MLNAME_CAST(sipName_path), meth_QTemporaryDir_path, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_path)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QTemporaryDir_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_remove)},
    {SIP_MLNAME_CAST(sipName_setAutoRemove), meth_QTemporaryDir_setAutoRemove, METH_VARARGS, SIP_MLDOC_CAST(doc_QTemporaryDir_setAutoRemove)}
};

PyDoc_STRVAR(doc_QTemporaryDir, "\1QTemporaryDir()\n"
"QTemporaryDir(str)");


static pyqt5ClassPluginDef plugin_QTemporaryDir = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QTemporaryDir = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTemporaryDir,
        {0},
        &plugin_QTemporaryDir
    },
    {
        sipNameNr_QTemporaryDir,
        {0, 0, 1},
        7, methods_QTemporaryDir,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTemporaryDir,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTemporaryDir,
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
    dealloc_QTemporaryDir,
    0,
    0,
    0,
    release_QTemporaryDir,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
