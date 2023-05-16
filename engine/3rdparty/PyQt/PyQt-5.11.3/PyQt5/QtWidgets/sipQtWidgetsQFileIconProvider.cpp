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

#include "sipAPIQtWidgets.h"

#include <qfileiconprovider.h>

#include <qfileiconprovider.h>
#include <qstring.h>
#include <qfileinfo.h>
#include <qicon.h>


class sipQFileIconProvider : public  ::QFileIconProvider
{
public:
    sipQFileIconProvider();
    virtual ~sipQFileIconProvider();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString type(const  ::QFileInfo&) const;
     ::QIcon icon(const  ::QFileInfo&) const;
     ::QIcon icon( ::QFileIconProvider::IconType) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQFileIconProvider(const sipQFileIconProvider &);
    sipQFileIconProvider &operator = (const sipQFileIconProvider &);

    char sipPyMethods[3];
};

sipQFileIconProvider::sipQFileIconProvider():  ::QFileIconProvider(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQFileIconProvider::~sipQFileIconProvider()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQFileIconProvider::type(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_type);

    if (!sipMeth)
        return  ::QFileIconProvider::type(a0);

    extern  ::QString sipVH_QtWidgets_134(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtWidgets_134(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon(const  ::QFileInfo& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_icon);

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtWidgets_133(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QFileInfo&);

    return sipVH_QtWidgets_133(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QIcon sipQFileIconProvider::icon( ::QFileIconProvider::IconType a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_icon);

    if (!sipMeth)
        return  ::QFileIconProvider::icon(a0);

    extern  ::QIcon sipVH_QtWidgets_132(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QFileIconProvider::IconType);

    return sipVH_QtWidgets_132(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QFileIconProvider_icon, "icon(self, QFileIconProvider.IconType) -> QIcon\n"
"icon(self, QFileInfo) -> QIcon");

extern "C" {static PyObject *meth_QFileIconProvider_icon(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_icon(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QFileIconProvider::IconType a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileIconProvider_IconType, &a0))
        {
             ::QIcon*sipRes;

            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(a0) : sipCpp->icon(a0)));

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QIcon*sipRes;

            sipRes = new  ::QIcon((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::icon(*a0) : sipCpp->icon(*a0)));

            return sipConvertFromNewType(sipRes,sipType_QIcon,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_icon, doc_QFileIconProvider_icon);

    return NULL;
}


PyDoc_STRVAR(doc_QFileIconProvider_type, "type(self, QFileInfo) -> str");

extern "C" {static PyObject *meth_QFileIconProvider_type(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileInfo* a0;
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileInfo, &a0))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QFileIconProvider::type(*a0) : sipCpp->type(*a0)));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_type, doc_QFileIconProvider_type);

    return NULL;
}


PyDoc_STRVAR(doc_QFileIconProvider_setOptions, "setOptions(self, Union[QFileIconProvider.Options, QFileIconProvider.Option])");

extern "C" {static PyObject *meth_QFileIconProvider_setOptions(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_setOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileIconProvider::Options* a0;
        int a0State = 0;
         ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileIconProvider, &sipCpp, sipType_QFileIconProvider_Options, &a0, &a0State))
        {
            sipCpp->setOptions(*a0);
            sipReleaseType(a0,sipType_QFileIconProvider_Options,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_setOptions, doc_QFileIconProvider_setOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QFileIconProvider_options, "options(self) -> QFileIconProvider.Options");

extern "C" {static PyObject *meth_QFileIconProvider_options(PyObject *, PyObject *);}
static PyObject *meth_QFileIconProvider_options(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFileIconProvider *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileIconProvider, &sipCpp))
        {
             ::QFileIconProvider::Options*sipRes;

            sipRes = new  ::QFileIconProvider::Options(sipCpp->options());

            return sipConvertFromNewType(sipRes,sipType_QFileIconProvider_Options,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileIconProvider, sipName_options, doc_QFileIconProvider_options);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileIconProvider(void *, int);}
static void release_QFileIconProvider(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQFileIconProvider *>(sipCppV);
    else
        delete reinterpret_cast< ::QFileIconProvider *>(sipCppV);
}


extern "C" {static void dealloc_QFileIconProvider(sipSimpleWrapper *);}
static void dealloc_QFileIconProvider(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQFileIconProvider *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileIconProvider(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QFileIconProvider(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFileIconProvider(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQFileIconProvider *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQFileIconProvider();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QFileIconProvider[] = {
    {SIP_MLNAME_CAST(sipName_icon), meth_QFileIconProvider_icon, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_icon)},
    {SIP_MLNAME_CAST(sipName_options), meth_QFileIconProvider_options, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_options)},
    {SIP_MLNAME_CAST(sipName_setOptions), meth_QFileIconProvider_setOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_setOptions)},
    {SIP_MLNAME_CAST(sipName_type), meth_QFileIconProvider_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileIconProvider_type)}
};

static sipEnumMemberDef enummembers_QFileIconProvider[] = {
    {sipName_Computer, static_cast<int>( ::QFileIconProvider::Computer), 82},
    {sipName_Desktop, static_cast<int>( ::QFileIconProvider::Desktop), 82},
    {sipName_DontUseCustomDirectoryIcons, static_cast<int>( ::QFileIconProvider::DontUseCustomDirectoryIcons), 83},
    {sipName_Drive, static_cast<int>( ::QFileIconProvider::Drive), 82},
    {sipName_File, static_cast<int>( ::QFileIconProvider::File), 82},
    {sipName_Folder, static_cast<int>( ::QFileIconProvider::Folder), 82},
    {sipName_Network, static_cast<int>( ::QFileIconProvider::Network), 82},
    {sipName_Trashcan, static_cast<int>( ::QFileIconProvider::Trashcan), 82},
};

PyDoc_STRVAR(doc_QFileIconProvider, "\1QFileIconProvider()");


static pyqt5ClassPluginDef plugin_QFileIconProvider = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QFileIconProvider = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFileIconProvider,
        {0},
        &plugin_QFileIconProvider
    },
    {
        sipNameNr_QFileIconProvider,
        {0, 0, 1},
        4, methods_QFileIconProvider,
        8, enummembers_QFileIconProvider,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFileIconProvider,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QFileIconProvider,
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
    dealloc_QFileIconProvider,
    0,
    0,
    0,
    release_QFileIconProvider,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
