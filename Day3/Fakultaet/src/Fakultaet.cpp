//============================================================================
// Name        : Fakultaet.cpp
// Author      : Qiyang
// Version     :
// Copyright   : Your copyright notice
// Description : recursion
//
//a) First implement the calculation of the factorial iteratively. To do this,
//   create a factorialIter function.
//b) Now implement the calculation of the factorial recursively. To do this,
//   create a function factorialRec.
//============================================================================

#include <iostream>
using namespace std;

int factorialIter(int a)
{
	int b=1;
	if(a <= 1)
	{b=1;}
	else
	{
		for (int d=a;d>=1;d--)
		{b = d*b;}
	}
	return b;
}

int factorialRec(int aa)
{
if (aa<=1)
{
return 1;
}
else
{
	return aa*factorialRec(aa-1);
}
}

int main()
{

int iFact;
cout<< "Please enter a number: ";
cin >> iFact;
cout << "Ite result: " << factorialIter(iFact) << endl;
cout << "Rec result: " << factorialRec(iFact) << endl;
}





