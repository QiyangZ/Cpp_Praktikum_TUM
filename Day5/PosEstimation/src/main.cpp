/*
 * main.cpp
 *
 *  Created on: 06.10.2022
 *      Author: pi
 */
#include <iostream>
using namespace std;
#include "PosEstimation.h"
#include <string>
#include <fstream>

void read_file(string Dateiname)
{
ifstream PoEsInput;
string line;
PosEstimation obj;
double vrechts[100];
double vlinks[100];
double timestep[100];
PoEsInput.open(Dateiname,ios::in);
if (PoEsInput.is_open())
{
	int i = 0;
	while (!PoEsInput.eof())
	{
		getline(PoEsInput,line);
		PoEsInput>>vrechts[i]>>vlinks[i]>>timestep[i];
		double dR = vrechts[i];
		double dL = vlinks[i];
		double dT = timestep[i];
		obj.PredictPosition(dR,dL,dT);
		cout<<*(obj.GetPosition())<<" "<<*(obj.GetPosition() + 1)<< " "<<*(obj.GetPosition() + 2)<<endl;
		i++;

	}

}
else
{
cout<<"erorr! open fails!"<<endl;
}
PoEsInput.close();
}


int main()
{
read_file("PosEstimationInput.txt");
return 0;
}


