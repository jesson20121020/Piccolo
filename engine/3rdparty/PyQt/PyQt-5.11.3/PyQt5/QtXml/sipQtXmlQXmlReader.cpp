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

#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qxml.h>
#include <qstring.h>


class sipQXmlReader : public  ::QXmlReader
{
public:
    sipQXmlReader();
    sipQXmlReader(const  ::QXmlReader&);
    virtual ~sipQXmlReader();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool parse(const  ::QXmlInputSource*);
    bool parse(const  ::QXmlInputSource&);
     ::QXmlDeclHandler* declHandler() const;
    void setDeclHandler( ::QXmlDeclHandler*);
     ::QXmlLexicalHandler* lexicalHandler() const;
    void setLexicalHandler( ::QXmlLexicalHandler*);
     ::QXmlErrorHandler* errorHandler() const;
    void setErrorHandler( ::QXmlErrorHandler*);
     ::QXmlContentHandler* contentHandler() const;
    void setContentHandler( ::QXmlContentHandler*);
     ::QXmlDTDHandler* DTDHandler() const;
    void setDTDHandler( ::QXmlDTDHandler*);
     ::QXmlEntityResolver* entityResolver() const;
    void setEntityResolver( ::QXmlEntityResolver*);
    bool hasProperty(const  ::QString&) const;
    void setProperty(const  ::QString&,void*);
    void* property(const  ::QString&,bool*) const;
    bool hasFeature(const  ::QString&) const;
    void setFeature(const  ::QString&,bool);
    bool feature(const  ::QString&,bool*) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlReader(const sipQXmlReader &);
    sipQXmlReader &operator = (const sipQXmlReader &);

    char sipPyMethods[20];
};

sipQXmlReader::sipQXmlReader():  ::QXmlReader(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlReader::sipQXmlReader(const  ::QXmlReader& a0):  ::QXmlReader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlReader::~sipQXmlReader()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

bool sipQXmlReader::parse(const  ::QXmlInputSource*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QXmlReader,sipName_parse);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlInputSource*);

    return sipVH_QtXml_24(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlReader::parse(const  ::QXmlInputSource& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlReader,sipName_parse);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QXmlInputSource&);

    return sipVH_QtXml_23(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlDeclHandler* sipQXmlReader::declHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QXmlReader,sipName_declHandler);

    if (!sipMeth)
        return 0;

    extern  ::QXmlDeclHandler* sipVH_QtXml_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_22(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setDeclHandler( ::QXmlDeclHandler*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QXmlReader,sipName_setDeclHandler);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlDeclHandler*);

    sipVH_QtXml_21(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlLexicalHandler* sipQXmlReader::lexicalHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QXmlReader,sipName_lexicalHandler);

    if (!sipMeth)
        return 0;

    extern  ::QXmlLexicalHandler* sipVH_QtXml_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_20(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setLexicalHandler( ::QXmlLexicalHandler*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QXmlReader,sipName_setLexicalHandler);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlLexicalHandler*);

    sipVH_QtXml_19(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlErrorHandler* sipQXmlReader::errorHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,sipName_QXmlReader,sipName_errorHandler);

    if (!sipMeth)
        return 0;

    extern  ::QXmlErrorHandler* sipVH_QtXml_18(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_18(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setErrorHandler( ::QXmlErrorHandler*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QXmlReader,sipName_setErrorHandler);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlErrorHandler*);

    sipVH_QtXml_17(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlContentHandler* sipQXmlReader::contentHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QXmlReader,sipName_contentHandler);

    if (!sipMeth)
        return 0;

    extern  ::QXmlContentHandler* sipVH_QtXml_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_16(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setContentHandler( ::QXmlContentHandler*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QXmlReader,sipName_setContentHandler);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlContentHandler*);

    sipVH_QtXml_15(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlDTDHandler* sipQXmlReader::DTDHandler() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[10]),sipPySelf,sipName_QXmlReader,sipName_DTDHandler);

    if (!sipMeth)
        return 0;

    extern  ::QXmlDTDHandler* sipVH_QtXml_14(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_14(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setDTDHandler( ::QXmlDTDHandler*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QXmlReader,sipName_setDTDHandler);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlDTDHandler*);

    sipVH_QtXml_13(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QXmlEntityResolver* sipQXmlReader::entityResolver() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[12]),sipPySelf,sipName_QXmlReader,sipName_entityResolver);

    if (!sipMeth)
        return 0;

    extern  ::QXmlEntityResolver* sipVH_QtXml_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_12(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlReader::setEntityResolver( ::QXmlEntityResolver*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[13],sipPySelf,sipName_QXmlReader,sipName_setEntityResolver);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlEntityResolver*);

    sipVH_QtXml_11(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlReader::hasProperty(const  ::QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[14]),sipPySelf,sipName_QXmlReader,sipName_hasProperty);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQXmlReader::setProperty(const  ::QString& a0,void*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[15],sipPySelf,sipName_QXmlReader,sipName_setProperty);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_10(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,void*);

    sipVH_QtXml_10(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

void* sipQXmlReader::property(const  ::QString& a0,bool*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[16]),sipPySelf,sipName_QXmlReader,sipName_property);

    if (!sipMeth)
        return 0;

    extern void* sipVH_QtXml_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,bool*);

    return sipVH_QtXml_9(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlReader::hasFeature(const  ::QString& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[17]),sipPySelf,sipName_QXmlReader,sipName_hasFeature);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQXmlReader::setFeature(const  ::QString& a0,bool a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[18],sipPySelf,sipName_QXmlReader,sipName_setFeature);

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_7(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,bool);

    sipVH_QtXml_7(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlReader::feature(const  ::QString& a0,bool*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[19]),sipPySelf,sipName_QXmlReader,sipName_feature);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_6(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,bool*);

    return sipVH_QtXml_6(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}


