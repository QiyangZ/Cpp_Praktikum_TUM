//============================================================================
// Name        : Verfahren_von_Heron.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Procedure of Heron
//
// Heron of Alexandria developed a method to calculate the square root of a number.
// The iteration rule for finding the square root is: x_n+1 = (x_n + a/x_n)/2 ;
// where a is the number whose square root is being sought and x0 is any starting
// value not equal to 0.
// a) Write a function heron_ite(...) that executes the Heron method iteratively.
//    The number of iterations is 10.
// b) Write a main function that reads a number from the user and prints its square
//    root (i.e. calls the heron_ite(...) function and writes its result to the console).

//============================================================================
#include <iostream>
#include <string>
using namespace std;

double heron_ite(float a)
{
	 double b = 3;
	for (int i = 0; i < 10; i++)
	{
		b = (b + a/b) / 2;
	}

	return b;
}

int main ()
{
	double x ;
	cout << "Bitte eine Nummer geben: " ;
	std::cin >> x ;
	 double Qw = heron_ite(x) ;
	 cout << Qw ;
	 return 0 ;
}
