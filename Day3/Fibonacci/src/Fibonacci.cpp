//============================================================================
// Name        : Fibonacci.cpp
// Author      : Qiyang
// Version     :
// Copyright   : Your copyright notice
// Description : Fibonacci
//
//a) Write a function that calculates the nth term of the Fibonacci sequence for
//   a given n.
//b) Output the first 15 terms of the Fibonacci sequence in the console (e.g.
//   using a for loop).
//============================================================================

#include <iostream>
using namespace std;

int Fibonacci(int a)
{
if (a<2)
{
	return a;
}
else
{return Fibonacci(a-1)+Fibonacci(a-2);}
}

int main()
{
cout << "die ersten 15 Glieder der Fibonacci-Folge: "<<endl;
for (int i=15;i>=1;i--)
{
cout << Fibonacci(i) <<"  ";
}
return 0;
}