PyDoc_STRVAR(doc_QXmlReader_feature, "feature(self, str) -> Tuple[bool, bool]");

extern "C" {static PyObject *meth_QXmlReader_feature(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_feature(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        bool a1;
        const  ::QXmlReader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_feature);
                return NULL;
            }

            sipRes = sipCpp->feature(*a0,&a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(bb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_feature, doc_QXmlReader_feature);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setFeature, "setFeature(self, str, bool)");

extern "C" {static PyObject *meth_QXmlReader_setFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        bool a1;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1b", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setFeature);
                return NULL;
            }

            sipCpp->setFeature(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setFeature, doc_QXmlReader_setFeature);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_hasFeature, "hasFeature(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlReader_hasFeature(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_hasFeature(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_hasFeature);
                return NULL;
            }

            sipRes = sipCpp->hasFeature(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_hasFeature, doc_QXmlReader_hasFeature);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_property, "property(self, str) -> Tuple[sip.voidptr, bool]");

extern "C" {static PyObject *meth_QXmlReader_property(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_property(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        bool a1;
        const  ::QXmlReader *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            void*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_property);
                return NULL;
            }

            sipRes = sipCpp->property(*a0,&a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return sipBuildResult(0,"(Vb)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_property, doc_QXmlReader_property);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setProperty, "setProperty(self, str, sip.voidptr)");

extern "C" {static PyObject *meth_QXmlReader_setProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        void* a1;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1v", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setProperty);
                return NULL;
            }

            sipCpp->setProperty(*a0,a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setProperty, doc_QXmlReader_setProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_hasProperty, "hasProperty(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlReader_hasProperty(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_hasProperty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_hasProperty);
                return NULL;
            }

            sipRes = sipCpp->hasProperty(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_hasProperty, doc_QXmlReader_hasProperty);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setEntityResolver, "setEntityResolver(self, QXmlEntityResolver)");

extern "C" {static PyObject *meth_QXmlReader_setEntityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setEntityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlEntityResolver* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlEntityResolver, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setEntityResolver);
                return NULL;
            }

            sipCpp->setEntityResolver(a0);

            sipKeepReference(sipSelf, -1, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setEntityResolver, doc_QXmlReader_setEntityResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_entityResolver, "entityResolver(self) -> QXmlEntityResolver");

extern "C" {static PyObject *meth_QXmlReader_entityResolver(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_entityResolver(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlEntityResolver*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_entityResolver);
                return NULL;
            }

            sipRes = sipCpp->entityResolver();

            return sipConvertFromType(sipRes,sipType_QXmlEntityResolver,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_entityResolver, doc_QXmlReader_entityResolver);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setDTDHandler, "setDTDHandler(self, QXmlDTDHandler)");

extern "C" {static PyObject *meth_QXmlReader_setDTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setDTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlDTDHandler* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlDTDHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setDTDHandler);
                return NULL;
            }

            sipCpp->setDTDHandler(a0);

            sipKeepReference(sipSelf, -2, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setDTDHandler, doc_QXmlReader_setDTDHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_DTDHandler, "DTDHandler(self) -> QXmlDTDHandler");

