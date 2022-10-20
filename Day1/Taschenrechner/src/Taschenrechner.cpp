//============================================================================
// Name        : Taschenrechner.cpp
// Author      : QIyang ZOng
// Version     :
// Copyright   : Your copyright notice
// Description : Taschenrechner

// In the following, a pocket cauculator is to be created that can perform
// four basic arithmetic operations. The cauculator works according to the
// following principle: reading in the first number, then the operator for
// the type of calculation, and then the  second number. Watch out for decimal
// numbers and illegal arithmetic operations.

// a) Write a program that reads a number entered by the user and checks it for
//    validity. If the input is invalid, the user should be given the opportunity
//    to re-enter a value.
// b) Next, the operator is read. Use the char data type to read an operator
//    (+, –, *, /). Take incorrect entries into account.
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
 char op;
 float a, b; // Datentyp definieren

 cout << "Bitten Sie die erste Nummer geben: \n";
 cin >> a;
 while(cin.fail())
 {
 cout << "Falscheingabe: Bitte eine Nummer eingeben"<<endl;
 cin.clear();
 cin.ignore(1000,'\n');
 cin >> a;
 }

 cout << "Bitte Operator eingeben: \n";
 cin >> op ;
 while(std::cin.fail())
 {
 cout << "Falscheingabe: Bitte ein richtig Operator eingeben"<<endl;
 cin.clear();
 cin.ignore(1000,'\n');
 cin >> op;
 }


 cout << "Bitten Sie die zweite Nummer geben: \n";
  cin >> b;
  while(cin.fail())
  {
  cout << "Falscheingabe: Bitte eine Nummer eingeben"<<endl;
  cin.clear();
  cin.ignore(1000,'\n');
  cin >> b;
  }

  switch (op)
  {
  case '+':
   cout << a + b ;
   break;

  case '-':
     cout << a - b ;
     break;

  case '*':
     cout << a * b ;
     break;

  case '/':
	 if (b == 0)
	 {
	cout << "Error! Bitte ein kein-0 Nummer eingeben:";
	cin >> b;
	cout << a / b;
	 }
	 else{
	cout << a / b ;
	 }

     break;
  default:
   cout << "Error! Bitte richtigen Operator eingeben." ;
  }



 return 0;
}
