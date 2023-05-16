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

#include <qfiledevice.h>

#include <qdatetime.h>
#include <qfiledevice.h>
#include <qstring.h>
#include <qiodevice.h>
#include <qbytearray.h>
#include <qmetaobject.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qobject.h>
#include <qvariant.h>
#include <qlist.h>
#include <qlist.h>
#include <qnamespace.h>
#include <qthread.h>
#include <qnamespace.h>
#include <qregexp.h>
#include <qregularexpression.h>
#include <qobjectdefs.h>


PyDoc_STRVAR(doc_QFileDevice_error, "error(self) -> QFileDevice.FileError");

extern "C" {static PyObject *meth_QFileDevice_error(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_error(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
             ::QFileDevice::FileError sipRes;

            sipRes = sipCpp->error();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QFileDevice_FileError);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_error, doc_QFileDevice_error);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_unsetError, "unsetError(self)");

extern "C" {static PyObject *meth_QFileDevice_unsetError(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_unsetError(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            sipCpp->unsetError();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_unsetError, doc_QFileDevice_unsetError);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_close, "close(self)");

extern "C" {static PyObject *meth_QFileDevice_close(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_close(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            Py_BEGIN_ALLOW_THREADS
            (sipSelfWasArg ? sipCpp-> ::QFileDevice::close() : sipCpp->close());
            Py_END_ALLOW_THREADS

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_close, doc_QFileDevice_close);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_isSequential, "isSequential(self) -> bool");

extern "C" {static PyObject *meth_QFileDevice_isSequential(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_isSequential(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::isSequential() : sipCpp->isSequential());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_isSequential, doc_QFileDevice_isSequential);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_handle, "handle(self) -> int");

extern "C" {static PyObject *meth_QFileDevice_handle(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->handle();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_handle, doc_QFileDevice_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_fileName, "fileName(self) -> str");

extern "C" {static PyObject *meth_QFileDevice_fileName(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QFileDevice::fileName() : sipCpp->fileName()));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_fileName, doc_QFileDevice_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_pos, "pos(self) -> int");

extern "C" {static PyObject *meth_QFileDevice_pos(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::pos() : sipCpp->pos());

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_pos, doc_QFileDevice_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_seek, "seek(self, int) -> bool");

extern "C" {static PyObject *meth_QFileDevice_seek(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_seek(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::qint64 a0;
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::seek(a0) : sipCpp->seek(a0));
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_seek, doc_QFileDevice_seek);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_atEnd, "atEnd(self) -> bool");

extern "C" {static PyObject *meth_QFileDevice_atEnd(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_atEnd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::atEnd() : sipCpp->atEnd());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_atEnd, doc_QFileDevice_atEnd);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_flush, "flush(self) -> bool");

extern "C" {static PyObject *meth_QFileDevice_flush(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_flush(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
            bool sipRes;

            Py_BEGIN_ALLOW_THREADS
            sipRes = sipCpp->flush();
            Py_END_ALLOW_THREADS

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_flush, doc_QFileDevice_flush);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_size, "size(self) -> int");

extern "C" {static PyObject *meth_QFileDevice_size(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
             ::qint64 sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::size() : sipCpp->size());

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_size, doc_QFileDevice_size);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_resize, "resize(self, int) -> bool");

extern "C" {static PyObject *meth_QFileDevice_resize(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_resize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::qint64 a0;
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::resize(a0) : sipCpp->resize(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_resize, doc_QFileDevice_resize);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_permissions, "permissions(self) -> QFileDevice.Permissions");

extern "C" {static PyObject *meth_QFileDevice_permissions(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_permissions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QFileDevice, &sipCpp))
        {
             ::QFileDevice::Permissions*sipRes;

            sipRes = new  ::QFileDevice::Permissions((sipSelfWasArg ? sipCpp-> ::QFileDevice::permissions() : sipCpp->permissions()));

            return sipConvertFromNewType(sipRes,sipType_QFileDevice_Permissions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_permissions, doc_QFileDevice_permissions);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_setPermissions, "setPermissions(self, Union[QFileDevice.Permissions, QFileDevice.Permission]) -> bool");

extern "C" {static PyObject *meth_QFileDevice_setPermissions(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_setPermissions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QFileDevice::Permissions* a0;
        int a0State = 0;
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QFileDevice, &sipCpp, sipType_QFileDevice_Permissions, &a0, &a0State))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QFileDevice::setPermissions(*a0) : sipCpp->setPermissions(*a0));
            sipReleaseType(a0,sipType_QFileDevice_Permissions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_setPermissions, doc_QFileDevice_setPermissions);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_map, "map(self, int, int, flags: QFileDevice.MemoryMapFlags = QFileDevice.NoOptions) -> sip.voidptr");

