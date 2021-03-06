// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFDoc_DimTol_HeaderFile
#define _XCAFDoc_DimTol_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_XCAFDoc_DimTol.hxx>

#include <Standard_Integer.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <TDF_Attribute.hxx>
#include <Handle_TDF_Attribute.hxx>
#include <Handle_TDF_RelocationTable.hxx>
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class Standard_GUID;
class TDF_Label;
class TDF_Attribute;
class TDF_RelocationTable;


//! attribute to store dimension and tolerance
class XCAFDoc_DimTol : public TDF_Attribute
{

public:

  
  Standard_EXPORT XCAFDoc_DimTol();
  
  Standard_EXPORT static  const  Standard_GUID& GetID() ;
  
  Standard_EXPORT static   Handle(XCAFDoc_DimTol) Set (const TDF_Label& label, const Standard_Integer kind, const Handle(TColStd_HArray1OfReal)& aVal, const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   void Set (const Standard_Integer kind, const Handle(TColStd_HArray1OfReal)& aVal, const Handle(TCollection_HAsciiString)& aName, const Handle(TCollection_HAsciiString)& aDescription) ;
  
  Standard_EXPORT   Standard_Integer GetKind()  const;
  
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) GetVal()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) GetName()  const;
  
  Standard_EXPORT   Handle(TCollection_HAsciiString) GetDescription()  const;
  
  Standard_EXPORT  const  Standard_GUID& ID()  const;
  
  Standard_EXPORT   void Restore (const Handle(TDF_Attribute)& With) ;
  
  Standard_EXPORT   Handle(TDF_Attribute) NewEmpty()  const;
  
  Standard_EXPORT   void Paste (const Handle(TDF_Attribute)& Into, const Handle(TDF_RelocationTable)& RT)  const;




  DEFINE_STANDARD_RTTI(XCAFDoc_DimTol)

protected:




private: 


  Standard_Integer myKind;
  Handle(TColStd_HArray1OfReal) myVal;
  Handle(TCollection_HAsciiString) myName;
  Handle(TCollection_HAsciiString) myDescription;


};







#endif // _XCAFDoc_DimTol_HeaderFile
