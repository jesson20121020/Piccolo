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

#include <qrunnable.h>



class sipQRunnable : public  ::QRunnable
{
public:
    sipQRunnable();
    sipQRunnable(const  ::QRunnable&);
    virtual ~sipQRunnable();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void run();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQRunnable(const sipQRunnable &);
    sipQRunnable &operator = (const sipQRunnable &);

    char sipPyMethods[1];
};

sipQRunnable::sipQRunnable():  ::QRunnable(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRunnable::sipQRunnable(const  ::QRunnable& a0):  ::QRunnable(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQRunnable::~sipQRunnable()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQRunnable::run()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QRunnable,sipName_run);

    if (!sipMeth)
        return;

    extern void sipVH_QtCore_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtCore_17(sipGILState, sipVEH_QtCore_PyQt5, sipPySelf, sipMeth);

    sipEndThread();
}


PyDoc_STRVAR(doc_QRunnable_run, "run(self)");

extern "C" {static PyObject *meth_QRunnable_run(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_run(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRunnable, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QRunnable, sipName_run);
                return NULL;
            }

            sipCpp->run();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_run, doc_QRunnable_run);

    return NULL;
}


PyDoc_STRVAR(doc_QRunnable_autoDelete, "autoDelete(self) -> bool");

extern "C" {static PyObject *meth_QRunnable_autoDelete(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_autoDelete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRunnable, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->autoDelete();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_autoDelete, doc_QRunnable_autoDelete);

    return NULL;
}


PyDoc_STRVAR(doc_QRunnable_setAutoDelete, "setAutoDelete(self, bool)");

extern "C" {static PyObject *meth_QRunnable_setAutoDelete(PyObject *, PyObject *);}
static PyObject *meth_QRunnable_setAutoDelete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QRunnable *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QRunnable, &sipCpp, &a0))
        {
            sipCpp->setAutoDelete(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRunnable, sipName_setAutoDelete, doc_QRunnable_setAutoDelete);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRunnable(void *, int);}
static void release_QRunnable(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQRunnable *>(sipCppV);
    else
        delete reinterpret_cast< ::QRunnable *>(sipCppV);
}


extern "C" {static void dealloc_QRunnable(sipSimpleWrapper *);}
static void dealloc_QRunnable(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQRunnable *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRunnable(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QRunnable(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRunnable(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQRunnable *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQRunnable();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QRunnable* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRunnable, &a0))
        {
            sipCpp = new sipQRunnable(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QRunnable[] = {
    {SIP_MLNAME_CAST(sipName_autoDelete), meth_QRunnable_autoDelete, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_autoDelete)},
    {SIP_MLNAME_CAST(sipName_run), meth_QRunnable_run, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_run)},
    {SIP_MLNAME_CAST(sipName_setAutoDelete), meth_QRunnable_setAutoDelete, METH_VARARGS, SIP_MLDOC_CAST(doc_QRunnable_setAutoDelete)}
};

PyDoc_STRVAR(doc_QRunnable, "\1QRunnable()\n"
"QRunnable(QRunnable)");


static pyqt5ClassPluginDef plugin_QRunnable = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QRunnable = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRunnable,
        {0},
        &plugin_QRunnable
    },
    {
        sipNameNr_QRunnable,
        {0, 0, 1},
        3, methods_QRunnable,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRunnable,
    -1,
    -1,
    0,
    0,
    init_type_QRunnable,
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
    dealloc_QRunnable,
    0,
    0,
    0,
    release_QRunnable,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};