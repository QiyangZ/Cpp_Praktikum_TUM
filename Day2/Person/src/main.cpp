/*
 * main.cpp
 *
 *  Created on: 30.09.2022
 *      Author: Qiyang
 */
//Description: inheritance and overriding
//a) Create the Person class as shown in Figure 16.
//b) Create the class Student and derive it from Person, see Figure 16.
//c) Override the getName() method of the Student class so that "Student" comes before the name.
//d) Create a main function that creates an object of class Student and one of class Person.
//   Output the name of each to the console using the getName() function.
//e) Now create an object of the parent class Person and overwrite it with the object of the
//   child class Student created in d). Think about why and how this works and  which functions
//   can now be used in the Person object. Also consider whether you can also assign an object
//   from the parent class to an object from the child class.


#include <iostream>
#include "Person.h"
#include "Student.h"
#include <string>
using namespace std;

int main()
{
Person maxi("Maximilian", "Herrmann", 27);
Student qz("Qiyang", "Zong", 25, 123456);
cout << maxi.getName()<<endl;
cout << qz.getName()<<endl;

Person hr("Herr", "Lohnmann",66);
hr = qz;
cout << hr.getName()<<endl;

return 0;
}


