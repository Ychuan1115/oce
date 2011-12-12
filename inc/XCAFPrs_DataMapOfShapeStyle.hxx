// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _XCAFPrs_DataMapOfShapeStyle_HeaderFile
#define _XCAFPrs_DataMapOfShapeStyle_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_XCAFPrs_DataMapNodeOfDataMapOfShapeStyle_HeaderFile
#include <Handle_XCAFPrs_DataMapNodeOfDataMapOfShapeStyle.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TopoDS_Shape;
class XCAFPrs_Style;
class TopTools_ShapeMapHasher;
class XCAFPrs_DataMapNodeOfDataMapOfShapeStyle;
class XCAFPrs_DataMapIteratorOfDataMapOfShapeStyle;



class XCAFPrs_DataMapOfShapeStyle  : public TCollection_BasicMap {
public:

  void* operator new(size_t,void* anAddress) 
  {
    return anAddress;
  }
  void* operator new(size_t size) 
  {
    return Standard::Allocate(size); 
  }
  void  operator delete(void *anAddress) 
  {
    if (anAddress) Standard::Free((Standard_Address&)anAddress); 
  }

  
  Standard_EXPORT   XCAFPrs_DataMapOfShapeStyle(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     XCAFPrs_DataMapOfShapeStyle& Assign(const XCAFPrs_DataMapOfShapeStyle& Other) ;
    XCAFPrs_DataMapOfShapeStyle& operator =(const XCAFPrs_DataMapOfShapeStyle& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~XCAFPrs_DataMapOfShapeStyle()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const XCAFPrs_Style& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const XCAFPrs_Style& Find(const TopoDS_Shape& K) const;
   const XCAFPrs_Style& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     XCAFPrs_Style& ChangeFind(const TopoDS_Shape& K) ;
    XCAFPrs_Style& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   XCAFPrs_DataMapOfShapeStyle(const XCAFPrs_DataMapOfShapeStyle& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
