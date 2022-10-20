//============================================================================
// Name        : Fahrzeuge.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Fahrzeuge.h"
using namespace std;

Veihcle::Veihcle(){};
void Veihcle::setcol(Veihcle::color_set color)
{
car_color = color;
}

void Veihcle::setbauj(int a)
{
	bauj = a;
}


void Veihcle::setpreis(float yuan)
{
Preis = yuan;
}

int Veihcle::idNummer = 0;
void Veihcle::setid()
{
idNummer++;
m_id = idNummer;
}

bool Veihcle::getisOldertimer(Veihcle xx)
{
if(xx.bauj < 1980)
	return true;
else
	return false;
}

