// SecondAssignment.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "SecondAssignment.h"
using namespace std;

// This is the constructor of a class that has been exported.
// see SecondAssignment.h for the class definition
CMyDllClass::CMyDllClass()
{
	namePtr = NULL;
	return;
}

CMyDllClass::CMyDllClass(const char* aNamePtr)
{
	size_t len = strlen(aNamePtr) + 1;
	namePtr = new char[len];
	strcpy_s(namePtr, len, aNamePtr);
	return;
}

CMyDllClass::~CMyDllClass()
{
	if (namePtr != NULL)
		delete[] namePtr;
	return;
}

void CMyDllClass::SetName(const char* aNamePtr)
{
	if (namePtr != NULL)
		delete[] namePtr;

	size_t len = strlen(aNamePtr) + 1;
	namePtr = new char[len];
	strcpy_s(namePtr, len, aNamePtr);
	return;
}

char* CMyDllClass::GetName(void)
{
	return namePtr;
}

void CMyDllClass::Greeting()
{
	if (namePtr != NULL)
	{
		cout << "Hello my name is " << namePtr << endl;
	}
	else
		cout << "Hello, I dont have a name yet!" << endl;
}