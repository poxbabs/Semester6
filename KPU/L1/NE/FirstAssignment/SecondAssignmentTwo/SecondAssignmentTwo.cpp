// SecondAssignmentTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "../SecondAssignment/SecondAssignment.h"

using namespace std;

int main()
{
	string str1;
	CMyDllClass userObj;
	CMyDllClass emptyObj;
	CMyDllClass nickoObj("Nicko");

	cout << "Please enter your name: ";
	getline(cin, str1);

	userObj.SetName(str1.c_str());
	userObj.Greeting();

	cout << "Testing empty object: ";
	emptyObj.Greeting();

	cout << "Testing nicko object: ";
	nickoObj.Greeting();

	cout << "Type anything to stop: ";
	getline(cin, str1);

	return 0;
}

