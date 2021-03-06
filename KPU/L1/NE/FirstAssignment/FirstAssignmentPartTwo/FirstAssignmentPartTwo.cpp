// FirstAssignmentPartTwo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
using namespace std;
#include "../FirstAssignment/FirstAssignment.h"

int main()
{
	//Declaration of all variables
	int int1;
	int int2;
	int intRes;
	const int STRLEN = 81;
	char charInput1[STRLEN];
	char charInput2[STRLEN];
	char* charRes = NULL;
	string strInput1;
	string strInput2;
	string strRes;

	//Test the function adding two integers:
	cout << "Test of adding two integers: \n\n";
	cout << "Enter first number: ";
	cin >> int1;
	cout << "Enter second number: ";
	cin >> int2;
	intRes = addTwoInts(int1, int2);
	cout << "The sum of " << int1 << " and " << int2 << " is " << intRes << ".\n\n";
	
	//Test the function of concatenating two chars:
	cout << "Test of adding two chars: \n\n";
	cout << "Enter first string: ";
	cin.getline(charInput1, STRLEN); //Get rid of new line char
	cin.getline(charInput1, STRLEN);
	cout << "Enter second string: ";
	cin.getline(charInput2, STRLEN);
	charRes = addTwoChars(charInput1, charInput2);
	cout << "The result of concatenating chars: " << charInput1 << " and " << charInput2 << " is " << charRes << ".\n\n";

	//Test the function of concatenating two strings:
	cout << "Test of adding two strings: \n\n";
	cout << "Enter first string: ";
	getline(cin, strInput1);
	cout << "Enter second string: ";
	getline(cin, strInput2);
	strRes = addMyTwoStrings(strInput1, strInput2);
	cout << "The result of concatenating strings: " << strInput1 << " and " << strInput2 << " is " << strRes << ".\n\n";

	while (true);
}

