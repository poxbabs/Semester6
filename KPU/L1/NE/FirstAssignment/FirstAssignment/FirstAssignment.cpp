// FirstAssignment.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
using namespace std;
#include "FirstAssignment.h"


extern "C" FIRSTASSIGNMENT_API int addTwoInts(int a, int b)
{
	return a + b;
}

#pragma warning( disable : 4190 )
extern "C" FIRSTASSIGNMENT_API string addMyTwoStrings(string str1, string str2)
{
	string str3 = str1 + str2;
	return str3;
}
#pragma warning( default : 4190 )

extern "C" FIRSTASSIGNMENT_API char* addTwoChars(char* str1, char* str2)
{
	size_t len = strlen(str1) + strlen(str2) + 1;
	char* retStr = new char[len];
	retStr[0] = 0;
	strcat_s(retStr, len, str1);
	strcat_s(retStr, len, str2);
	return retStr;
}
