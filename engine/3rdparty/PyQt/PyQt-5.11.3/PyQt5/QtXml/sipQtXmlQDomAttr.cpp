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

#include <qdom.h>

#include <qdom.h>
#include <qstring.h>
#include <qdom.h>
#include <qtextstream.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>


PyDoc_STRVAR(doc_QDomAttr_name, "name(self) -> str");

extern "C" {static PyObject *meth_QDomAttr_name(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomAttr, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_name, doc_QDomAttr_name);

    return NULL;
}


PyDoc_STRVAR(doc_QDomAttr_specified, "specified(self) -> bool");

extern "C" {static PyObject *meth_QDomAttr_specified(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_specified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomAttr, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->specified();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_specified, doc_QDomAttr_specified);

    return NULL;
}


PyDoc_STRVAR(doc_QDomAttr_ownerElement, "ownerElement(self) -> QDomElement");

extern "C" {static PyObject *meth_QDomAttr_ownerElement(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_ownerElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomAttr, &sipCpp))
        {
             ::QDomElement*sipRes;

            sipRes = new  ::QDomElement(sipCpp->ownerElement());

            return sipConvertFromNewType(sipRes,sipType_QDomElement,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_ownerElement, doc_QDomAttr_ownerElement);

    return NULL;
}


PyDoc_STRVAR(doc_QDomAttr_value, "value(self) -> str");

extern "C" {static PyObject *meth_QDomAttr_value(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomAttr, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->value());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_value, doc_QDomAttr_value);

    return NULL;
}


PyDoc_STRVAR(doc_QDomAttr_setValue, "setValue(self, str)");

extern "C" {static PyObject *meth_QDomAttr_setValue(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_setValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomAttr, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setValue(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_setValue, doc_QDomAttr_setValue);

    return NULL;
}


PyDoc_STRVAR(doc_QDomAttr_nodeType, "nodeType(self) -> QDomNode.NodeType");

extern "C" {static PyObject *meth_QDomAttr_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomAttr_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomAttr, &sipCpp))
        {
             ::QDomNode::NodeType sipRes;

            sipRes = sipCpp->nodeType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomAttr, sipName_nodeType, doc_QDomAttr_nodeType);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDomAttr(void *, const sipTypeDef *);}
static void *cast_QDomAttr(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDomAttr *sipCpp = reinterpret_cast< ::QDomAttr *>(sipCppV);

    if (targetType == sipType_QDomNode)
        return static_cast< ::QDomNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomAttr(void *, int);}
static void release_QDomAttr(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDomAttr *>(sipCppV);
}


extern "C" {static void assign_QDomAttr(void *, SIP_SSIZE_T, void *);}
static void assign_QDomAttr(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDomAttr *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDomAttr *>(sipSrc);
}


extern "C" {static void *array_QDomAttr(SIP_SSIZE_T);}
static void *array_QDomAttr(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDomAttr[sipNrElem];
}


extern "C" {static void *copy_QDomAttr(const void *, SIP_SSIZE_T);}
static void *copy_QDomAttr(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDomAttr(reinterpret_cast<const  ::QDomAttr *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomAttr(sipSimpleWrapper *);}
static void dealloc_QDomAttr(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDomAttr(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDomAttr(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomAttr(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDomAttr *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDomAttr();

            return sipCpp;
        }
    }

    {
        const  ::QDomAttr* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomAttr, &a0))
        {
            sipCpp = new  ::QDomAttr(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomAttr[] = {{13, 255, 1}};


static PyMethodDef methods_QDomAttr[] = {
    {SIP_MLNAME_CAST(sipName_name), meth_QDomAttr_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_name)},
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomAttr_nodeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_nodeType)},
    {SIP_MLNAME_CAST(sipName_ownerElement), meth_QDomAttr_ownerElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_ownerElement)},
    {SIP_MLNAME_CAST(sipName_setValue), meth_QDomAttr_setValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_setValue)},
    {SIP_MLNAME_CAST(sipName_specified), meth_QDomAttr_specified, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_specified)},
    {SIP_MLNAME_CAST(sipName_value), meth_QDomAttr_value, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomAttr_value)}
};

PyDoc_STRVAR(doc_QDomAttr, "\1QDomAttr()\n"
"QDomAttr(QDomAttr)");


static pyqt5ClassPluginDef plugin_QDomAttr = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QDomAttr = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDomAttr,
        {0},
        &plugin_QDomAttr
    },
    {
        sipNameNr_QDomAttr,
        {0, 0, 1},
        6, methods_QDomAttr,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomAttr,
    -1,
    -1,
    supers_QDomAttr,
    0,
    init_type_QDomAttr,
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
    dealloc_QDomAttr,
    assign_QDomAttr,
    array_QDomAttr,
    copy_QDomAttr,
    release_QDomAttr,
    cast_QDomAttr,
    0,
    0,
    0,
    0,
    0,
    0
};
