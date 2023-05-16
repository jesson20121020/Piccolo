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

#include <qrandom.h>



PyDoc_STRVAR(doc_QRandomGenerator_generate, "generate(self) -> int");

extern "C" {static PyObject *meth_QRandomGenerator_generate(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_generate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRandomGenerator, &sipCpp))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->generate();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_generate, doc_QRandomGenerator_generate);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_generate64, "generate64(self) -> int");

extern "C" {static PyObject *meth_QRandomGenerator_generate64(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_generate64(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRandomGenerator, &sipCpp))
        {
             ::quint64 sipRes;

            sipRes = sipCpp->generate64();

            return PyLong_FromUnsignedLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_generate64, doc_QRandomGenerator_generate64);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_generateDouble, "generateDouble(self) -> float");

extern "C" {static PyObject *meth_QRandomGenerator_generateDouble(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_generateDouble(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRandomGenerator, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->generateDouble();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_generateDouble, doc_QRandomGenerator_generateDouble);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_bounded, "bounded(self, float) -> float\n"
"bounded(self, int) -> int\n"
"bounded(self, int, int) -> int");

extern "C" {static PyObject *meth_QRandomGenerator_bounded(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_bounded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BXd", &sipSelf, sipType_QRandomGenerator, &sipCpp, &a0))
        {
            double sipRes;

            sipRes = sipCpp->bounded(a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    {
         ::quint32 a0;
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QRandomGenerator, &sipCpp, &a0))
        {
             ::quint32 sipRes;

            sipRes = sipCpp->bounded(a0);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QRandomGenerator, &sipCpp, &a0, &a1))
        {
            int sipRes;

            sipRes = sipCpp->bounded(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_bounded, doc_QRandomGenerator_bounded);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_seed, "seed(self, seed: int = 1)");

extern "C" {static PyObject *meth_QRandomGenerator_seed(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_seed(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::quint32 a0 = 1;
         ::QRandomGenerator *sipCpp;

        static const char *sipKwdList[] = {
            sipName_seed,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|u", &sipSelf, sipType_QRandomGenerator, &sipCpp, &a0))
        {
            sipCpp->seed(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_seed, doc_QRandomGenerator_seed);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_discard, "discard(self, int)");

extern "C" {static PyObject *meth_QRandomGenerator_discard(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_discard(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned PY_LONG_LONG a0;
         ::QRandomGenerator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bo", &sipSelf, sipType_QRandomGenerator, &sipCpp, &a0))
        {
            sipCpp->discard(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_discard, doc_QRandomGenerator_discard);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_min, "min() -> int");

extern "C" {static PyObject *meth_QRandomGenerator_min(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_min(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator::result_type sipRes;

            sipRes =  ::QRandomGenerator::min();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_min, doc_QRandomGenerator_min);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_max, "max() -> int");

extern "C" {static PyObject *meth_QRandomGenerator_max(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_max(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator::result_type sipRes;

            sipRes =  ::QRandomGenerator::max();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_max, doc_QRandomGenerator_max);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_system, "system() -> QRandomGenerator");

extern "C" {static PyObject *meth_QRandomGenerator_system(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_system(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator*sipRes;

            sipRes =  ::QRandomGenerator::system();

            return sipConvertFromType(sipRes,sipType_QRandomGenerator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_system, doc_QRandomGenerator_system);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_global, "global() -> QRandomGenerator");

extern "C" {static PyObject *meth_QRandomGenerator_global(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_global(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator*sipRes;

            sipRes =  ::QRandomGenerator::global();

            return sipConvertFromType(sipRes,sipType_QRandomGenerator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_global, doc_QRandomGenerator_global);

    return NULL;
}


PyDoc_STRVAR(doc_QRandomGenerator_securelySeeded, "securelySeeded() -> QRandomGenerator");

extern "C" {static PyObject *meth_QRandomGenerator_securelySeeded(PyObject *, PyObject *);}
static PyObject *meth_QRandomGenerator_securelySeeded(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator*sipRes;

            sipRes = new  ::QRandomGenerator( ::QRandomGenerator::securelySeeded());

            return sipConvertFromNewType(sipRes,sipType_QRandomGenerator,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName_securelySeeded, doc_QRandomGenerator_securelySeeded);

    return NULL;
}


extern "C" {static PyObject *slot_QRandomGenerator___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRandomGenerator___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRandomGenerator *sipCpp = reinterpret_cast< ::QRandomGenerator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRandomGenerator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRandomGenerator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRandomGenerator, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, eq_slot, sipType_QRandomGenerator, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRandomGenerator___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRandomGenerator___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::QRandomGenerator *sipCpp = reinterpret_cast< ::QRandomGenerator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRandomGenerator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::QRandomGenerator* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QRandomGenerator, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore, ne_slot, sipType_QRandomGenerator, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_QRandomGenerator___call__(PyObject *,PyObject *,PyObject *);}
static PyObject *slot_QRandomGenerator___call__(PyObject *sipSelf,PyObject *sipArgs,PyObject *)
{
     ::QRandomGenerator *sipCpp = reinterpret_cast< ::QRandomGenerator *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRandomGenerator));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
             ::QRandomGenerator::result_type sipRes;

            sipRes = (*sipCpp)();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRandomGenerator, sipName___call__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRandomGenerator(void *, int);}
static void release_QRandomGenerator(void *sipCppV, int)
{
    delete reinterpret_cast< ::QRandomGenerator *>(sipCppV);
}


extern "C" {static void assign_QRandomGenerator(void *, SIP_SSIZE_T, void *);}
static void assign_QRandomGenerator(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QRandomGenerator *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QRandomGenerator *>(sipSrc);
}


extern "C" {static void *array_QRandomGenerator(SIP_SSIZE_T);}
static void *array_QRandomGenerator(SIP_SSIZE_T sipNrElem)
{
    return new  ::QRandomGenerator[sipNrElem];
}


extern "C" {static void *copy_QRandomGenerator(const void *, SIP_SSIZE_T);}
static void *copy_QRandomGenerator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QRandomGenerator(reinterpret_cast<const  ::QRandomGenerator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRandomGenerator(sipSimpleWrapper *);}
static void dealloc_QRandomGenerator(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QRandomGenerator(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QRandomGenerator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRandomGenerator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QRandomGenerator *sipCpp = 0;

    {
         ::quint32 a0 = 1;

        static const char *sipKwdList[] = {
            sipName_seed,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|u", &a0))
        {
            sipCpp = new  ::QRandomGenerator(a0);

            return sipCpp;
        }
    }

    {
        const  ::QRandomGenerator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRandomGenerator, &a0))
        {
            sipCpp = new  ::QRandomGenerator(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRandomGenerator[] = {
    {(void *)slot_QRandomGenerator___eq__, eq_slot},
    {(void *)slot_QRandomGenerator___ne__, ne_slot},
    {(void *)slot_QRandomGenerator___call__, call_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QRandomGenerator[] = {
    {SIP_MLNAME_CAST(sipName_bounded), meth_QRandomGenerator_bounded, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_bounded)},
    {SIP_MLNAME_CAST(sipName_discard), meth_QRandomGenerator_discard, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_discard)},
    {SIP_MLNAME_CAST(sipName_generate), meth_QRandomGenerator_generate, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_generate)},
    {SIP_MLNAME_CAST(sipName_generate64), meth_QRandomGenerator_generate64, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_generate64)},
    {SIP_MLNAME_CAST(sipName_generateDouble), meth_QRandomGenerator_generateDouble, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_generateDouble)},
    {SIP_MLNAME_CAST(sipName_global), meth_QRandomGenerator_global, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_global)},
    {SIP_MLNAME_CAST(sipName_max), meth_QRandomGenerator_max, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_max)},
    {SIP_MLNAME_CAST(sipName_min), meth_QRandomGenerator_min, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_min)},
    {SIP_MLNAME_CAST(sipName_securelySeeded), meth_QRandomGenerator_securelySeeded, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_securelySeeded)},
    {SIP_MLNAME_CAST(sipName_seed), (PyCFunction)meth_QRandomGenerator_seed, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRandomGenerator_seed)},
    {SIP_MLNAME_CAST(sipName_system), meth_QRandomGenerator_system, METH_VARARGS, SIP_MLDOC_CAST(doc_QRandomGenerator_system)}
};

PyDoc_STRVAR(doc_QRandomGenerator, "\1QRandomGenerator(seed: int = 1)\n"
"QRandomGenerator(QRandomGenerator)");


static pyqt5ClassPluginDef plugin_QRandomGenerator = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtCore_QRandomGenerator = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QRandomGenerator,
        {0},
        &plugin_QRandomGenerator
    },
    {
        sipNameNr_QRandomGenerator,
        {0, 0, 1},
        11, methods_QRandomGenerator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRandomGenerator,
    -1,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRandomGenerator,
    init_type_QRandomGenerator,
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
    dealloc_QRandomGenerator,
    assign_QRandomGenerator,
    array_QRandomGenerator,
    copy_QRandomGenerator,
    release_QRandomGenerator,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};
