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

#include "sipAPIQtXml.h"

#include <qxml.h>

#include <qstring.h>


PyDoc_STRVAR(doc_QXmlParseException_columnNumber, "columnNumber(self) -> int");

extern "C" {static PyObject *meth_QXmlParseException_columnNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_columnNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->columnNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_columnNumber, doc_QXmlParseException_columnNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_lineNumber, "lineNumber(self) -> int");

extern "C" {static PyObject *meth_QXmlParseException_lineNumber(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_lineNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lineNumber();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_lineNumber, doc_QXmlParseException_lineNumber);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_publicId, "publicId(self) -> str");

extern "C" {static PyObject *meth_QXmlParseException_publicId(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_publicId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->publicId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_publicId, doc_QXmlParseException_publicId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_systemId, "systemId(self) -> str");

extern "C" {static PyObject *meth_QXmlParseException_systemId(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_systemId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->systemId());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_systemId, doc_QXmlParseException_systemId);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlParseException_message, "message(self) -> str");

extern "C" {static PyObject *meth_QXmlParseException_message(PyObject *, PyObject *);}
static PyObject *meth_QXmlParseException_message(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QXmlParseException *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlParseException, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->message());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlParseException, sipName_message, doc_QXmlParseException_message);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlParseException(void *, int);}
static void release_QXmlParseException(void *sipCppV, int)
{
    delete reinterpret_cast< ::QXmlParseException *>(sipCppV);
}


extern "C" {static void dealloc_QXmlParseException(sipSimpleWrapper *);}
static void dealloc_QXmlParseException(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlParseException(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QXmlParseException(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlParseException(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QXmlParseException *sipCpp = 0;

    {
        const  ::QString& a0def = QString();
        const  ::QString* a0 = &a0def;
        int a0State = 0;
        int a1 = -1;
        int a2 = -1;
        const  ::QString& a3def = QString();
        const  ::QString* a3 = &a3def;
        int a3State = 0;
        const  ::QString& a4def = QString();
        const  ::QString* a4 = &a4def;
        int a4State = 0;

        static const char *sipKwdList[] = {
            sipName_name,
            sipName_column,
            sipName_line,
            sipName_publicId,
            sipName_systemId,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1iiJ1J1", sipType_QString,&a0, &a0State, &a1, &a2, sipType_QString,&a3, &a3State, sipType_QString,&a4, &a4State))
        {
            sipCpp = new  ::QXmlParseException(*a0,a1,a2,*a3,*a4);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a3),sipType_QString,a3State);
            sipReleaseType(const_cast< ::QString *>(a4),sipType_QString,a4State);

            return sipCpp;
        }
    }

    {
        const  ::QXmlParseException* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlParseException, &a0))
        {
            sipCpp = new  ::QXmlParseException(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlParseException[] = {
    {SIP_MLNAME_CAST(sipName_columnNumber), meth_QXmlParseException_columnNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_columnNumber)},
    {SIP_MLNAME_CAST(sipName_lineNumber), meth_QXmlParseException_lineNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_lineNumber)},
    {SIP_MLNAME_CAST(sipName_message), meth_QXmlParseException_message, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_message)},
    {SIP_MLNAME_CAST(sipName_publicId), meth_QXmlParseException_publicId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_publicId)},
    {SIP_MLNAME_CAST(sipName_systemId), meth_QXmlParseException_systemId, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlParseException_systemId)}
};

PyDoc_STRVAR(doc_QXmlParseException, "\1QXmlParseException(name: str = '', column: int = -1, line: int = -1, publicId: str = '', systemId: str = '')\n"
"QXmlParseException(QXmlParseException)");


static pyqt5ClassPluginDef plugin_QXmlParseException = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlParseException = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlParseException,
        {0},
        &plugin_QXmlParseException
    },
    {
        sipNameNr_QXmlParseException,
        {0, 0, 1},
        5, methods_QXmlParseException,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlParseException,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlParseException,
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
    dealloc_QXmlParseException,
    0,
    0,
    0,
    release_QXmlParseException,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
