/*
 * KeyboardC.h
 *
 *  Created on: 04.10.2022
 *      Author: pi
 */

#ifndef KEYBOARDC_H_
#define KEYBOARDC_H_
#include "InterfaceSIM.h"
#include "PIDController.h"

class KeyboardControl
{
public:
	KeyboardControl();
	~KeyboardControl();
	void Communicate();
	void Step();
	InterfaceSIM schnittstelle;
	static KeyboardControl* transferPointer;
	static void transferFunction();
	PIDController pL;
	PIDController pR;
//	void pFunction();
private:
	double m_sollspeeds[2];
	double m_istspeeds[2];
	int iMicros[2];
};



#endif /* KEYBOARDC_H_ */
