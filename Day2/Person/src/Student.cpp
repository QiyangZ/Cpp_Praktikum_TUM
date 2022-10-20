/*
 * Student.cpp
 *
 *  Created on: 30.09.2022
 *      Author: pi
 */

#include <iostream>
using namespace std;

#include <string>
using namespace std;
#include "Person.h"
#include "Student.h"


Student::Student(string sName, string sSurname, int iAge, unsigned uiStudentID):Person(sName,  sSurname,  iAge)
{
//m_sName = sName;
//m_sSurname = sSurname;
//m_iAge = iAge;
m_uiStudentID = uiStudentID;
}

Student::~Student()
{/***/}

unsigned int Student::getStudentID()
{
return m_uiStudentID;
}

string Student::getName()
{
cout<< "Student: ";

return Person::getName();
}

