/*
 * Person.h
 *
 *  Created on: 01.10.2022
 *      Author: pi
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <string>
using namespace std;

class Person
{
private:
	string m_sName;
	string m_sSurname;
	int m_iAge;

public:
Person();
Person(string sName, string sSurname, int iAge);
~Person();
virtual string getName();
string getSurname();
int getAge();
bool setAge(int iAge);
};




#endif /* PERSON_H_ */
