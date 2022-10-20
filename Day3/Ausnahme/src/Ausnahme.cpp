//============================================================================
// Name        : Ausnahme.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Ausnahme(Exceptions)
//
//Create a new project and copy the read_file method from the previous task into
//the new project. This method should now be expanded to include the following
//functionalities:
//a) Add a nofileException class that derives from exception and overrides the
//   virtual const char* what() const throw method. The method should be overridden
//   in such a way that it returns the error message: "The file does not exist".
//   Also create an object of the class directly. Listing 80 shows the procedure.
//b) If a file cannot be opened, the fail bit (fstream::fail()) is set when
//   fstream::open(...) is called. Modify the read_file(...) method so that it
//   throws the created object of type nofileException if the file cannot be opened.
//c) In the main function, call the read_file method. Add Then add a try-catch
//   block that catches exceptions (as in Listing 80) and prints the what() method
//   to the console if an error occurs in read_file.
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <fstream>
#include "EException.h"

void read_file(string Dateiname)
{
ifstream Zeile;
string str;
Zeile.open(Dateiname,ios::in);

if(Zeile.is_open())
{
	while (!Zeile.eof())
	{
	getline(Zeile, str);
	cout<< str <<endl;
	}
}
else
{
	if (Zeile.fail()) {throw nofileException{};}
	cout << "error! kein Öffnen!"<<endl;}
Zeile.close();
}

int main()
{
try
{
read_file("tangshi.txt");
}
catch (nofileException& e)
{
	cout<< e.waht()<<endl;
}
return 0;
}






