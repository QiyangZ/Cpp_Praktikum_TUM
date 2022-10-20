/*
 * main.cpp
 *
 *  Created on: 29.09.2022
 *      Author: Qiyang
 */
// Description:
//The Date class from the previous example is incomplete and impractical.
//It should now be improved. Use the corrected Date class from the previous exercise.
//a) Add a default constructor to the class that creates a random date.
//   Make sure the date is valid. Leap years are not taken into account, a valid year is between 1970
//   and 2030. (see note on the Storage and Arrays task)
//b) Add a compare function to the class that tests whether a
//  passed date is before or after the calling date object (return value 1:
//  before, 0: equal, -1: after)
//c) Test the class and all functions in a main function. To do this, create
//  several objects of the date type, compare them with one another and have the objects displayed in the console.

#include "Datum.h"
#include <iostream>
using namespace std;

int main()
{
	srand(time(nullptr));
	Date d1,d2,d3,d4;
	Date d5(06,10,2022);
	bool a;
	a = d1.isEqual(d2);
	d1.getDay();
	d1.getMonth();
	d1.getYear();
	int aa,b,c,d;
	aa=d1.compare(d2);
	b=d2.compare(d3);
	c=d3.compare(d4);
	d=d4.compare(d1);
	cout << a<< aa << b<<c<<d<<endl;
	d1.printday();
	d2.printday();
	d3.printday();
	d4.printday();
	d5.printday();

}