extern "C" {static PyObject *meth_QFileDevice_map(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_map(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::qint64 a0;
         ::qint64 a1;
         ::QFileDevice::MemoryMapFlags a2 = QFileDevice::NoOptions;
         ::QFileDevice *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_flags,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bnn|E", &sipSelf, sipType_QFileDevice, &sipCpp, &a0, &a1, sipType_QFileDevice_MemoryMapFlags, &a2))
        {
            void*sipRes;

            sipRes = sipCpp->map(a0,a1,a2);

            return sipConvertFromVoidPtrAndSize(sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_map, doc_QFileDevice_map);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_unmap, "unmap(self, sip.voidptr) -> bool");

extern "C" {static PyObject *meth_QFileDevice_unmap(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        void* a0;
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bv", &sipSelf, sipType_QFileDevice, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->unmap(reinterpret_cast< ::uchar *>(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_unmap, doc_QFileDevice_unmap);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_fileTime, "fileTime(self, QFileDevice.FileTime) -> QDateTime");

extern "C" {static PyObject *meth_QFileDevice_fileTime(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_fileTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QFileDevice::FileTime a0;
        const  ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QFileDevice, &sipCpp, sipType_QFileDevice_FileTime, &a0))
        {
             ::QDateTime*sipRes;

            sipRes = new  ::QDateTime(sipCpp->fileTime(a0));

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_fileTime, doc_QFileDevice_fileTime);

    return NULL;
}


PyDoc_STRVAR(doc_QFileDevice_setFileTime, "setFileTime(self, Union[QDateTime, datetime.datetime], QFileDevice.FileTime) -> bool");

extern "C" {static PyObject *meth_QFileDevice_setFileTime(PyObject *, PyObject *);}
static PyObject *meth_QFileDevice_setFileTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QDateTime* a0;
        int a0State = 0;
         ::QFileDevice::FileTime a1;
         ::QFileDevice *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1E", &sipSelf, sipType_QFileDevice, &sipCpp, sipType_QDateTime, &a0, &a0State, sipType_QFileDevice_FileTime, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->setFileTime(*a0,a1);
            sipReleaseType(const_cast< ::QDateTime *>(a0),sipType_QDateTime,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QFileDevice, sipName_setFileTime, doc_QFileDevice_setFileTime);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QFileDevice(void *, const sipTypeDef *);}
static void *cast_QFileDevice(void *sipCppV, const sipTypeDef *targetType)
{
     ::QFileDevice *sipCpp = reinterpret_cast< ::QFileDevice *>(sipCppV);

    if (targetType == sipType_QIODevice)
        return static_cast< ::QIODevice *>(sipCpp);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFileDevice(void *, int);}
static void release_QFileDevice(void *sipCppV, int)
{
     ::QFileDevice *sipCpp = reinterpret_cast< ::QFileDevice *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QFileDevice(sipSimpleWrapper *);}
static void dealloc_QFileDevice(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QFileDevice(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QFileDevice[] = {{85, 255, 1}};


static PyMethodDef methods_QFileDevice[] = {
    {SIP_MLNAME_CAST(sipName_atEnd), meth_QFileDevice_atEnd, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_atEnd)},
    {SIP_MLNAME_CAST(sipName_close), meth_QFileDevice_close, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_close)},
    {SIP_MLNAME_CAST(sipName_error), meth_QFileDevice_error, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_error)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QFileDevice_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_fileName)},
    {SIP_MLNAME_CAST(sipName_fileTime), meth_QFileDevice_fileTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_fileTime)},
    {SIP_MLNAME_CAST(sipName_flush), meth_QFileDevice_flush, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_flush)},
    {SIP_MLNAME_CAST(sipName_handle), meth_QFileDevice_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_handle)},
    {SIP_MLNAME_CAST(sipName_isSequential), meth_QFileDevice_isSequential, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_isSequential)},
    {SIP_MLNAME_CAST(sipName_map), (PyCFunction)meth_QFileDevice_map, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QFileDevice_map)},
    {SIP_MLNAME_CAST(sipName_permissions), meth_QFileDevice_permissions, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_permissions)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QFileDevice_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_pos)},
    {SIP_MLNAME_CAST(sipName_resize), meth_QFileDevice_resize, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_resize)},
    {SIP_MLNAME_CAST(sipName_seek), meth_QFileDevice_seek, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_seek)},
    {SIP_MLNAME_CAST(sipName_setFileTime), meth_QFileDevice_setFileTime, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_setFileTime)},
    {SIP_MLNAME_CAST(sipName_setPermissions), meth_QFileDevice_setPermissions, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_setPermissions)},
    {SIP_MLNAME_CAST(sipName_size), meth_QFileDevice_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_size)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QFileDevice_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_unmap)},
    {SIP_MLNAME_CAST(sipName_unsetError), meth_QFileDevice_unsetError, METH_VARARGS, SIP_MLDOC_CAST(doc_QFileDevice_unsetError)}
};

