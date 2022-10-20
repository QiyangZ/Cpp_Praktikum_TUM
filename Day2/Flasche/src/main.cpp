/*
 * main.cpp
 *
 *  Created on: 28.09.2022
 *      Author: pi
 */
// Description: Class Botttle
// a) Create the Bottle class with the following contents:
// - Attributes: dVolume (double), sMaterial (string)
// b) Add a default constructor to the Bottle class.
// c) Add a get and set method for each attribute.
// d) Create the printBottle() method, which prints the attributes to the console.
// e) Implement a method adoptBottle(...) which is passed a Bottle2 and matches the
//   attributes of the original Bottle1 to those of the passed Bottle2.
// f) Create a main function in which you create two objects of the Bottle class.
//   Test all created methods.


#include "Flasche.h"

int main()
{
Flasche flasche1;
Flasche flasche2;
flasche1.setdVolumen(20.4);
flasche1.setsMatrial("metal");
flasche2.setdVolumen(50.9);
flasche2.setsMatrial("wood");
flasche1.getdVolumen();
flasche2.getsMatrial();
flasche1.printFlasche();
//flasche2.printFlasche();
flasche1.adoptFlasche(flasche2);
flasche1.printFlasche();

}