extern "C" {static PyObject *meth_QXmlReader_DTDHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_DTDHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlDTDHandler*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_DTDHandler);
                return NULL;
            }

            sipRes = sipCpp->DTDHandler();

            return sipConvertFromType(sipRes,sipType_QXmlDTDHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_DTDHandler, doc_QXmlReader_DTDHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setContentHandler, "setContentHandler(self, QXmlContentHandler)");

extern "C" {static PyObject *meth_QXmlReader_setContentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setContentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlContentHandler* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlContentHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setContentHandler);
                return NULL;
            }

            sipCpp->setContentHandler(a0);

            sipKeepReference(sipSelf, -3, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setContentHandler, doc_QXmlReader_setContentHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_contentHandler, "contentHandler(self) -> QXmlContentHandler");

extern "C" {static PyObject *meth_QXmlReader_contentHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_contentHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlContentHandler*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_contentHandler);
                return NULL;
            }

            sipRes = sipCpp->contentHandler();

            return sipConvertFromType(sipRes,sipType_QXmlContentHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_contentHandler, doc_QXmlReader_contentHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setErrorHandler, "setErrorHandler(self, QXmlErrorHandler)");

extern "C" {static PyObject *meth_QXmlReader_setErrorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setErrorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlErrorHandler* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlErrorHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setErrorHandler);
                return NULL;
            }

            sipCpp->setErrorHandler(a0);

            sipKeepReference(sipSelf, -4, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setErrorHandler, doc_QXmlReader_setErrorHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_errorHandler, "errorHandler(self) -> QXmlErrorHandler");

extern "C" {static PyObject *meth_QXmlReader_errorHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_errorHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlErrorHandler*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_errorHandler);
                return NULL;
            }

            sipRes = sipCpp->errorHandler();

            return sipConvertFromType(sipRes,sipType_QXmlErrorHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_errorHandler, doc_QXmlReader_errorHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setLexicalHandler, "setLexicalHandler(self, QXmlLexicalHandler)");

extern "C" {static PyObject *meth_QXmlReader_setLexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setLexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlLexicalHandler* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlLexicalHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setLexicalHandler);
                return NULL;
            }

            sipCpp->setLexicalHandler(a0);

            sipKeepReference(sipSelf, -5, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setLexicalHandler, doc_QXmlReader_setLexicalHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_lexicalHandler, "lexicalHandler(self) -> QXmlLexicalHandler");

extern "C" {static PyObject *meth_QXmlReader_lexicalHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_lexicalHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlLexicalHandler*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_lexicalHandler);
                return NULL;
            }

            sipRes = sipCpp->lexicalHandler();

            return sipConvertFromType(sipRes,sipType_QXmlLexicalHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_lexicalHandler, doc_QXmlReader_lexicalHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_setDeclHandler, "setDeclHandler(self, QXmlDeclHandler)");

extern "C" {static PyObject *meth_QXmlReader_setDeclHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_setDeclHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlDeclHandler* a0;
        PyObject *a0Keep;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlReader, &sipCpp, &a0Keep, sipType_QXmlDeclHandler, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_setDeclHandler);
                return NULL;
            }

            sipCpp->setDeclHandler(a0);

            sipKeepReference(sipSelf, -6, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_setDeclHandler, doc_QXmlReader_setDeclHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_declHandler, "declHandler(self) -> QXmlDeclHandler");

extern "C" {static PyObject *meth_QXmlReader_declHandler(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_declHandler(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlReader, &sipCpp))
        {
             ::QXmlDeclHandler*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_declHandler);
                return NULL;
            }

            sipRes = sipCpp->declHandler();

            return sipConvertFromType(sipRes,sipType_QXmlDeclHandler,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_declHandler, doc_QXmlReader_declHandler);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlReader_parse, "parse(self, QXmlInputSource) -> bool\n"
