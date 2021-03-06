// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AppCont_FunctionTool2d_HeaderFile
#define _AppCont_FunctionTool2d_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>
class AppCont_Function2d;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec2d;
class TColgp_Array1OfPnt;
class TColgp_Array1OfVec;


//! This class is the inteface between the Function2d
//! class and the tool asked by LeastSquare.
class AppCont_FunctionTool2d 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! returns the first parameter of the Function.
  Standard_EXPORT static   Standard_Real FirstParameter (const AppCont_Function2d& C) ;
  
  //! returns the last parameter of the Function.
  Standard_EXPORT static   Standard_Real LastParameter (const AppCont_Function2d& C) ;
  
  //! Returns 1. (the approximation will be done only for one
  //! function.
  Standard_EXPORT static   Standard_Integer NbP2d (const AppCont_Function2d& C) ;
  
  //! Returns 0.
  Standard_EXPORT static   Standard_Integer NbP3d (const AppCont_Function2d& C) ;
  
  //! <tabP> is an array of only 1 element, the point value at
  //! the parameter <U>.
  Standard_EXPORT static   void Value (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfPnt2d& tabPt) ;
  
  //! <tabV> is an array of only 1 element, the derivative
  //! value at the parameter <U>.
  Standard_EXPORT static   Standard_Boolean D1 (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfVec2d& tabV) ;
  
  Standard_EXPORT static   void Value (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfPnt& tabPt2d) ;
  
  Standard_EXPORT static   void Value (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfPnt& tabPt, TColgp_Array1OfPnt2d& tabPt2d) ;
  
  Standard_EXPORT static   Standard_Boolean D1 (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfVec& tabV2d) ;
  
  Standard_EXPORT static   Standard_Boolean D1 (const AppCont_Function2d& C, const Standard_Real U, TColgp_Array1OfVec& tabV, TColgp_Array1OfVec2d& tabV2d) ;




protected:





private:





};







#endif // _AppCont_FunctionTool2d_HeaderFile
