//============================================================================
// Name        : Maya_Zahlen.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Maya_Zahlen
// The Maya number system was used to provide sometimes very large numbers for
// calendar information and calculations. The counting method was not based on
// the decimal system familiar to us (system of ten), but on the Vigesimal system
// (system of twenties).
// Write a program that reads any number from the system of ten, then converts
// and outputs it to the Maya number system. (Note: You can use the Modulo operator: %) Example:
// Number in system of ten: 440 (4*10^2 + 4*10^1 + 0*10^0)
// number in system of twenty: 120 (1*20^2 + 2*20^1 + 0*20^0)
// example output:
// 0
// 2
// 1 (from bottom to top: 120)
//============================================================================

#include <iostream>
using namespace std;

int main() {
 int num_zeh, rest;

 cout << "Bitte eine Nummer in Zehnersystem eingeben: \n" ;
std::cin>> num_zeh;

 cout << "Maya Zahlen ist : \n" ;

 while (num_zeh >= 20)
  {
   rest = num_zeh % 20 ;
   cout << rest <<endl;
   num_zeh = num_zeh / 20 ;
  }
 cout << num_zeh ;
 return 0;
}
