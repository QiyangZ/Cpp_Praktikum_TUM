//============================================================================
// Name        : Flasche.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
#include "Flasche.h"

Flasche::Flasche()
{
dVolumen = 30;
sMatrial = "hallo";
}

void Flasche::setdVolumen(double dVolm)
{
 dVolumen = dVolm;
}

double Flasche::getdVolumen()
{
return dVolumen;
}

void Flasche::setsMatrial(string sMatr)
{
sMatrial = sMatr;
}

string Flasche::getsMatrial()
{
return sMatrial;
}

void Flasche::printFlasche()
{
cout << "Das Volumen ist "	<< dVolumen<<"L."<<endl;
cout << "Die Flasche besteht aus "<< sMatrial<<"."<<endl;
}

void Flasche::adoptFlasche(Flasche a2)
{
	dVolumen = a2.dVolumen;
	sMatrial = a2.sMatrial;
}



