/*
 * Flache.h
 *
 *  Created on: 28.09.2022
 *      Author: pi
 */

#ifndef FLASCHE_H_
#define FLASCHE_H_
#include <string>
using namespace std;
class Flasche
{
private:
	double dVolumen;
	string sMatrial;

public :
	Flasche();

	void setdVolumen(double dVolm);
	double getdVolumen();
	void setsMatrial(string sMatr);
	string getsMatrial();
	void printFlasche();
	void adoptFlasche(Flasche a2);
};


#endif /* FLASCHE_H_ */