static sipEnumMemberDef enummembers_QFileDevice[] = {
    {sipName_AbortError, static_cast<int>( ::QFileDevice::AbortError), 68},
    {sipName_AutoCloseHandle, static_cast<int>( ::QFileDevice::AutoCloseHandle), 69},
    {sipName_CopyError, static_cast<int>( ::QFileDevice::CopyError), 68},
    {sipName_DontCloseHandle, static_cast<int>( ::QFileDevice::DontCloseHandle), 69},
    {sipName_ExeGroup, static_cast<int>( ::QFileDevice::ExeGroup), 73},
    {sipName_ExeOther, static_cast<int>( ::QFileDevice::ExeOther), 73},
    {sipName_ExeOwner, static_cast<int>( ::QFileDevice::ExeOwner), 73},
    {sipName_ExeUser, static_cast<int>( ::QFileDevice::ExeUser), 73},
    {sipName_FatalError, static_cast<int>( ::QFileDevice::FatalError), 68},
    {sipName_FileAccessTime, static_cast<int>( ::QFileDevice::FileAccessTime), 71},
    {sipName_FileBirthTime, static_cast<int>( ::QFileDevice::FileBirthTime), 71},
    {sipName_FileMetadataChangeTime, static_cast<int>( ::QFileDevice::FileMetadataChangeTime), 71},
    {sipName_FileModificationTime, static_cast<int>( ::QFileDevice::FileModificationTime), 71},
    {sipName_MapPrivateOption, static_cast<int>( ::QFileDevice::MapPrivateOption), 72},
    {sipName_NoError, static_cast<int>( ::QFileDevice::NoError), 68},
    {sipName_NoOptions, static_cast<int>( ::QFileDevice::NoOptions), 72},
    {sipName_OpenError, static_cast<int>( ::QFileDevice::OpenError), 68},
    {sipName_PermissionsError, static_cast<int>( ::QFileDevice::PermissionsError), 68},
    {sipName_PositionError, static_cast<int>( ::QFileDevice::PositionError), 68},
    {sipName_ReadError, static_cast<int>( ::QFileDevice::ReadError), 68},
    {sipName_ReadGroup, static_cast<int>( ::QFileDevice::ReadGroup), 73},
    {sipName_ReadOther, static_cast<int>( ::QFileDevice::ReadOther), 73},
    {sipName_ReadOwner, static_cast<int>( ::QFileDevice::ReadOwner), 73},
    {sipName_ReadUser, static_cast<int>( ::QFileDevice::ReadUser), 73},
    {sipName_RemoveError, static_cast<int>( ::QFileDevice::RemoveError), 68},
    {sipName_RenameError, static_cast<int>( ::QFileDevice::RenameError), 68},
    {sipName_ResizeError, static_cast<int>( ::QFileDevice::ResizeError), 68},
    {sipName_ResourceError, static_cast<int>( ::QFileDevice::ResourceError), 68},
    {sipName_TimeOutError, static_cast<int>( ::QFileDevice::TimeOutError), 68},
    {sipName_UnspecifiedError, static_cast<int>( ::QFileDevice::UnspecifiedError), 68},
    {sipName_WriteError, static_cast<int>( ::QFileDevice::WriteError), 68},
    {sipName_WriteGroup, static_cast<int>( ::QFileDevice::WriteGroup), 73},
    {sipName_WriteOther, static_cast<int>( ::QFileDevice::WriteOther), 73},
    {sipName_WriteOwner, static_cast<int>( ::QFileDevice::WriteOwner), 73},
    {sipName_WriteUser, static_cast<int>( ::QFileDevice::WriteUser), 73},
};


static pyqt5ClassPluginDef plugin_QFileDevice = {
    & ::QFileDevice::staticMetaObject,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QFileDevice = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QFileDevice,
        {0},
        &plugin_QFileDevice
    },
    {
        sipNameNr_QFileDevice,
        {0, 0, 1},
        18, methods_QFileDevice,
        35, enummembers_QFileDevice,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QFileDevice,
    0,
    0,
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
    dealloc_QFileDevice,
    0,
    0,
    0,
    release_QFileDevice,
    cast_QFileDevice,
    0,
    0,
    0,
    0,
    0,
    0
};
