/*
 * main.cpp
 *
 *  Created on: 29.09.2022
 *      Author: Qiyang
 */
//Description: Class Vehicle
//a) Create a vehicle class that represents a vehicle. Each vehicle has a
//   color (Blue, Red, Green, White, Black). Use an enumeration to represent the color.
//   The enumeration should belong to the vehicle class, i.e. it is defined in
//   this class. It is important that the enumeration is defined as the first element
//   of the class so that subsequent methods can access it and that it is declared public
//   so that it can also be used from outside the class (e.g. for the constructor).
//   In addition, each vehicle has a price and a year of manufacture. In addition, each
//   vehicle can be identified by an automatically generated, unique number. Think
//   of appropriate data types for the properties. All properties are passed during
//   initialization and must be able to be queried. The color of the vehicle should be
//   output as a string.
//b) Add a static get() function to the class isOldtimer(...) that returns for a given
//   vehicle whether it was built before 1980. Test the class in a main() function.




#include <iostream>
#include "Fahrzeuge.h"
using namespace std;

int main()
{
Veihcle qq;
qq.setcol(Veihcle::Blau);
qq.setbauj(1978);
qq.setpreis(2999.99);
qq.setid();
cout<< Veihcle::getisOldertimer(qq)<<endl;
//cout << qq.car_color <<'\n'<<qq.bauj<<'\n'<<qq.Preis<<'\n'<<qq.idNummer<<endl;
return 0;
}


