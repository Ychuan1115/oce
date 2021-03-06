// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PDataStd_HArray1OfHArray1OfReal_HeaderFile
#define _PDataStd_HArray1OfHArray1OfReal_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PDataStd_HArray1OfHArray1OfReal.hxx>

#include <Standard_Integer.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <PDataStd_FieldOfHArray1OfHArray1OfReal.hxx>
#include <Standard_Address.hxx>
#include <Standard_Persistent.hxx>
#include <Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
class PColStd_HArray1OfReal;
class Standard_OutOfRange;
class Standard_RangeError;
class PDataStd_FieldOfHArray1OfHArray1OfReal;
class PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal;
class PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal;


class PDataStd_HArray1OfHArray1OfReal : public Standard_Persistent
{

public:

  
  Standard_EXPORT PDataStd_HArray1OfHArray1OfReal(const Standard_Integer Low, const Standard_Integer Up);
  
  Standard_EXPORT PDataStd_HArray1OfHArray1OfReal(const Standard_Integer Low, const Standard_Integer Up, const Handle(PColStd_HArray1OfReal)& V);
  
      Standard_Integer Length()  const;
  
      Standard_Integer Lower()  const;
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Handle(PColStd_HArray1OfReal)& Value) ;
  
      Standard_Integer Upper()  const;
  
  Standard_EXPORT   Handle(PColStd_HArray1OfReal) Value (const Standard_Integer Index)  const;

PDataStd_HArray1OfHArray1OfReal( )
{
  
}
PDataStd_HArray1OfHArray1OfReal(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHArray1OfRealLowerBound() const { return LowerBound; }
    void _CSFDB_SetPDataStd_HArray1OfHArray1OfRealLowerBound(const Standard_Integer p) { LowerBound = p; }
    Standard_Integer _CSFDB_GetPDataStd_HArray1OfHArray1OfRealUpperBound() const { return UpperBound; }
    void _CSFDB_SetPDataStd_HArray1OfHArray1OfRealUpperBound(const Standard_Integer p) { UpperBound = p; }
    const PDataStd_FieldOfHArray1OfHArray1OfReal& _CSFDB_GetPDataStd_HArray1OfHArray1OfRealData() const { return Data; }



  DEFINE_STANDARD_RTTI(PDataStd_HArray1OfHArray1OfReal)

protected:




private: 

  
  Standard_EXPORT   PDataStd_FieldOfHArray1OfHArray1OfReal Field()  const;
  
  Standard_EXPORT   Standard_Address Datas()  const;

  Standard_Integer LowerBound;
  Standard_Integer UpperBound;
  PDataStd_FieldOfHArray1OfHArray1OfReal Data;


};

#define Item Handle(PColStd_HArray1OfReal)
#define Item_hxx <PColStd_HArray1OfReal.hxx>
#define PCollection_FieldOfHArray1 PDataStd_FieldOfHArray1OfHArray1OfReal
#define PCollection_FieldOfHArray1_hxx <PDataStd_FieldOfHArray1OfHArray1OfReal.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
#define PCollection_VArrayNodeOfFieldOfHArray1 PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayNodeOfFieldOfHArray1_hxx <PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
#define PCollection_VArrayTNodeOfFieldOfHArray1 PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayTNodeOfFieldOfHArray1_hxx <PDataStd_VArrayTNodeOfFieldOfHArray1OfHArray1OfReal.hxx>
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal_Type_()
#define Handle_PCollection_VArrayNodeOfFieldOfHArray1 Handle_PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal
#define PCollection_VArrayNodeOfFieldOfHArray1_Type_() PDataStd_VArrayNodeOfFieldOfHArray1OfHArray1OfReal_Type_()
#define PCollection_HArray1 PDataStd_HArray1OfHArray1OfReal
#define PCollection_HArray1_hxx <PDataStd_HArray1OfHArray1OfReal.hxx>
#define Handle_PCollection_HArray1 Handle_PDataStd_HArray1OfHArray1OfReal
#define PCollection_HArray1_Type_() PDataStd_HArray1OfHArray1OfReal_Type_()

#include <PCollection_HArray1.lxx>

#undef Item
#undef Item_hxx
#undef PCollection_FieldOfHArray1
#undef PCollection_FieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_hxx
#undef PCollection_VArrayTNodeOfFieldOfHArray1
#undef PCollection_VArrayTNodeOfFieldOfHArray1_hxx
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef Handle_PCollection_VArrayNodeOfFieldOfHArray1
#undef PCollection_VArrayNodeOfFieldOfHArray1_Type_
#undef PCollection_HArray1
#undef PCollection_HArray1_hxx
#undef Handle_PCollection_HArray1
#undef PCollection_HArray1_Type_




#endif // _PDataStd_HArray1OfHArray1OfReal_HeaderFile
