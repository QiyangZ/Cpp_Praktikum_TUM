//============================================================================
// Name        : VirtuelleM.cpp
// Author      : Qiyang
// Version     :
// Copyright   : Your copyright notice
// Description : Virtual method
//
//
//For this task, use the already implemented Person and Student classes.
//a) Declare several pointers to Person.
//b) Assign dynamically created objects of class Student to these pointers.
//   In a main function, print the properties of the objects to the console.
//c) Now implement the methods of the classes in such a way that the student
//   objects use your overridden method. Output the objects to the console again.
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include "Person.h"
#include "Student.h"

int main()
{
Person* pLi[2];
Person p1;
Person p2("Benjamin","Herrmann", 26);

pLi[0] = &p1;
pLi[1] = &p2;
string a = pLi[0] -> getName();
string b = pLi[1] -> getName();
cout <<a <<endl;
cout << b << endl;

Person* pStudent = new Student("Anran", "Zhang", 25, 658097);
cout<<pStudent ->getName();


return 0;
}

