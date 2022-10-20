//============================================================================
// Name        : Vererbung.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include <string>
using namespace std;
#include "Person.h"
#include "Student.h"

Person::Person(string sName, string sSurname, int iAge)
{
m_sName =	sName;
m_sSurname = sSurname;
m_iAge = iAge;
}

Person::~Person()
{/***/}

string Person::getName()
{
return m_sName;
}

string Person::getSurname()
{
return m_sSurname;
}

int Person::getAge()
{
return m_iAge;
}

bool Person::setAge(int iAge)
{
m_iAge = iAge;
return true;
}




