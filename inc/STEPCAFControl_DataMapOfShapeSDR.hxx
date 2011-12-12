// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapOfShapeSDR_HeaderFile
#define _STEPCAFControl_DataMapOfShapeSDR_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_StepShape_ShapeDefinitionRepresentation_HeaderFile
#include <Handle_StepShape_ShapeDefinitionRepresentation.hxx>
#endif
#ifndef _Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR_HeaderFile
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR.hxx>
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
class StepShape_ShapeDefinitionRepresentation;
class TopTools_ShapeMapHasher;
class STEPCAFControl_DataMapNodeOfDataMapOfShapeSDR;
class STEPCAFControl_DataMapIteratorOfDataMapOfShapeSDR;



class STEPCAFControl_DataMapOfShapeSDR  : public TCollection_BasicMap {
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

  
  Standard_EXPORT   STEPCAFControl_DataMapOfShapeSDR(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     STEPCAFControl_DataMapOfShapeSDR& Assign(const STEPCAFControl_DataMapOfShapeSDR& Other) ;
    STEPCAFControl_DataMapOfShapeSDR& operator =(const STEPCAFControl_DataMapOfShapeSDR& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~STEPCAFControl_DataMapOfShapeSDR()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TopoDS_Shape& K,const Handle(StepShape_ShapeDefinitionRepresentation)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TopoDS_Shape& K) ;
  
  Standard_EXPORT    const Handle_StepShape_ShapeDefinitionRepresentation& Find(const TopoDS_Shape& K) const;
   const Handle_StepShape_ShapeDefinitionRepresentation& operator()(const TopoDS_Shape& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_StepShape_ShapeDefinitionRepresentation& ChangeFind(const TopoDS_Shape& K) ;
    Handle_StepShape_ShapeDefinitionRepresentation& operator()(const TopoDS_Shape& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TopoDS_Shape& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TopoDS_Shape& K) ;





protected:





private:

  
  Standard_EXPORT   STEPCAFControl_DataMapOfShapeSDR(const STEPCAFControl_DataMapOfShapeSDR& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
