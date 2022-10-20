//============================================================================
// Name        : QuadraF.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Quadratic function
//
// Write a function that calculates the (real) solutions of a quadratic equation (midnight formula).
// The return value of the function should indicate whether the equation has a solution. As arguments the function
// gets the coefficients a, b, c and two pointers to the solutions (why?).Write a main function that takes the
// coefficients a, b, c and returns the real solutions of the associated quadratic equation.
//============================================================================
#include <string>
#include <iostream>
#include <cmath>
using namespace std ;

int quadraf_ite(double da, double db, double dc, double *dL1, double *dL2)
{
double delta = pow(db,2) - 4*da*dc ;
if (delta < 0)
	{
	cout << "Schade! Es gibt keine Lösung!" <<endl ;
	}
else
	{
	cout << "Die Gleichung hat Lösung(en). "<<endl;
	*dL1 = (-db + sqrt(delta))/(2*da) ;
	*dL2 = (-db - sqrt(delta))/(2*da) ;
	cout << "Löung 1 :" << *dL1 <<endl ;
	cout << "Löung 2 :" << *dL2 <<endl ;
	}
return 0;
}

int main()
{
string a0,b0,c0 ;
double  *dLoe1, *dLoe2 ;
cout << "Bitte hier a,b und c nach Reihenfolge eingeben:" <<endl;
double a,b,c;
std::cin >> a >>b>>c;
quadraf_ite(a,b,c,dLoe1,dLoe2) ;
return 0;
}
