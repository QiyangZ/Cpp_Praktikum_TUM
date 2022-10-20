//============================================================================
// Name        : Quadrate.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Quadrate.h"

Square::Square(float sl)
{
sidelen = sl;
area = sl * sl;
perimeter = 4 * sl;
}

Square::Square(const Square& s1)
{
sidelen = s1.sidelen;
area = sidelen * sidelen;
perimeter = 4 * sidelen;
}

float Square::get_sidelen()
{
return sidelen;
}

float Square::get_area()
{
return area;
}

float Square::get_perimeter()
{
return perimeter;
}




