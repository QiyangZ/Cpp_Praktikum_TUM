/*
 * Person.h
 *
 *  Created on: 30.09.2022
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
Person(string sName, string sSurname, int iAge);
~Person();
string getName();
string getSurname();
int getAge();
bool setAge(int iAge);
};



#endif /* PERSON_H_ */
