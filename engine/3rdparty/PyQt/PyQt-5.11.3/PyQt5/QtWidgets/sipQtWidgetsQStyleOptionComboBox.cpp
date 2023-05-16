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

#include <qstyleoption.h>

#include <qicon.h>
#include <qstring.h>
#include <qsize.h>
#include <qrect.h>
#include <qwidget.h>


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionComboBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionComboBox(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipCppV);

    if (targetType == sipType_QStyleOptionComplex)
        return static_cast< ::QStyleOptionComplex *>(sipCpp);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionComboBox(void *, int);}
static void release_QStyleOptionComboBox(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionComboBox *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionComboBox(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionComboBox(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionComboBox *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionComboBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionComboBox(SIP_SSIZE_T);}
static void *array_QStyleOptionComboBox(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionComboBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionComboBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionComboBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionComboBox(reinterpret_cast<const  ::QStyleOptionComboBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionComboBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionComboBox(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionComboBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionComboBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionComboBox();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionComboBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionComboBox, &a0))
        {
            sipCpp = new  ::QStyleOptionComboBox(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionComboBox[] = {{323, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionComboBox[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionComboBox::Type), 321},
    {sipName_Version, static_cast<int>( ::QStyleOptionComboBox::Version), 322},
};


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentIcon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *, PyObject *)
{
     ::QIcon*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->currentIcon;

    return sipConvertFromType(sipVal, sipType_QIcon, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_currentIcon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentIcon(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QIcon*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QIcon *>(sipForceConvertToType(sipPy,sipType_QIcon,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentIcon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_currentText(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->currentText;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_currentText(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_currentText(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->currentText = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_editable(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_editable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->editable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_editable(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_editable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->editable = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_frame(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_frame(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = sipCpp->frame;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionComboBox_frame(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_frame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->frame = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->iconSize;

    return sipConvertFromType(sipVal, sipType_QSize, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy,sipType_QSize,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionComboBox_popupRect(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    sipVal = &sipCpp->popupRect;

    return sipConvertFromType(sipVal, sipType_QRect, NULL);
}


extern "C" {static int varset_QStyleOptionComboBox_popupRect(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionComboBox_popupRect(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRect*sipVal;
     ::QStyleOptionComboBox *sipCpp = reinterpret_cast< ::QStyleOptionComboBox *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QRect *>(sipForceConvertToType(sipPy,sipType_QRect,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->popupRect = *sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionComboBox[] = {
    {InstanceVariable, sipName_currentIcon, (PyMethodDef *)varget_QStyleOptionComboBox_currentIcon, (PyMethodDef *)varset_QStyleOptionComboBox_currentIcon, NULL, NULL},
    {InstanceVariable, sipName_currentText, (PyMethodDef *)varget_QStyleOptionComboBox_currentText, (PyMethodDef *)varset_QStyleOptionComboBox_currentText, NULL, NULL},
    {InstanceVariable, sipName_editable, (PyMethodDef *)varget_QStyleOptionComboBox_editable, (PyMethodDef *)varset_QStyleOptionComboBox_editable, NULL, NULL},
    {InstanceVariable, sipName_frame, (PyMethodDef *)varget_QStyleOptionComboBox_frame, (PyMethodDef *)varset_QStyleOptionComboBox_frame, NULL, NULL},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionComboBox_iconSize, (PyMethodDef *)varset_QStyleOptionComboBox_iconSize, NULL, NULL},
    {InstanceVariable, sipName_popupRect, (PyMethodDef *)varget_QStyleOptionComboBox_popupRect, (PyMethodDef *)varset_QStyleOptionComboBox_popupRect, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionComboBox, "\1QStyleOptionComboBox()\n"
"QStyleOptionComboBox(QStyleOptionComboBox)");


static pyqt5ClassPluginDef plugin_QStyleOptionComboBox = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionComboBox = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionComboBox,
        {0},
        &plugin_QStyleOptionComboBox
    },
    {
        sipNameNr_QStyleOptionComboBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionComboBox,
        6, variables_QStyleOptionComboBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionComboBox,
    -1,
    -1,
    supers_QStyleOptionComboBox,
    0,
    init_type_QStyleOptionComboBox,
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
    dealloc_QStyleOptionComboBox,
    assign_QStyleOptionComboBox,
    array_QStyleOptionComboBox,
    copy_QStyleOptionComboBox,
    release_QStyleOptionComboBox,
    cast_QStyleOptionComboBox,
    0,
    0,
    0,
    0,
    0,
    0
};
