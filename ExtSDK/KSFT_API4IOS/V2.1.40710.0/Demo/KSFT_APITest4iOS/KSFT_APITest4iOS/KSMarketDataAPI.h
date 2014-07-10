
// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the KSMARKETDATAAPI_EXPORTS
// symbol defined on the command line. this symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// KSMARKETDATAAPI_API functions as being imported from a DLL, wheras this DLL sees symbols
// defined with this macro as being exported.
#ifndef __KSMARKETDATA_API_H__
#define __KSMARKETDATA_API_H__
#ifdef KSMARKETDATAAPI_EXPORTS
#define KSMARKETDATAAPI_API __declspec(dllexport)
#else
#define KSMARKETDATAAPI_API __declspec(dllimport)
#endif

#include "CTP/KSMdApiEx.h"



#endif
