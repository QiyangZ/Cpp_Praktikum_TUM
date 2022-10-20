/*
 * main.cpp
 *
 *  Created on: 30.09.2022
 *      Author: Qiyang
 */
// Description: Squares
//In several steps, a class should be written that creates objects of the square type and allows addition,
//subtraction and the output of a square in the console. A square can be represented by the edge length.
//a) Create a square class that represents squares. A square is created by passing the edge length to the
//   constructor and can no longer be modified afterwards.
//b) The length, area and perimeter of a square can be queried. Write appropriate methods that provide
//   this functionality.
//c) Create an additional constructor that is passed a constant reference to an existing square. This then
//   creates a new square with the same edge length as the passed object.
//d) Squares should be able to be added and subtracted (here through Addition/subtraction of the edge
//   lengths). To do this, overload the + and – operators so that objects of type square can be added and
//   subtracted (for the syntax: see the section above).
//e) Overload the << operator so that objects of type square can be printed to the console. The output
//   should look something like this: Square: edge length=10, area=100, perimeter=40.



#include <iostream>
#include "Quadrate.h"
using namespace std;

Square operator+(Square& squ2,Square& squ22)
{
	Square a(squ2.get_sidelen() + squ22.get_sidelen());
return a;
}


Square operator-(Square squ3, Square squ33)
{
	Square b(squ3.get_sidelen() - squ33.get_sidelen());
return 	b;
}

 void operator<< (std::ostream &os,Square &squ4)
{
cout << "Kantenlänge =" <<squ4.get_sidelen()<<','<<"Fläche ="<<squ4.get_area()<<','<<"Umfang ="<<squ4.get_perimeter()<<endl;
}

int main()
{
Square zfx1(8),zfx2(zfx1),zfx3(10),zfx4(11.2);

Square zfx5=zfx2 + zfx3;
Square zfx6=zfx4 - zfx3;

cout<< zfx1 ;
cout<<zfx2 ;
cout<<zfx3;
cout<<zfx4;
cout<<zfx4;
cout<<zfx5;
cout<<zfx6;

return 0;
}

