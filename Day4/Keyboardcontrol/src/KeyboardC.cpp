//============================================================================
// Name        : Keyboardcontrol.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "KeyboardC.h"
#include "ncurses.h"
#include <string>
#include "PIDController.h"

KeyboardControl* KeyboardControl::transferPointer;

KeyboardControl::KeyboardControl():
		pL(500.0,1850.0,0.0,0.04), pR(500.0,1850.0,0.0,0.04)
{
m_sollspeeds[0] = 0;
m_sollspeeds[1] = 0;
iMicros[0] = 1500;
iMicros[1] = 1500;
transferPointer = this;
schnittstelle.Initialize(0.04,transferFunction);
}

KeyboardControl::~KeyboardControl(){}


void KeyboardControl::Communicate()
{
  sigprocmask(SIG_UNBLOCK, &schnittstelle.mask, nullptr);

//Initialisierung:
	initscr();
	nodelay(stdscr,TRUE);
	noecho();

	char chZeichen =getch();
	while(chZeichen != 'q')
	{
	chZeichen = getch();
	if (chZeichen != -1)
	{
		switch(chZeichen)
		{
		case 'w':
			m_sollspeeds[0] += 0.01;
			m_sollspeeds[1] += 0.01;
			for (int i=0; i<2 ; i++)
			{
			if (m_sollspeeds[i]>0.5)
			{m_sollspeeds[i] = 0.5;}
			}
			break;

		case 's':
			m_sollspeeds[0] -= 0.01;
			m_sollspeeds[1] -= 0.01;
			for (int i=0; i<2 ; i++)
			{
			if (m_sollspeeds[i]< -0.5)
			{m_sollspeeds[i] = -0.5;}
			}
			break;

		case 'a':
			m_sollspeeds[0] += 0.005;
			m_sollspeeds[1] -= 0.005;
			if (m_sollspeeds[0] > 0.5)
				{m_sollspeeds[0]=0.5;}
			if (m_sollspeeds[1] < -0.5)
				{m_sollspeeds[1]= -0.5;}
			break;

		case 'd':
			m_sollspeeds[0] -= 0.005;
			m_sollspeeds[1] += 0.005;
			if (m_sollspeeds[0] < -0.5)
				{m_sollspeeds[0]= -0.5;}
			if (m_sollspeeds[1] > 0.5)
				{m_sollspeeds[1]= 0.5;}
			break;

		case 'b':
			m_sollspeeds[0] = 0;
			m_sollspeeds[1] = 0;
			break;

		case 'q':
//			m_sollspeeds[0] = 0;
//			m_sollspeeds[1] = 0;
			break;

		}

	}

	clear();
	printw("SollGeschw. ist: %f %f \n", m_sollspeeds[0], m_sollspeeds[1]);


	}
	m_sollspeeds[0] = 0;
	m_sollspeeds[1] = 0;
	printw("SollGeschw. ist: %f %f . Wagen haelt.", m_sollspeeds[0], m_sollspeeds[1]);
	sigprocmask(SIG_BLOCK, &schnittstelle.mask, nullptr);

	while (1)
	{
		if (m_istspeeds[0] != 0 || m_istspeeds[1] != 0)
		{
			m_sollspeeds[0] = 0;
			m_sollspeeds[1] = 0;
		}
		else
		{break;}
	}

	endwin();
//	sigprocmask(SIG_BLOCK, &schnittstelle.mask, nullptr);

}


void KeyboardControl::Step()
{
double* pdInput = schnittstelle.GetInput();
m_istspeeds[0] = pdInput[0];
m_istspeeds[1] = pdInput[1];

//iMicros[0] = (m_istspeeds[0] + 0.5) * 1000 + 1000;
//iMicros[1] = (m_istspeeds[1] + 0.5) * 1000 + 1000;
pL.CauculateU(m_sollspeeds[0],m_istspeeds[0]);
pR.CauculateU(m_sollspeeds[1],m_istspeeds[1]);

	iMicros[0]=int(1500+pL.getU());
	iMicros[1]=int (1500+pR.getU());
	if(iMicros[0]>2000){iMicros[0]=2000;}
	if(iMicros[1]>2000){iMicros[1]=2000;}
	if(iMicros[0]<1000){iMicros[0]=1000;}
	if(iMicros[0]<1000){iMicros[0]=1000;}
schnittstelle.SetOutputs(iMicros);
}

void KeyboardControl::transferFunction()
{
transferPointer -> 	Step();
}







