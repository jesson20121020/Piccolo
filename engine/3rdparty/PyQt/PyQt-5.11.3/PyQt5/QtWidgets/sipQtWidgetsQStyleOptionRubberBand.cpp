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

#include <qrubberband.h>
#include <qwidget.h>


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionRubberBand(void *, const sipTypeDef *);}
static void *cast_QStyleOptionRubberBand(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionRubberBand *sipCpp = reinterpret_cast< ::QStyleOptionRubberBand *>(sipCppV);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionRubberBand(void *, int);}
static void release_QStyleOptionRubberBand(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionRubberBand *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionRubberBand(void *, SIP_SSIZE_T, void *);}
static void assign_QStyleOptionRubberBand(void *sipDst, SIP_SSIZE_T sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionRubberBand *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionRubberBand *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionRubberBand(SIP_SSIZE_T);}
static void *array_QStyleOptionRubberBand(SIP_SSIZE_T sipNrElem)
{
    return new  ::QStyleOptionRubberBand[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionRubberBand(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionRubberBand(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::QStyleOptionRubberBand(reinterpret_cast<const  ::QStyleOptionRubberBand *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionRubberBand(sipSimpleWrapper *);}
static void dealloc_QStyleOptionRubberBand(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionRubberBand(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionRubberBand(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionRubberBand(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionRubberBand *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionRubberBand();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionRubberBand* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionRubberBand, &a0))
        {
            sipCpp = new  ::QStyleOptionRubberBand(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionRubberBand[] = {{311, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionRubberBand[] = {
    {sipName_Type, static_cast<int>( ::QStyleOptionRubberBand::Type), 358},
    {sipName_Version, static_cast<int>( ::QStyleOptionRubberBand::Version), 359},
};


extern "C" {static PyObject *varget_QStyleOptionRubberBand_opaque(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionRubberBand_opaque(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::QStyleOptionRubberBand *sipCpp = reinterpret_cast< ::QStyleOptionRubberBand *>(sipSelf);

    sipVal = sipCpp->opaque;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionRubberBand_opaque(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionRubberBand_opaque(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::QStyleOptionRubberBand *sipCpp = reinterpret_cast< ::QStyleOptionRubberBand *>(sipSelf);

    sipVal = sipConvertToBool(sipPy);

    if (sipVal < 0)
        return -1;

    sipCpp->opaque = static_cast<bool>(sipVal);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionRubberBand_shape(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionRubberBand_shape(void *sipSelf, PyObject *, PyObject *)
{
     ::QRubberBand::Shape sipVal;
     ::QStyleOptionRubberBand *sipCpp = reinterpret_cast< ::QStyleOptionRubberBand *>(sipSelf);

    sipVal = sipCpp->shape;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_QRubberBand_Shape);
}


extern "C" {static int varset_QStyleOptionRubberBand_shape(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionRubberBand_shape(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QRubberBand::Shape sipVal;
     ::QStyleOptionRubberBand *sipCpp = reinterpret_cast< ::QStyleOptionRubberBand *>(sipSelf);

    sipVal = ( ::QRubberBand::Shape)sipConvertToEnum(sipPy, sipType_QRubberBand_Shape);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->shape = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionRubberBand[] = {
    {InstanceVariable, sipName_opaque, (PyMethodDef *)varget_QStyleOptionRubberBand_opaque, (PyMethodDef *)varset_QStyleOptionRubberBand_opaque, NULL, NULL},
    {InstanceVariable, sipName_shape, (PyMethodDef *)varget_QStyleOptionRubberBand_shape, (PyMethodDef *)varset_QStyleOptionRubberBand_shape, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionRubberBand, "\1QStyleOptionRubberBand()\n"
"QStyleOptionRubberBand(QStyleOptionRubberBand)");


static pyqt5ClassPluginDef plugin_QStyleOptionRubberBand = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionRubberBand = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionRubberBand,
        {0},
        &plugin_QStyleOptionRubberBand
    },
    {
        sipNameNr_QStyleOptionRubberBand,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionRubberBand,
        2, variables_QStyleOptionRubberBand,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionRubberBand,
    -1,
    -1,
    supers_QStyleOptionRubberBand,
    0,
    init_type_QStyleOptionRubberBand,
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
    dealloc_QStyleOptionRubberBand,
    assign_QStyleOptionRubberBand,
    array_QStyleOptionRubberBand,
    copy_QStyleOptionRubberBand,
    release_QStyleOptionRubberBand,
    cast_QStyleOptionRubberBand,
    0,
    0,
    0,
    0,
    0,
    0
};
