//============================================================================
// Name        : PosEstimation.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "PosEstimation.h"

PosEstimation::PosEstimation()
{
x[0] = 0;
x[1] = 0;
x[2] = 0;
dVelAverage = 0;
}

void PosEstimation::PredictPosition(double dSpeedR, double dSpeedL, double dTimestep)
{
x[0] = x[0] + dVelAverage*dTimestep*cos(x[2]);
x[1] = x[1] + dVelAverage*dTimestep*sin(x[2]);
x[2] = x[2] + dTimestep*(dSpeedR - dSpeedL)/0.3;
x[2] = fmod(x[2],2*M_PI);
dVelAverage = (dSpeedR + dSpeedL)/2;
}

double* PosEstimation::GetPosition()
{
return &x[0];
}

void PosEstimation::Reset()
{
x[0] = 0;
x[1] = 0;
x[2] = 0;
dVelAverage = 0;
}









