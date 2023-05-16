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

#include "sipAPIQtGui.h"

#include <qinputmethod.h>

#include <qrect.h>
#include <qnamespace.h>
#include <qnamespace.h>
#include <qvariant.h>
#include <qlocale.h>
#include <qtransform.h>
#include <qmetaobject.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qcoreevent.h>
#include <qobject.h>
#include <qstring.h>
#include <qlist.h>
#include <qbytearray.h>
#include <qlist.h>
#include <qthread.h>
#include <qnamespace.h>
#include <qregexp.h>
#include <qregularexpression.h>
#include <qobjectdefs.h>


PyDoc_STRVAR(doc_QInputMethod_inputItemTransform, "inputItemTransform(self) -> QTransform");

extern "C" {static PyObject *meth_QInputMethod_inputItemTransform(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_inputItemTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QTransform*sipRes;

            sipRes = new  ::QTransform(sipCpp->inputItemTransform());

            return sipConvertFromNewType(sipRes,sipType_QTransform,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_inputItemTransform, doc_QInputMethod_inputItemTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_setInputItemTransform, "setInputItemTransform(self, QTransform)");

extern "C" {static PyObject *meth_QInputMethod_setInputItemTransform(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_setInputItemTransform(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QTransform* a0;
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QInputMethod, &sipCpp, sipType_QTransform, &a0))
        {
            sipCpp->setInputItemTransform(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_setInputItemTransform, doc_QInputMethod_setInputItemTransform);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_cursorRectangle, "cursorRectangle(self) -> QRectF");

extern "C" {static PyObject *meth_QInputMethod_cursorRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_cursorRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->cursorRectangle());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_cursorRectangle, doc_QInputMethod_cursorRectangle);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_keyboardRectangle, "keyboardRectangle(self) -> QRectF");

extern "C" {static PyObject *meth_QInputMethod_keyboardRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_keyboardRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->keyboardRectangle());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_keyboardRectangle, doc_QInputMethod_keyboardRectangle);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_isVisible, "isVisible(self) -> bool");

extern "C" {static PyObject *meth_QInputMethod_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_isVisible, doc_QInputMethod_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_setVisible, "setVisible(self, bool)");

extern "C" {static PyObject *meth_QInputMethod_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QInputMethod, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_setVisible, doc_QInputMethod_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_isAnimating, "isAnimating(self) -> bool");

extern "C" {static PyObject *meth_QInputMethod_isAnimating(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_isAnimating(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAnimating();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_isAnimating, doc_QInputMethod_isAnimating);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_locale, "locale(self) -> QLocale");

extern "C" {static PyObject *meth_QInputMethod_locale(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_locale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QLocale*sipRes;

            sipRes = new  ::QLocale(sipCpp->locale());

            return sipConvertFromNewType(sipRes,sipType_QLocale,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_locale, doc_QInputMethod_locale);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_inputDirection, "inputDirection(self) -> Qt.LayoutDirection");

extern "C" {static PyObject *meth_QInputMethod_inputDirection(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_inputDirection(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::Qt::LayoutDirection sipRes;

            sipRes = sipCpp->inputDirection();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_Qt_LayoutDirection);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_inputDirection, doc_QInputMethod_inputDirection);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_inputItemRectangle, "inputItemRectangle(self) -> QRectF");

extern "C" {static PyObject *meth_QInputMethod_inputItemRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_inputItemRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->inputItemRectangle());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_inputItemRectangle, doc_QInputMethod_inputItemRectangle);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_setInputItemRectangle, "setInputItemRectangle(self, QRectF)");

extern "C" {static PyObject *meth_QInputMethod_setInputItemRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_setInputItemRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QRectF* a0;
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QInputMethod, &sipCpp, sipType_QRectF, &a0))
        {
            sipCpp->setInputItemRectangle(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_setInputItemRectangle, doc_QInputMethod_setInputItemRectangle);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_queryFocusObject, "queryFocusObject(Qt.InputMethodQuery, Any) -> Any");

