/*
 * Maneuver.h
 *
 *  Created on: 06.10.2022
 *      Author: pi
 */

#ifndef MANEUVER_H_
#define MANEUVER_H_
using namespace std;
#include <list>
#include <string>

class Maneuver
{
private:
	struct Coord
	{
		double dX,dY,dV;
		Coord(double x, double y, double v)
		{
			dX = x;
			dY = y;
			dV = v;
		}
	};

	list<Coord> Coordlist;
	list<Coord>::iterator iter;
	bool bIsRunning;
	double adWishSpeed[2];
	double dMaxSpeed;
	double dPosDifference;

public:
	Maneuver();
	void CalcCircle(double dRadius, double dSpeed, double dTimeStep);
	void CalcEight(double dRadius, double dSpeed, double dTimestep);
	void LogList(string sDatei);
	bool isRunning();
	void Start();
	void Stop();
	void Proceed();
	void CalcManeuverSpeed(double dX, double dY, double dW);
	double* GetManeuverSpeed();


};



#endif /* MANEUVER_H_ */
