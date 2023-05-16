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


class sipQXmlLexicalHandler : public  ::QXmlLexicalHandler
{
public:
    sipQXmlLexicalHandler();
    sipQXmlLexicalHandler(const  ::QXmlLexicalHandler&);
    virtual ~sipQXmlLexicalHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString errorString() const;
    bool comment(const  ::QString&);
    bool endCDATA();
    bool startCDATA();
    bool endEntity(const  ::QString&);
    bool startEntity(const  ::QString&);
    bool endDTD();
    bool startDTD(const  ::QString&,const  ::QString&,const  ::QString&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlLexicalHandler(const sipQXmlLexicalHandler &);
    sipQXmlLexicalHandler &operator = (const sipQXmlLexicalHandler &);

    char sipPyMethods[8];
};

sipQXmlLexicalHandler::sipQXmlLexicalHandler():  ::QXmlLexicalHandler(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLexicalHandler::sipQXmlLexicalHandler(const  ::QXmlLexicalHandler& a0):  ::QXmlLexicalHandler(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlLexicalHandler::~sipQXmlLexicalHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlLexicalHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,sipName_QXmlLexicalHandler,sipName_errorString);

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_3(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlLexicalHandler::comment(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QXmlLexicalHandler,sipName_comment);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlLexicalHandler::endCDATA()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QXmlLexicalHandler,sipName_endCDATA);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_26(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlLexicalHandler::startCDATA()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QXmlLexicalHandler,sipName_startCDATA);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_26(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlLexicalHandler::endEntity(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QXmlLexicalHandler,sipName_endEntity);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlLexicalHandler::startEntity(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QXmlLexicalHandler,sipName_startEntity);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlLexicalHandler::endDTD()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QXmlLexicalHandler,sipName_endDTD);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_26(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlLexicalHandler::startDTD(const  ::QString& a0,const  ::QString& a1,const  ::QString& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QXmlLexicalHandler,sipName_startDTD);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&,const  ::QString&);

    return sipVH_QtXml_31(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_startDTD, "startDTD(self, str, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_startDTD(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_startDTD(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_startDTD);
                return NULL;
            }

            sipRes = sipCpp->startDTD(*a0,*a1,*a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_startDTD, doc_QXmlLexicalHandler_startDTD);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_endDTD, "endDTD(self) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_endDTD(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_endDTD(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_endDTD);
                return NULL;
            }

            sipRes = sipCpp->endDTD();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_endDTD, doc_QXmlLexicalHandler_endDTD);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_startEntity, "startEntity(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_startEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_startEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_startEntity);
                return NULL;
            }

            sipRes = sipCpp->startEntity(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_startEntity, doc_QXmlLexicalHandler_startEntity);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_endEntity, "endEntity(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_endEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_endEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_endEntity);
                return NULL;
            }

            sipRes = sipCpp->endEntity(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_endEntity, doc_QXmlLexicalHandler_endEntity);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_startCDATA, "startCDATA(self) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_startCDATA(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_startCDATA(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_startCDATA);
                return NULL;
            }

            sipRes = sipCpp->startCDATA();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_startCDATA, doc_QXmlLexicalHandler_startCDATA);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_endCDATA, "endCDATA(self) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_endCDATA(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_endCDATA(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_endCDATA);
                return NULL;
            }

            sipRes = sipCpp->endCDATA();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_endCDATA, doc_QXmlLexicalHandler_endCDATA);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_comment, "comment(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlLexicalHandler_comment(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_comment);
                return NULL;
            }

            sipRes = sipCpp->comment(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_comment, doc_QXmlLexicalHandler_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QXmlLexicalHandler_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QXmlLexicalHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlLexicalHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlLexicalHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlLexicalHandler, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlLexicalHandler, sipName_errorString);
                return NULL;
            }

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QXmlLexicalHandler, sipName_errorString, doc_QXmlLexicalHandler_errorString);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlLexicalHandler(void *, int);}
static void release_QXmlLexicalHandler(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlLexicalHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlLexicalHandler *>(sipCppV);
}


extern "C" {static void dealloc_QXmlLexicalHandler(sipSimpleWrapper *);}
static void dealloc_QXmlLexicalHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlLexicalHandler *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlLexicalHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlLexicalHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlLexicalHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlLexicalHandler *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQXmlLexicalHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlLexicalHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QXmlLexicalHandler, &a0))
        {
            sipCpp = new sipQXmlLexicalHandler(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QXmlLexicalHandler[] = {
    {SIP_MLNAME_CAST(sipName_comment), meth_QXmlLexicalHandler_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_comment)},
    {SIP_MLNAME_CAST(sipName_endCDATA), meth_QXmlLexicalHandler_endCDATA, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_endCDATA)},
    {SIP_MLNAME_CAST(sipName_endDTD), meth_QXmlLexicalHandler_endDTD, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_endDTD)},
    {SIP_MLNAME_CAST(sipName_endEntity), meth_QXmlLexicalHandler_endEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_endEntity)},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QXmlLexicalHandler_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_errorString)},
    {SIP_MLNAME_CAST(sipName_startCDATA), meth_QXmlLexicalHandler_startCDATA, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_startCDATA)},
    {SIP_MLNAME_CAST(sipName_startDTD), meth_QXmlLexicalHandler_startDTD, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_startDTD)},
    {SIP_MLNAME_CAST(sipName_startEntity), meth_QXmlLexicalHandler_startEntity, METH_VARARGS, SIP_MLDOC_CAST(doc_QXmlLexicalHandler_startEntity)}
};

PyDoc_STRVAR(doc_QXmlLexicalHandler, "\1QXmlLexicalHandler()\n"
"QXmlLexicalHandler(QXmlLexicalHandler)");


static pyqt5ClassPluginDef plugin_QXmlLexicalHandler = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtXml_QXmlLexicalHandler = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlLexicalHandler,
        {0},
        &plugin_QXmlLexicalHandler
    },
    {
        sipNameNr_QXmlLexicalHandler,
        {0, 0, 1},
        8, methods_QXmlLexicalHandler,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QXmlLexicalHandler,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QXmlLexicalHandler,
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
    dealloc_QXmlLexicalHandler,
    0,
    0,
    0,
    release_QXmlLexicalHandler,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
