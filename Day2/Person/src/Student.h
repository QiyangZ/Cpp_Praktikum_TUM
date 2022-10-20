/*
 * Student.h
 *
 *  Created on: 30.09.2022
 *      Author: pi
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include <string>
using namespace std;
#include "Person.h"

class Student : public Person
{
private:
	unsigned int m_uiStudentID;

public:
	Student(string sName, string sSurname, int iAge, unsigned int uiStudentID);
	~Student();
	unsigned int getStudentID();
	string getName();
};



#endif /* STUDENT_H_ */
