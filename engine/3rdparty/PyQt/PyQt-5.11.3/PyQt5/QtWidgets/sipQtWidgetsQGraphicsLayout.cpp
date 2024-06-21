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

#include <qgraphicslayout.h>

#include <qgraphicslayoutitem.h>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qsize.h>
#include <qnamespace.h>
#include <qrect.h>
#include <qsizepolicy.h>


class sipQGraphicsLayout : public  ::QGraphicsLayout
{
public:
    sipQGraphicsLayout( ::QGraphicsLayoutItem*);
    virtual ~sipQGraphicsLayout();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
     ::QSizeF sipProtect_sizeHint( ::Qt::SizeHint,const  ::QSizeF&) const;
    void sipProtect_setGraphicsItem( ::QGraphicsItem*);
    void sipProtect_setOwnedByLayout(bool);
    void sipProtect_addChildLayoutItem( ::QGraphicsLayoutItem*);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void removeAt(int);
     ::QGraphicsLayoutItem* itemAt(int) const;
    int count() const;
    void widgetEvent( ::QEvent*);
    void invalidate();
    void setGeometry(const  ::QRectF&);
    void getContentsMargins( ::qreal*, ::qreal*, ::qreal*, ::qreal*) const;
    void updateGeometry();
     ::QSizeF sizeHint( ::Qt::SizeHint,const  ::QSizeF&) const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGraphicsLayout(const sipQGraphicsLayout &);
    sipQGraphicsLayout &operator = (const sipQGraphicsLayout &);

    char sipPyMethods[9];
};