extern "C" {static PyObject *meth_QInputMethod_queryFocusObject(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_queryFocusObject(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::InputMethodQuery a0;
         ::QVariant* a1;
        int a1State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "EJ1", sipType_Qt_InputMethodQuery, &a0, sipType_QVariant, &a1, &a1State))
        {
             ::QVariant*sipRes;

            sipRes = new  ::QVariant( ::QInputMethod::queryFocusObject(a0,*a1));
            sipReleaseType(a1,sipType_QVariant,a1State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_queryFocusObject, doc_QInputMethod_queryFocusObject);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_show, "show(self)");

extern "C" {static PyObject *meth_QInputMethod_show(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_show(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            sipCpp->show();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_show, doc_QInputMethod_show);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_hide, "hide(self)");

extern "C" {static PyObject *meth_QInputMethod_hide(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_hide(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            sipCpp->hide();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_hide, doc_QInputMethod_hide);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_update, "update(self, Union[Qt.InputMethodQueries, Qt.InputMethodQuery])");

extern "C" {static PyObject *meth_QInputMethod_update(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_update(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::Qt::InputMethodQueries* a0;
        int a0State = 0;
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QInputMethod, &sipCpp, sipType_Qt_InputMethodQueries, &a0, &a0State))
        {
            sipCpp->update(*a0);
            sipReleaseType(a0,sipType_Qt_InputMethodQueries,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_update, doc_QInputMethod_update);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_reset, "reset(self)");

extern "C" {static PyObject *meth_QInputMethod_reset(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_reset, doc_QInputMethod_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_commit, "commit(self)");

extern "C" {static PyObject *meth_QInputMethod_commit(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_commit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
            sipCpp->commit();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_commit, doc_QInputMethod_commit);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_invokeAction, "invokeAction(self, QInputMethod.Action, int)");

extern "C" {static PyObject *meth_QInputMethod_invokeAction(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_invokeAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QInputMethod::Action a0;
        int a1;
         ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BEi", &sipSelf, sipType_QInputMethod, &sipCpp, sipType_QInputMethod_Action, &a0, &a1))
        {
            sipCpp->invokeAction(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_invokeAction, doc_QInputMethod_invokeAction);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_anchorRectangle, "anchorRectangle(self) -> QRectF");

extern "C" {static PyObject *meth_QInputMethod_anchorRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_anchorRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->anchorRectangle());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_anchorRectangle, doc_QInputMethod_anchorRectangle);

    return NULL;
}


PyDoc_STRVAR(doc_QInputMethod_inputItemClipRectangle, "inputItemClipRectangle(self) -> QRectF");

extern "C" {static PyObject *meth_QInputMethod_inputItemClipRectangle(PyObject *, PyObject *);}
static PyObject *meth_QInputMethod_inputItemClipRectangle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QInputMethod *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QInputMethod, &sipCpp))
        {
             ::QRectF*sipRes;

            sipRes = new  ::QRectF(sipCpp->inputItemClipRectangle());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QInputMethod, sipName_inputItemClipRectangle, doc_QInputMethod_inputItemClipRectangle);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QInputMethod(void *, const sipTypeDef *);}
static void *cast_QInputMethod(void *sipCppV, const sipTypeDef *targetType)
{
     ::QInputMethod *sipCpp = reinterpret_cast< ::QInputMethod *>(sipCppV);

    if (targetType == sipType_QObject)
        return static_cast< ::QObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QInputMethod(void *, int);}
static void release_QInputMethod(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QInputMethod[] = {{25, 0, 1}};


static PyMethodDef methods_QInputMethod[] = {
    {SIP_MLNAME_CAST(sipName_anchorRectangle), meth_QInputMethod_anchorRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_anchorRectangle)},
    {SIP_MLNAME_CAST(sipName_commit), meth_QInputMethod_commit, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_commit)},
    {SIP_MLNAME_CAST(sipName_cursorRectangle), meth_QInputMethod_cursorRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_cursorRectangle)},
    {SIP_MLNAME_CAST(sipName_hide), meth_QInputMethod_hide, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_hide)},
    {SIP_MLNAME_CAST(sipName_inputDirection), meth_QInputMethod_inputDirection, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_inputDirection)},
    {SIP_MLNAME_CAST(sipName_inputItemClipRectangle), meth_QInputMethod_inputItemClipRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_inputItemClipRectangle)},
    {SIP_MLNAME_CAST(sipName_inputItemRectangle), meth_QInputMethod_inputItemRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_inputItemRectangle)},
    {SIP_MLNAME_CAST(sipName_inputItemTransform), meth_QInputMethod_inputItemTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_inputItemTransform)},
    {SIP_MLNAME_CAST(sipName_invokeAction), meth_QInputMethod_invokeAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_invokeAction)},
    {SIP_MLNAME_CAST(sipName_isAnimating), meth_QInputMethod_isAnimating, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_isAnimating)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QInputMethod_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_isVisible)},
    {SIP_MLNAME_CAST(sipName_keyboardRectangle), meth_QInputMethod_keyboardRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_keyboardRectangle)},
    {SIP_MLNAME_CAST(sipName_locale), meth_QInputMethod_locale, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_locale)},
    {SIP_MLNAME_CAST(sipName_queryFocusObject), meth_QInputMethod_queryFocusObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_queryFocusObject)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QInputMethod_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_reset)},
    {SIP_MLNAME_CAST(sipName_setInputItemRectangle), meth_QInputMethod_setInputItemRectangle, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_setInputItemRectangle)},
    {SIP_MLNAME_CAST(sipName_setInputItemTransform), meth_QInputMethod_setInputItemTransform, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_setInputItemTransform)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QInputMethod_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_setVisible)},
    {SIP_MLNAME_CAST(sipName_show), meth_QInputMethod_show, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_show)},
    {SIP_MLNAME_CAST(sipName_update), meth_QInputMethod_update, METH_VARARGS, SIP_MLDOC_CAST(doc_QInputMethod_update)}
};