"parse(self, QXmlInputSource) -> bool");

extern "C" {static PyObject *meth_QXmlReader_parse(PyObject *, PyObject *);}
static PyObject *meth_QXmlReader_parse(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlInputSource* a0;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QXmlInputSource, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_parse);
                return NULL;
            }

            sipRes = sipCpp->parse(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        const  ::QXmlInputSource* a0;
         ::QXmlReader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QXmlReader, &sipCpp, sipType_QXmlInputSource, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlReader, sipName_parse);
                return NULL;
            }

            sipRes = sipCpp->parse(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlReader, sipName_parse, doc_QXmlReader_parse);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlReader(void *, int);}
static void release_QXmlReader(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlReader *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlReader *>(sipCppV);
}


extern "C" {static void dealloc_QXmlReader(sipSimpleWrapper *);}
static void dealloc_QXmlReader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlReader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlReader(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlReader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlReader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlReader *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlReader();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlReader* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlReader, &a0))
        {
            sipCpp = new sipQXmlReader(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlReader[] = {
    {SIP_MLNAME_CAST(sipName_DTDHandler), meth_QXmlReader_DTDHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_DTDHandler)},
    {SIP_MLNAME_CAST(sipName_contentHandler), meth_QXmlReader_contentHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_contentHandler)},
    {SIP_MLNAME_CAST(sipName_declHandler), meth_QXmlReader_declHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_declHandler)},
    {SIP_MLNAME_CAST(sipName_entityResolver), meth_QXmlReader_entityResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_entityResolver)},
    {SIP_MLNAME_CAST(sipName_errorHandler), meth_QXmlReader_errorHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_errorHandler)},
    {SIP_MLNAME_CAST(sipName_feature), (PyCFunction)meth_QXmlReader_feature, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlReader_feature)},
    {SIP_MLNAME_CAST(sipName_hasFeature), meth_QXmlReader_hasFeature, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_hasFeature)},
    {SIP_MLNAME_CAST(sipName_hasProperty), meth_QXmlReader_hasProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_hasProperty)},
    {SIP_MLNAME_CAST(sipName_lexicalHandler), meth_QXmlReader_lexicalHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_lexicalHandler)},
    {SIP_MLNAME_CAST(sipName_parse), meth_QXmlReader_parse, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_parse)},
    {SIP_MLNAME_CAST(sipName_property), (PyCFunction)meth_QXmlReader_property, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QXmlReader_property)},
    {SIP_MLNAME_CAST(sipName_setContentHandler), meth_QXmlReader_setContentHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setContentHandler)},
    {SIP_MLNAME_CAST(sipName_setDTDHandler), meth_QXmlReader_setDTDHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setDTDHandler)},
    {SIP_MLNAME_CAST(sipName_setDeclHandler), meth_QXmlReader_setDeclHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setDeclHandler)},
    {SIP_MLNAME_CAST(sipName_setEntityResolver), meth_QXmlReader_setEntityResolver, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setEntityResolver)},
    {SIP_MLNAME_CAST(sipName_setErrorHandler), meth_QXmlReader_setErrorHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setErrorHandler)},
    {SIP_MLNAME_CAST(sipName_setFeature), meth_QXmlReader_setFeature, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setFeature)},
    {SIP_MLNAME_CAST(sipName_setLexicalHandler), meth_QXmlReader_setLexicalHandler, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setLexicalHandler)},
    {SIP_MLNAME_CAST(sipName_setProperty), meth_QXmlReader_setProperty, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlReader_setProperty)}
};

PyDoc_STRVAR(doc_QXmlReader, "\1QXmlReader()\n"
"QXmlReader(QXmlReader)");


static pyqt5ClassPluginDef plugin_QXmlReader = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlReader = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlReader,
        {0},
        &plugin_QXmlReader
    },
    {
        sipNameNr_QXmlReader,
        {0, 0, 1},
        19, methods_QXmlReader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlReader,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlReader,
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
    dealloc_QXmlReader,
    0,
    0,
    0,
    release_QXmlReader,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