sipQGraphicsLayout::sipQGraphicsLayout( ::QGraphicsLayoutItem*a0):  ::QGraphicsLayout(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGraphicsLayout::~sipQGraphicsLayout()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQGraphicsLayout::removeAt(int a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QGraphicsLayout,sipName_removeAt);

    if (!sipMeth)
        return;

    extern void sipVH_QtWidgets_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    sipVH_QtWidgets_59(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QGraphicsLayoutItem* sipQGraphicsLayout::itemAt(int a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QGraphicsLayout,sipName_itemAt);

    if (!sipMeth)
        return 0;

    extern  ::QGraphicsLayoutItem* sipVH_QtWidgets_141(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_QtWidgets_141(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

int sipQGraphicsLayout::count() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,sipName_QGraphicsLayout,sipName_count);

    if (!sipMeth)
        return 0;

    extern int sipVH_QtWidgets_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtWidgets_8(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQGraphicsLayout::widgetEvent( ::QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_widgetEvent);

    if (!sipMeth)
    {
         ::QGraphicsLayout::widgetEvent(a0);
        return;
    }

    extern void sipVH_QtWidgets_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QEvent*);

    sipVH_QtWidgets_1(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::invalidate()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_invalidate);

    if (!sipMeth)
    {
         ::QGraphicsLayout::invalidate();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQGraphicsLayout::setGeometry(const  ::QRectF& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_setGeometry);

    if (!sipMeth)
    {
         ::QGraphicsLayout::setGeometry(a0);
        return;
    }

    extern void sipVH_QtWidgets_138(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QRectF&);

    sipVH_QtWidgets_138(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

void sipQGraphicsLayout::getContentsMargins( ::qreal*a0, ::qreal*a1, ::qreal*a2, ::qreal*a3) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[6]),sipPySelf,NULL,sipName_getContentsMargins);

    if (!sipMeth)
    {
         ::QGraphicsLayout::getContentsMargins(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtWidgets_139(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::qreal*, ::qreal*, ::qreal*, ::qreal*);

    sipVH_QtWidgets_139(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQGraphicsLayout::updateGeometry()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_updateGeometry);

    if (!sipMeth)
    {
         ::QGraphicsLayout::updateGeometry();
        return;
    }

    extern void sipVH_QtWidgets_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_QtWidgets_37(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QSizeF sipQGraphicsLayout::sizeHint( ::Qt::SizeHint a0,const  ::QSizeF& a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,sipName_QGraphicsLayout,sipName_sizeHint);

    if (!sipMeth)
        return  ::QSizeF();

    extern  ::QSizeF sipVH_QtWidgets_140(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::Qt::SizeHint,const  ::QSizeF&);

    return sipVH_QtWidgets_140(sipGILState, sipImportedVirtErrorHandlers_QtWidgets_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

 ::QSizeF sipQGraphicsLayout::sipProtect_sizeHint( ::Qt::SizeHint a0,const  ::QSizeF& a1) const
{
    return sizeHint(a0,a1);
}

void sipQGraphicsLayout::sipProtect_setGraphicsItem( ::QGraphicsItem*a0)
{
     ::QGraphicsLayoutItem::setGraphicsItem(a0);
}

void sipQGraphicsLayout::sipProtect_setOwnedByLayout(bool a0)
{
     ::QGraphicsLayoutItem::setOwnedByLayout(a0);
}

void sipQGraphicsLayout::sipProtect_addChildLayoutItem( ::QGraphicsLayoutItem*a0)
{
     ::QGraphicsLayout::addChildLayoutItem(a0);
}


PyDoc_STRVAR(doc_QGraphicsLayout_sizeHint, "sizeHint(self, Qt.SizeHint, constraint: QSizeF = QSizeF()) -> QSizeF");

extern "C" {static PyObject *meth_QGraphicsLayout_sizeHint(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_sizeHint(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::Qt::SizeHint a0;
        const  ::QSizeF& a1def = QSizeF();
        const  ::QSizeF* a1 = &a1def;
        const sipQGraphicsLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_constraint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|J9", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_Qt_SizeHint, &a0, sipType_QSizeF, &a1))
        {
             ::QSizeF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_sizeHint);
                return NULL;
            }

            sipRes = new  ::QSizeF(sipCpp->sipProtect_sizeHint(a0,*a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_sizeHint, doc_QGraphicsLayout_sizeHint);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_setGraphicsItem, "setGraphicsItem(self, QGraphicsItem)");

extern "C" {static PyObject *meth_QGraphicsLayout_setGraphicsItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setGraphicsItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsItem* a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsItem, &a0))
        {
            sipCpp->sipProtect_setGraphicsItem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setGraphicsItem, doc_QGraphicsLayout_setGraphicsItem);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_setOwnedByLayout, "setOwnedByLayout(self, bool)");

extern "C" {static PyObject *meth_QGraphicsLayout_setOwnedByLayout(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setOwnedByLayout(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bb", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setOwnedByLayout(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setOwnedByLayout, doc_QGraphicsLayout_setOwnedByLayout);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_setContentsMargins, "setContentsMargins(self, float, float, float, float)");

extern "C" {static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_setContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdddd", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setContentsMargins(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_setContentsMargins, doc_QGraphicsLayout_setContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_getContentsMargins, "getContentsMargins(self) -> Tuple[float, float, float, float]");

extern "C" {static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_getContentsMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::qreal a0;
         ::qreal a1;
         ::qreal a2;
         ::qreal a3;
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::getContentsMargins(&a0,&a1,&a2,&a3) : sipCpp->getContentsMargins(&a0,&a1,&a2,&a3));

            return sipBuildResult(0,"(dddd)",a0,a1,a2,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_getContentsMargins, doc_QGraphicsLayout_getContentsMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_activate, "activate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_activate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_activate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            sipCpp->activate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_activate, doc_QGraphicsLayout_activate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_isActivated, "isActivated(self) -> bool");

extern "C" {static PyObject *meth_QGraphicsLayout_isActivated(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_isActivated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActivated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_isActivated, doc_QGraphicsLayout_isActivated);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_invalidate, "invalidate(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::invalidate() : sipCpp->invalidate());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_invalidate, doc_QGraphicsLayout_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_widgetEvent, "widgetEvent(self, QEvent)");

extern "C" {static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_widgetEvent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QEvent* a0;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QEvent, &a0))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::widgetEvent(a0) : sipCpp->widgetEvent(a0));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_widgetEvent, doc_QGraphicsLayout_widgetEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_count, "count(self) -> int");

extern "C" {static PyObject *meth_QGraphicsLayout_count(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_count);
                return NULL;
            }

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_count, doc_QGraphicsLayout_count);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_itemAt, "itemAt(self, int) -> QGraphicsLayoutItem");

extern "C" {static PyObject *meth_QGraphicsLayout_itemAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_itemAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
        const  ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
             ::QGraphicsLayoutItem*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_itemAt);
                return NULL;
            }

            sipRes = sipCpp->itemAt(a0);

            return sipConvertFromType(sipRes,sipType_QGraphicsLayoutItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_itemAt, doc_QGraphicsLayout_itemAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_removeAt, "removeAt(self, int)");

extern "C" {static PyObject *meth_QGraphicsLayout_removeAt(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_removeAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QGraphicsLayout, &sipCpp, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGraphicsLayout, sipName_removeAt);
                return NULL;
            }

            sipCpp->removeAt(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_removeAt, doc_QGraphicsLayout_removeAt);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_updateGeometry, "updateGeometry(self)");

extern "C" {static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_updateGeometry(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QGraphicsLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsLayout, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::QGraphicsLayout::updateGeometry() : sipCpp->updateGeometry());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_updateGeometry, doc_QGraphicsLayout_updateGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsLayout_addChildLayoutItem, "addChildLayoutItem(self, QGraphicsLayoutItem)");

extern "C" {static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGraphicsLayout_addChildLayoutItem(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
         ::QGraphicsLayoutItem* a0;
        sipQGraphicsLayout *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ:", &sipSelf, sipType_QGraphicsLayout, &sipCpp, sipType_QGraphicsLayoutItem, &a0))
        {
            sipCpp->sipProtect_addChildLayoutItem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsLayout, sipName_addChildLayoutItem, doc_QGraphicsLayout_addChildLayoutItem);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *);}
static SIP_SSIZE_T slot_QGraphicsLayout___len__(PyObject *sipSelf)
{
     ::QGraphicsLayout *sipCpp = reinterpret_cast< ::QGraphicsLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsLayout));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

            sipRes = (SIP_SSIZE_T)sipCpp->count();

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QGraphicsLayout(void *, const sipTypeDef *);}
static void *cast_QGraphicsLayout(void *sipCppV, const sipTypeDef *targetType)
{
     ::QGraphicsLayout *sipCpp = reinterpret_cast< ::QGraphicsLayout *>(sipCppV);

    if (targetType == sipType_QGraphicsLayoutItem)
        return static_cast< ::QGraphicsLayoutItem *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsLayout(void *, int);}
static void release_QGraphicsLayout(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGraphicsLayout *>(sipCppV);
    else
        delete reinterpret_cast< ::QGraphicsLayout *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsLayout(sipSimpleWrapper *);}
static void dealloc_QGraphicsLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQGraphicsLayout *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QGraphicsLayout(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QGraphicsLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsLayout(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQGraphicsLayout *sipCpp = 0;

    {
         ::QGraphicsLayoutItem* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QGraphicsLayoutItem, &a0, sipOwner))
        {
            sipCpp = new sipQGraphicsLayout(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsLayout[] = {{130, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsLayout[] = {
    {(void *)slot_QGraphicsLayout___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGraphicsLayout[] = {
    {SIP_MLNAME_CAST(sipName_activate), meth_QGraphicsLayout_activate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_activate)},
    {SIP_MLNAME_CAST(sipName_addChildLayoutItem), (PyCFunction)meth_QGraphicsLayout_addChildLayoutItem, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGraphicsLayout_addChildLayoutItem)},
    {SIP_MLNAME_CAST(sipName_count), meth_QGraphicsLayout_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_count)},
    {SIP_MLNAME_CAST(sipName_getContentsMargins), meth_QGraphicsLayout_getContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_getContentsMargins)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QGraphicsLayout_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_invalidate)},
    {SIP_MLNAME_CAST(sipName_isActivated), meth_QGraphicsLayout_isActivated, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_isActivated)},
    {SIP_MLNAME_CAST(sipName_itemAt), meth_QGraphicsLayout_itemAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_itemAt)},
    {SIP_MLNAME_CAST(sipName_removeAt), meth_QGraphicsLayout_removeAt, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_removeAt)},
    {SIP_MLNAME_CAST(sipName_setContentsMargins), meth_QGraphicsLayout_setContentsMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_setContentsMargins)},
    {SIP_MLNAME_CAST(sipName_setGraphicsItem), (PyCFunction)meth_QGraphicsLayout_setGraphicsItem, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setOwnedByLayout), (PyCFunction)meth_QGraphicsLayout_setOwnedByLayout, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sizeHint), (PyCFunction)meth_QGraphicsLayout_sizeHint, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_updateGeometry), meth_QGraphicsLayout_updateGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_updateGeometry)},
    {SIP_MLNAME_CAST(sipName_widgetEvent), meth_QGraphicsLayout_widgetEvent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsLayout_widgetEvent)}
};

PyDoc_STRVAR(doc_QGraphicsLayout, "\1QGraphicsLayout(parent: QGraphicsLayoutItem = None)");


static pyqt5ClassPluginDef plugin_QGraphicsLayout = {
    0,
    0,
    0,
    0
};


sipClassTypeDef sipTypeDef_QtWidgets_QGraphicsLayout = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsLayout,
        {0},
        &plugin_QGraphicsLayout
    },
    {
        sipNameNr_QGraphicsLayout,
        {0, 0, 1},
        14, methods_QGraphicsLayout,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsLayout,
    -1,
    -1,
    supers_QGraphicsLayout,
    slots_QGraphicsLayout,
    init_type_QGraphicsLayout,
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
    dealloc_QGraphicsLayout,
    0,
    0,
    0,
    release_QGraphicsLayout,
    cast_QGraphicsLayout,
    0,
    0,
    0,
    0,
    0,
    0
};