/*
 * MATLAB Compiler: 6.1 (R2015b)
 * Date: Thu Oct 12 22:54:50 2017
 * Arguments: "-B" "macro_default" "-W" "lib:joydivision" "-T" "link:lib" "-d"
 * "D:\diplom\project\joydivision\for_testing" "-v"
 * "C:\Users\User\Documents\diplom\divide.m" 
 */

#ifndef __joydivision_h
#define __joydivision_h 1

#if defined(__cplusplus) && !defined(mclmcrrt_h) && defined(__linux__)
#  pragma implementation "mclmcrrt.h"
#endif
#include "mclmcrrt.h"
#ifdef __cplusplus
extern "C" {
#endif

#if defined(__SUNPRO_CC)
/* Solaris shared libraries use __global, rather than mapfiles
 * to define the API exported from a shared library. __global is
 * only necessary when building the library -- files including
 * this header file to use the library do not need the __global
 * declaration; hence the EXPORTING_<library> logic.
 */

#ifdef EXPORTING_joydivision
#define PUBLIC_joydivision_C_API __global
#else
#define PUBLIC_joydivision_C_API /* No import statement needed. */
#endif

#define LIB_joydivision_C_API PUBLIC_joydivision_C_API

#elif defined(_HPUX_SOURCE)

#ifdef EXPORTING_joydivision
#define PUBLIC_joydivision_C_API __declspec(dllexport)
#else
#define PUBLIC_joydivision_C_API __declspec(dllimport)
#endif

#define LIB_joydivision_C_API PUBLIC_joydivision_C_API


#else

#define LIB_joydivision_C_API

#endif

/* This symbol is defined in shared libraries. Define it here
 * (to nothing) in case this isn't a shared library. 
 */
#ifndef LIB_joydivision_C_API 
#define LIB_joydivision_C_API /* No special import/export declaration */
#endif

extern LIB_joydivision_C_API 
bool MW_CALL_CONV joydivisionInitializeWithHandlers(
       mclOutputHandlerFcn error_handler, 
       mclOutputHandlerFcn print_handler);

extern LIB_joydivision_C_API 
bool MW_CALL_CONV joydivisionInitialize(void);

extern LIB_joydivision_C_API 
void MW_CALL_CONV joydivisionTerminate(void);



extern LIB_joydivision_C_API 
void MW_CALL_CONV joydivisionPrintStackTrace(void);

extern LIB_joydivision_C_API 
bool MW_CALL_CONV mlxDivide(int nlhs, mxArray *plhs[], int nrhs, mxArray *prhs[]);



extern LIB_joydivision_C_API bool MW_CALL_CONV mlfDivide(mxArray* filename);

#ifdef __cplusplus
}
#endif
#endif
