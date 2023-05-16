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

#include <qevent.h>

#include <qpoint.h>
#include <qnamespace.h>
#include <qmimedata.h>
#include <qnamespace.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qobject.h>
#include <qnamespace.h>
#include <qpoint.h>
#include <qcoreevent.h>


class sipQDragEnterEvent : public  ::QDragEnterEvent
{
public:
    sipQDragEnterEvent(const  ::QPoint&, ::Qt::DropActions,const  ::QMimeData*, ::Qt::MouseButtons, ::Qt::KeyboardModifiers);
    sipQDragEnterEvent(const  ::QDragEnterEvent&);
    ~sipQDragEnterEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDragEnterEvent(const sipQDragEnterEvent &);
    sipQDragEnterEvent &operator = (const sipQDragEnterEvent &);
};

sipQDragEnterEvent::sipQDragEnterEvent(const  ::QPoint& a0, ::Qt::DropActions a1,const  ::QMimeData*a2, ::Qt::MouseButtons a3, ::Qt::KeyboardModifiers a4):  ::QDragEnterEvent(a0,a1,a2,a3,a4), sipPySelf(0)
{
}

sipQDragEnterEvent::sipQDragEnterEvent(const  ::QDragEnterEvent& a0):  ::QDragEnterEvent(a0), sipPySelf(0)
{
}

sipQDragEnterEvent::~sipQDragEnterEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QDragEnterEvent(void *, const sipTypeDef *);}
static void *cast_QDragEnterEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QDragEnterEvent *sipCpp = reinterpret_cast< ::QDragEnterEvent *>(sipCppV);

    if (targetType == sipType_QDragMoveEvent)
        return static_cast< ::QDragMoveEvent *>(sipCpp);

    if (targetType == sipType_QDropEvent)
        return static_cast< ::QDropEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDragEnterEvent(void *, int);}
static void release_QDragEnterEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDragEnterEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QDragEnterEvent *>(sipCppV);
}


extern "C" {static void dealloc_QDragEnterEvent(sipSimpleWrapper *);}
static void dealloc_QDragEnterEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQDragEnterEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QDragEnterEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QDragEnterEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDragEnterEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDragEnterEvent *sipCpp = 0;

    {
        const  ::QPoint* a0;
         ::Qt::DropActions* a1;
        int a1State = 0;
        const  ::QMimeData* a2;
         ::Qt::MouseButtons* a3;
        int a3State = 0;
         ::Qt::KeyboardModifiers* a4;
        int a4State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J1J8J1J1", sipType_QPoint, &a0, sipType_Qt_DropActions, &a1, &a1State, sipType_QMimeData, &a2, sipType_Qt_MouseButtons, &a3, &a3State, sipType_Qt_KeyboardModifiers, &a4, &a4State))
        {
            sipCpp = new sipQDragEnterEvent(*a0,*a1,a2,*a3,*a4);
            sipReleaseType(a1,sipType_Qt_DropActions,a1State);
            sipReleaseType(a3,sipType_Qt_MouseButtons,a3State);
            sipReleaseType(a4,sipType_Qt_KeyboardModifiers,a4State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QDragEnterEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDragEnterEvent, &a0))
        {
            sipCpp = new sipQDragEnterEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDragEnterEvent[] = {{25, 255, 1}};

PyDoc_STRVAR(doc_QDragEnterEvent, "\1QDragEnterEvent(QPoint, Union[Qt.DropActions, Qt.DropAction], QMimeData, Union[Qt.MouseButtons, Qt.MouseButton], Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"QDragEnterEvent(QDragEnterEvent)");


static pyqt5ClassPluginDef plugin_QDragEnterEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QDragEnterEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QDragEnterEvent,
        {0},
        &plugin_QDragEnterEvent
    },
    {
        sipNameNr_QDragEnterEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDragEnterEvent,
    -1,
    -1,
    supers_QDragEnterEvent,
    0,
    init_type_QDragEnterEvent,
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
    dealloc_QDragEnterEvent,
    0,
    0,
    0,
    release_QDragEnterEvent,
    cast_QDragEnterEvent,
    0,
    0,
    0,
    0,
    0,
    0
};
