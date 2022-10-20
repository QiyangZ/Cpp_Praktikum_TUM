//============================================================================
// Name        : Bubblesort.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : bubble sort
//
// When working with lists, you often need sorting algorithms. Find out how the
// Bubblesort algorithm works on the internet and
// a) Then implement a function that orders a one-dimensional int array. The array
//   and the size are passed as parameters.
// b) Write a main function that creates an int array of size 32 on the heap
//   (dynamic memory management), fills it with random numbers (see note above)
//   and sorts it using the function implemented in a).
// c) Think about the efficiency of this sorting algorithm.
//============================================================================

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
int *array = new int[32];
srand(time(nullptr));
for (int i = 0; i<32 ; i++)
{
array[i] = rand() % 100;
}

int temp;
for (int i=0; i<31 ; i++)
{
	for (int j=0; j< 31-i; j++)
	{
		if( array[j] > array [j+1])
		{
			temp = array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
}

cout << "Die Ergibnisse ist: "<<endl;
for (int k=0; k<31; k++)
{
cout << array[k]<<",";
}
return 0;
}
