//============================================================================
// Name        : Datei.cpp
// Author      : Qiyang
// Version     :
// Copyright   : Your copyright notice
// Description : Reading and writing files
//
//Write a program that can read or write a text file. To do this, follow these steps:
//a) Write a function read_file(string filename) that does the opens the transferred
//   file and reads it out line by line. Each line should be output to the console.
//   If the file has been read to the end, it is closed again.
//b) Write a function write_file(string filename) that does the opens the passed file
//   for writing in such a way that the text is appended to the end of the file. The
//   user should then be able to enter line by line into the console, which the
//   function appends to the file. With the exit command, writing to the file is to be
//   terminated and the function is to be exited.
//c) Create a text file (.txt) in the project folder and fill it with any text. Write
//   a main function that reads in a filename from the user.The content of the file
//   is output to the console. The user is then given the opportunity to append new
//   text to the file. Finally, the file is output to the console again.
//
//============================================================================

#include <iostream>
using namespace std;
#include <string>
#include <fstream>

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
{cout << "error! kein Öffnen!"<<endl;}
Zeile.close();
}

int write_file(string Dateiname2)
{
ofstream Zeile2;
string sInp = "1";
Zeile2.open(Dateiname2,ios::out|ios::ate|ios::app);
if(Zeile2.is_open())
{
int c = 1;
//while um zu überprüfen, ob ein exit eingegeben wird
//Zeile2 << '\n';
while (c == 1)
{
	cout<< "Bitte einen Satz eingeben:";
	cin >> sInp;
	int com = sInp.compare("exit");
	if (com == 0) {break;}
	Zeile2 << sInp <<endl;

}

//wenn "exit", Datei schließen, Funktion verlassen
Zeile2.close();
return 0;
}

else

{
cout << "error! kein Öffnen!"<<endl;
return 0;
}

}

int main()
{
string a; int b;
cout<< "Bitte eine volle Dateiname eingeben:"<<endl;
cin>> a;
read_file(a);
cout<<"Wollen Sie neuen Text eingeben? 1-Ja, 2-Nein :"<<endl;
cin>>b;
if(b == 1)
{
write_file(a);
read_file(a);
}
else {return 0;}

return 0;
}







