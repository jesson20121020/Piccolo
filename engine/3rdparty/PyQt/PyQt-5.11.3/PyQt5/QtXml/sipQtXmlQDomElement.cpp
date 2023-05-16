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

#include <qstring.h>
#include <qdom.h>
#include <qdom.h>
#include <qdom.h>
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


PyDoc_STRVAR(doc_QDomElement_attribute, "attribute(self, str, defaultValue: str = '') -> str");

extern "C" {static PyObject *meth_QDomElement_attribute(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attribute(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString& a1def = QString();
        const  ::QString* a1 = &a1def;
        int a1State = 0;
        const  ::QDomElement *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->attribute(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_attribute, doc_QDomElement_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_setAttribute, "setAttribute(self, str, str)\n"
"setAttribute(self, str, int)\n"
"setAttribute(self, str, int)\n"
"setAttribute(self, str, float)\n"
"setAttribute(self, str, int)");

extern "C" {static PyObject *meth_QDomElement_setAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->setAttribute(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::qlonglong a1;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1n", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->setAttribute(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
         ::qulonglong a1;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1o", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->setAttribute(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        double a1;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1Xd", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->setAttribute(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        int a1;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1i", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            sipCpp->setAttribute(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_setAttribute, doc_QDomElement_setAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_removeAttribute, "removeAttribute(self, str)");

extern "C" {static PyObject *meth_QDomElement_removeAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->removeAttribute(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_removeAttribute, doc_QDomElement_removeAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_attributeNode, "attributeNode(self, str) -> QDomAttr");

extern "C" {static PyObject *meth_QDomElement_attributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QDomAttr*sipRes;

            sipRes = new  ::QDomAttr(sipCpp->attributeNode(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_attributeNode, doc_QDomElement_attributeNode);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_setAttributeNode, "setAttributeNode(self, QDomAttr) -> QDomAttr");

extern "C" {static PyObject *meth_QDomElement_setAttributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr* a0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QDomAttr, &a0))
        {
             ::QDomAttr*sipRes;

            sipRes = new  ::QDomAttr(sipCpp->setAttributeNode(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_setAttributeNode, doc_QDomElement_setAttributeNode);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_removeAttributeNode, "removeAttributeNode(self, QDomAttr) -> QDomAttr");

extern "C" {static PyObject *meth_QDomElement_removeAttributeNode(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttributeNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr* a0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QDomAttr, &a0))
        {
             ::QDomAttr*sipRes;

            sipRes = new  ::QDomAttr(sipCpp->removeAttributeNode(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_removeAttributeNode, doc_QDomElement_removeAttributeNode);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_elementsByTagName, "elementsByTagName(self, str) -> QDomNodeList");

extern "C" {static PyObject *meth_QDomElement_elementsByTagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_elementsByTagName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State))
        {
             ::QDomNodeList*sipRes;

            sipRes = new  ::QDomNodeList(sipCpp->elementsByTagName(*a0));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QDomNodeList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_elementsByTagName, doc_QDomElement_elementsByTagName);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_hasAttribute, "hasAttribute(self, str) -> bool");

extern "C" {static PyObject *meth_QDomElement_hasAttribute(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_hasAttribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttribute(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_hasAttribute, doc_QDomElement_hasAttribute);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_attributeNS, "attributeNS(self, str, str, defaultValue: str = '') -> str");

extern "C" {static PyObject *meth_QDomElement_attributeNS(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNS(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString& a2def = QString();
        const  ::QString* a2 = &a2def;
        int a2State = 0;
        const  ::QDomElement *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->attributeNS(*a0,*a1,*a2));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_attributeNS, doc_QDomElement_attributeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_setAttributeNS, "setAttributeNS(self, str, str, str)\n"
"setAttributeNS(self, str, str, int)\n"
"setAttributeNS(self, str, str, int)\n"
"setAttributeNS(self, str, str, float)\n"
"setAttributeNS(self, str, str, int)");

extern "C" {static PyObject *meth_QDomElement_setAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            sipCpp->setAttributeNS(*a0,*a1,*a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::qlonglong a2;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1n", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            sipCpp->setAttributeNS(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::qulonglong a2;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1o", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            sipCpp->setAttributeNS(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        double a2;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1Xd", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            sipCpp->setAttributeNS(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        int a2;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1i", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, &a2))
        {
            sipCpp->setAttributeNS(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_setAttributeNS, doc_QDomElement_setAttributeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_removeAttributeNS, "removeAttributeNS(self, str, str)");

extern "C" {static PyObject *meth_QDomElement_removeAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_removeAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->removeAttributeNS(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_removeAttributeNS, doc_QDomElement_removeAttributeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_attributeNodeNS, "attributeNodeNS(self, str, str) -> QDomAttr");

extern "C" {static PyObject *meth_QDomElement_attributeNodeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributeNodeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDomAttr*sipRes;

            sipRes = new  ::QDomAttr(sipCpp->attributeNodeNS(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_attributeNodeNS, doc_QDomElement_attributeNodeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_setAttributeNodeNS, "setAttributeNodeNS(self, QDomAttr) -> QDomAttr");

extern "C" {static PyObject *meth_QDomElement_setAttributeNodeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setAttributeNodeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomAttr* a0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QDomAttr, &a0))
        {
             ::QDomAttr*sipRes;

            sipRes = new  ::QDomAttr(sipCpp->setAttributeNodeNS(*a0));

            return sipConvertFromNewType(sipRes,sipType_QDomAttr,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_setAttributeNodeNS, doc_QDomElement_setAttributeNodeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_elementsByTagNameNS, "elementsByTagNameNS(self, str, str) -> QDomNodeList");

extern "C" {static PyObject *meth_QDomElement_elementsByTagNameNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_elementsByTagNameNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
             ::QDomNodeList*sipRes;

            sipRes = new  ::QDomNodeList(sipCpp->elementsByTagNameNS(*a0,*a1));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QDomNodeList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_elementsByTagNameNS, doc_QDomElement_elementsByTagNameNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_hasAttributeNS, "hasAttributeNS(self, str, str) -> bool");

extern "C" {static PyObject *meth_QDomElement_hasAttributeNS(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_hasAttributeNS(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->hasAttributeNS(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_hasAttributeNS, doc_QDomElement_hasAttributeNS);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_tagName, "tagName(self) -> str");

extern "C" {static PyObject *meth_QDomElement_tagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_tagName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomElement, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->tagName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_tagName, doc_QDomElement_tagName);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_setTagName, "setTagName(self, str)");

extern "C" {static PyObject *meth_QDomElement_setTagName(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_setTagName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QDomElement, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setTagName(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_setTagName, doc_QDomElement_setTagName);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_attributes, "attributes(self) -> QDomNamedNodeMap");

extern "C" {static PyObject *meth_QDomElement_attributes(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomElement, &sipCpp))
        {
             ::QDomNamedNodeMap*sipRes;

            sipRes = new  ::QDomNamedNodeMap(sipCpp->attributes());

            return sipConvertFromNewType(sipRes,sipType_QDomNamedNodeMap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_attributes, doc_QDomElement_attributes);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_nodeType, "nodeType(self) -> QDomNode.NodeType");

extern "C" {static PyObject *meth_QDomElement_nodeType(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_nodeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomElement, &sipCpp))
        {
             ::QDomNode::NodeType sipRes;

            sipRes = sipCpp->nodeType();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QDomNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_nodeType, doc_QDomElement_nodeType);

    return NULL;
}


PyDoc_STRVAR(doc_QDomElement_text, "text(self) -> str");

extern "C" {static PyObject *meth_QDomElement_text(PyObject *, PyObject *);}
static PyObject *meth_QDomElement_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDomElement *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDomElement, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDomElement, sipName_text, doc_QDomElement_text);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDomElement(void *, const sipTypeDef *);}
static void *cast_QDomElement(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDomElement *sipCpp = reinterpret_cast< ::QDomElement *>(sipCppV);

    if (targetType == sipType_QDomNode)
        return static_cast< ::QDomNode *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDomElement(void *, int);}
static void release_QDomElement(void *sipCppV, int)
{
    delete reinterpret_cast< ::QDomElement *>(sipCppV);
}


extern "C" {static void assign_QDomElement(void *, SIP_SSIZE_T, void *);}
static void assign_QDomElement(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QDomElement *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QDomElement *>(sipSrc);
}


extern "C" {static void *array_QDomElement(SIP_SSIZE_T);}
static void *array_QDomElement(SIP_SSIZE_T sipNrElem)
{
    return new  ::QDomElement[sipNrElem];
}


extern "C" {static void *copy_QDomElement(const void *, SIP_SSIZE_T);}
static void *copy_QDomElement(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QDomElement(reinterpret_cast<const  ::QDomElement *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDomElement(sipSimpleWrapper *);}
static void dealloc_QDomElement(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDomElement(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QDomElement(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDomElement(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QDomElement *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QDomElement();

            return sipCpp;
        }
    }

    {
        const  ::QDomElement* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDomElement, &a0))
        {
            sipCpp = new  ::QDomElement(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDomElement[] = {{13, 255, 1}};


static PyMethodDef methods_QDomElement[] = {
    {SIP_MLNAME_CAST(sipName_attribute), (PyCFunction)meth_QDomElement_attribute, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDomElement_attribute)},
    {SIP_MLNAME_CAST(sipName_attributeNS), (PyCFunction)meth_QDomElement_attributeNS, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QDomElement_attributeNS)},
    {SIP_MLNAME_CAST(sipName_attributeNode), meth_QDomElement_attributeNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_attributeNode)},
    {SIP_MLNAME_CAST(sipName_attributeNodeNS), meth_QDomElement_attributeNodeNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_attributeNodeNS)},
    {SIP_MLNAME_CAST(sipName_attributes), meth_QDomElement_attributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_attributes)},
    {SIP_MLNAME_CAST(sipName_elementsByTagName), meth_QDomElement_elementsByTagName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_elementsByTagName)},
    {SIP_MLNAME_CAST(sipName_elementsByTagNameNS), meth_QDomElement_elementsByTagNameNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_elementsByTagNameNS)},
    {SIP_MLNAME_CAST(sipName_hasAttribute), meth_QDomElement_hasAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_hasAttribute)},
    {SIP_MLNAME_CAST(sipName_hasAttributeNS), meth_QDomElement_hasAttributeNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_hasAttributeNS)},
    {SIP_MLNAME_CAST(sipName_nodeType), meth_QDomElement_nodeType, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_nodeType)},
    {SIP_MLNAME_CAST(sipName_removeAttribute), meth_QDomElement_removeAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_removeAttribute)},
    {SIP_MLNAME_CAST(sipName_removeAttributeNS), meth_QDomElement_removeAttributeNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_removeAttributeNS)},
    {SIP_MLNAME_CAST(sipName_removeAttributeNode), meth_QDomElement_removeAttributeNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_removeAttributeNode)},
    {SIP_MLNAME_CAST(sipName_setAttribute), meth_QDomElement_setAttribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_setAttribute)},
    {SIP_MLNAME_CAST(sipName_setAttributeNS), meth_QDomElement_setAttributeNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_setAttributeNS)},
    {SIP_MLNAME_CAST(sipName_setAttributeNode), meth_QDomElement_setAttributeNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_setAttributeNode)},
    {SIP_MLNAME_CAST(sipName_setAttributeNodeNS), meth_QDomElement_setAttributeNodeNS, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_setAttributeNodeNS)},
    {SIP_MLNAME_CAST(sipName_setTagName), meth_QDomElement_setTagName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_setTagName)},
    {SIP_MLNAME_CAST(sipName_tagName), meth_QDomElement_tagName, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_tagName)},
    {SIP_MLNAME_CAST(sipName_text), meth_QDomElement_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QDomElement_text)}
};

PyDoc_STRVAR(doc_QDomElement, "\1QDomElement()\n"
"QDomElement(QDomElement)");


static pyqt5ClassPluginDef plugin_QDomElement = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QDomElement = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDomElement,
        {0},
        &plugin_QDomElement
    },
    {
        sipNameNr_QDomElement,
        {0, 0, 1},
        20, methods_QDomElement,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDomElement,
    -1,
    -1,
    supers_QDomElement,
    0,
    init_type_QDomElement,
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
    dealloc_QDomElement,
    assign_QDomElement,
    array_QDomElement,
    copy_QDomElement,
    release_QDomElement,
    cast_QDomElement,
    0,
    0,
    0,
    0,
    0,
    0
};
