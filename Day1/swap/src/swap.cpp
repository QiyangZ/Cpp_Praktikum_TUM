//============================================================================
// Name        : swap.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Reference
// Implement a function with the following signature:
// void swap (<transfer parameter 1>, <transfer parameter 2>).
// This function should exchange the values of the passed parameters. Use references
// for implementation. Test the function by initializing two int variables in a main
// function and then swapping their values.
//============================================================================

#include <iostream>
using namespace std;

void swap (int& ubpa1, int& ubpa2)
{
int a;
a = ubpa1;
ubpa1 = ubpa2 ;
ubpa2 = a;
}

int main()
{
int x=3, y=4;
swap(x,y);
cout <<"x="<< x << "\n"<<"y="<< y <<endl;
return 0;
}
