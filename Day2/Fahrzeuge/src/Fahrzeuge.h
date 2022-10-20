/*
 * Fahrzeuge.h
 *
 *  Created on: 29.09.2022
 *      Author: pi
 */

#ifndef FAHRZEUGE_H_
#define FAHRZEUGE_H_
#include <string>
using namespace std;
class Veihcle
{
private:
	string car_color;
	int bauj;
	float Preis;
	static int idNummer;

public:
	int m_id;
	enum color_set {Blau, Rot, Gruen, Weiss, Schwarz} ;
//	color_set color;
	Veihcle();
	void setcol(Veihcle::color_set color);
	void setbauj(int a);
	void setpreis(float yuan);
	void setid();
	static bool getisOldertimer(Veihcle xx);

};



#endif /* FAHRZEUGE_H_ */
