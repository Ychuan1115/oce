// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TestTopOpeDraw_ListIteratorOfListOfPnt2d_HeaderFile
#define _TestTopOpeDraw_ListIteratorOfListOfPnt2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Address.hxx>
#include <Handle_TestTopOpeDraw_ListNodeOfListOfPnt2d.hxx>
#include <Standard_Boolean.hxx>
class Standard_NoMoreObject;
class Standard_NoSuchObject;
class TestTopOpeDraw_ListOfPnt2d;
class gp_Pnt2d;
class TestTopOpeDraw_ListNodeOfListOfPnt2d;



class TestTopOpeDraw_ListIteratorOfListOfPnt2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TestTopOpeDraw_ListIteratorOfListOfPnt2d();
  
  Standard_EXPORT TestTopOpeDraw_ListIteratorOfListOfPnt2d(const TestTopOpeDraw_ListOfPnt2d& L);
  
  Standard_EXPORT   void Initialize (const TestTopOpeDraw_ListOfPnt2d& L) ;
  
      Standard_Boolean More()  const;
  
  Standard_EXPORT   void Next() ;
  
  Standard_EXPORT   gp_Pnt2d& Value()  const;


friend class TestTopOpeDraw_ListOfPnt2d;


protected:





private:



  Standard_Address current;
  Standard_Address previous;


};

#define Item gp_Pnt2d
#define Item_hxx <gp_Pnt2d.hxx>
#define TCollection_ListNode TestTopOpeDraw_ListNodeOfListOfPnt2d
#define TCollection_ListNode_hxx <TestTopOpeDraw_ListNodeOfListOfPnt2d.hxx>
#define TCollection_ListIterator TestTopOpeDraw_ListIteratorOfListOfPnt2d
#define TCollection_ListIterator_hxx <TestTopOpeDraw_ListIteratorOfListOfPnt2d.hxx>
#define Handle_TCollection_ListNode Handle_TestTopOpeDraw_ListNodeOfListOfPnt2d
#define TCollection_ListNode_Type_() TestTopOpeDraw_ListNodeOfListOfPnt2d_Type_()
#define TCollection_List TestTopOpeDraw_ListOfPnt2d
#define TCollection_List_hxx <TestTopOpeDraw_ListOfPnt2d.hxx>

#include <TCollection_ListIterator.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx




#endif // _TestTopOpeDraw_ListIteratorOfListOfPnt2d_HeaderFile
