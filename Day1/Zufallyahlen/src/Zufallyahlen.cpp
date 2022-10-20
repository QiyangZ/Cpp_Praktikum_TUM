//============================================================================
// Name        : Zufallyahlen.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
// Description : storage and arrays
// ometimes arrays with very large dimensions are required, e.g. in some scientific algorithms.
//
// The following code shows one way to create such an array.
// int main()
// {
// int iStack[100000000];
// //Algorithm…
// return 0;
// }
// a) What would happen if the program were run? How to fix the problem?
// b) Write a program that creates an array of 100000 elements in dynamic memory
// and fills it with random numbers from 0 to 100 (see hint below). Then it
// should be output how many of the generated random numbers are divisible by
// 13 without remainder. Remember to free up the array space at the end.
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int *array = new int[100000];
srand(time(nullptr));
for (int i = 0; i<100000 ; i++)
{
array[i] = rand() % 100;
}
int k = 0;
for (int j=0; j<100000; j++)
{
if (array[j] % 13 == 0	)
{k++;}
}
cout << k <<" Zufallzahlen können durch 13 ohne Rest geteilt werden."<<endl;
delete[] array;
return 0;
}

