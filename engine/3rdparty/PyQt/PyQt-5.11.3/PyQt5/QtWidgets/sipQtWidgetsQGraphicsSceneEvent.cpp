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

#include <qgraphicssceneevent.h>

#include <qwidget.h>
#include <qcoreevent.h>


PyDoc_STRVAR(doc_QGraphicsSceneEvent_widget, "widget(self) -> QWidget");

extern "C" {static PyObject *meth_QGraphicsSceneEvent_widget(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneEvent_widget(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGraphicsSceneEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneEvent, &sipCpp))
        {
             ::QWidget*sipRes;

            sipRes = sipCpp->widget();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneEvent, sipName_widget, doc_QGraphicsSceneEvent_widget);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QGraphicsSceneEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QGraphicsSceneEvent *sipCpp = reinterpret_cast< ::QGraphicsSceneEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneEvent(void *, int);}
static void release_QGraphicsSceneEvent(void *sipCppV, int)
{
    delete reinterpret_cast< ::QGraphicsSceneEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsSceneEvent(sipGetAddress(sipSelf), 0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneEvent[] = {{12, 0, 1}};


static PyMethodDef methods_QGraphicsSceneEvent[] = {
    {SIP_MLNAME_CAST(sipName_widget), meth_QGraphicsSceneEvent_widget, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneEvent_widget)}
};


static pyqt5ClassPluginDef plugin_QGraphicsSceneEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneEvent,
        {0},
        &plugin_QGraphicsSceneEvent
    },
    {
        sipNameNr_QGraphicsSceneEvent,
        {0, 0, 1},
        1, methods_QGraphicsSceneEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneEvent,
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
    dealloc_QGraphicsSceneEvent,
    0,
    0,
    0,
    release_QGraphicsSceneEvent,
    cast_QGraphicsSceneEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
