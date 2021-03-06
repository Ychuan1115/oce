// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_TColStd_DataMapNodeOfDataMapOfAsciiStringInteger.hxx>
class Standard_NoSuchObject;
class TCollection_AsciiString;
class TColStd_DataMapOfAsciiStringInteger;
class TColStd_DataMapNodeOfDataMapOfAsciiStringInteger;



class TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger();
  
  Standard_EXPORT TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger(const TColStd_DataMapOfAsciiStringInteger& aMap);
  
  Standard_EXPORT   void Initialize (const TColStd_DataMapOfAsciiStringInteger& aMap) ;
  
  Standard_EXPORT  const  TCollection_AsciiString& Key()  const;
  
  Standard_EXPORT  const  Standard_Integer& Value()  const;




protected:





private:





};







#endif // _TColStd_DataMapIteratorOfDataMapOfAsciiStringInteger_HeaderFile
