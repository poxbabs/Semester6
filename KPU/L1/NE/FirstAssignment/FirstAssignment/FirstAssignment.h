#pragma once

// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the FIRSTASSIGNMENT_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// FIRSTASSIGNMENT_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef FIRSTASSIGNMENT_EXPORTS
#define FIRSTASSIGNMENT_API __declspec(dllexport)
#else
#define FIRSTASSIGNMENT_API __declspec(dllimport)
#endif

// This class is exported from the FirstAssignment.dll
extern "C" FIRSTASSIGNMENT_API int addTwoInts(int a, int b);

extern "C" FIRSTASSIGNMENT_API string addMyTwoStrings(string str1, string str2);

extern "C" FIRSTASSIGNMENT_API char* addTwoChars(char* str1, char* str2);
