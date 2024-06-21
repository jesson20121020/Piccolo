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

#include <qcoreevent.h>


class sipQIconDragEvent : public  ::QIconDragEvent
{
public:
    sipQIconDragEvent();
    sipQIconDragEvent(const  ::QIconDragEvent&);
    ~sipQIconDragEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconDragEvent(const sipQIconDragEvent &);
    sipQIconDragEvent &operator = (const sipQIconDragEvent &);
};

sipQIconDragEvent::sipQIconDragEvent():  ::QIconDragEvent(), sipPySelf(0)
{
}

sipQIconDragEvent::sipQIconDragEvent(const  ::QIconDragEvent& a0):  ::QIconDragEvent(a0), sipPySelf(0)
{
}

sipQIconDragEvent::~sipQIconDragEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QIconDragEvent(void *, const sipTypeDef *);}
static void *cast_QIconDragEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QIconDragEvent *sipCpp = reinterpret_cast< ::QIconDragEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconDragEvent(void *, int);}
static void release_QIconDragEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconDragEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QIconDragEvent *>(sipCppV);
}


extern "C" {static void assign_QIconDragEvent(void *, SIP_SSIZE_T, void *);}
static void assign_QIconDragEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QIconDragEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QIconDragEvent *>(sipSrc);
}


extern "C" {static void *array_QIconDragEvent(SIP_SSIZE_T);}
static void *array_QIconDragEvent(SIP_SSIZE_T sipNrElem)
{
    return new  ::QIconDragEvent[sipNrElem];
}


extern "C" {static void *copy_QIconDragEvent(const void *, SIP_SSIZE_T);}
static void *copy_QIconDragEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QIconDragEvent(reinterpret_cast<const  ::QIconDragEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QIconDragEvent(sipSimpleWrapper *);}
static void dealloc_QIconDragEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQIconDragEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QIconDragEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QIconDragEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconDragEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconDragEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQIconDragEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QIconDragEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconDragEvent, &a0))
        {
            sipCpp = new sipQIconDragEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QIconDragEvent[] = {{6, 0, 1}};

PyDoc_STRVAR(doc_QIconDragEvent, "\1QIconDragEvent()\n"
"QIconDragEvent(QIconDragEvent)");


static pyqt5ClassPluginDef plugin_QIconDragEvent = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtGui_QIconDragEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QIconDragEvent,
        {0},
        &plugin_QIconDragEvent
    },
    {
        sipNameNr_QIconDragEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconDragEvent,
    -1,
    -1,
    supers_QIconDragEvent,
    0,
    init_type_QIconDragEvent,
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
    dealloc_QIconDragEvent,
    assign_QIconDragEvent,
    array_QIconDragEvent,
    copy_QIconDragEvent,
    release_QIconDragEvent,
    cast_QIconDragEvent,
    0,
    0,
    0,
    0,
    0,
    0
};