static sipEnumMemberDef enummembers_QInputMethod[] = {
    {sipName_Click, static_cast<int>( ::QInputMethod::Click), 78},
    {sipName_ContextMenu, static_cast<int>( ::QInputMethod::ContextMenu), 78},
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QInputMethod[] = {
    {"inputItemClipRectangleChanged()", "\1inputItemClipRectangleChanged(self)", 0, 0},
    {"anchorRectangleChanged()", "\1anchorRectangleChanged(self)", 0, 0},
    {"inputDirectionChanged(LayoutDirection)", "\1inputDirectionChanged(self, Qt.LayoutDirection)", 0, 0},
    {"localeChanged()", "\1localeChanged(self)", 0, 0},
    {"animatingChanged()", "\1animatingChanged(self)", 0, 0},
    {"visibleChanged()", "\1visibleChanged(self)", 0, 0},
    {"keyboardRectangleChanged()", "\1keyboardRectangleChanged(self)", 0, 0},
    {"cursorRectangleChanged()", "\1cursorRectangleChanged(self)", 0, 0},
    {0, 0, 0, 0}
};


static pyqt5ClassPluginDef plugin_QInputMethod = {
    & ::QInputMethod::staticMetaObject,
    0,
    signals_QInputMethod,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QInputMethod = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QInputMethod,
        {0},
        &plugin_QInputMethod
    },
    {
        sipNameNr_QInputMethod,
        {0, 0, 1},
        20, methods_QInputMethod,
        2, enummembers_QInputMethod,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QInputMethod,
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
    0,
    0,
    0,
    0,
    release_QInputMethod,
    cast_QInputMethod,
    0,
    0,
    0,
    0,
    0,
    0
};
