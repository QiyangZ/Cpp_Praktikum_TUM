//============================================================================
// Name        : Liste.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Doubly linked list
//
//Doubly linked lists are very useful for holding a lot of objects. To demonstrate
//this, let's create and edit a list that can hold coordinates ((x,y) pairs).
//a) Create a struct coord containing a coordinate (an (x,y) pair) represented.
//   x and y are of type float. The struct should have a constructor that
//   initializes x and y with passed values.
//b) Create a printlist function that is passed a pointer to a list of coordinates.
//   printlist then outputs all coordinates contained in the list in the console
//   (e.g. "X: 2.0, Y: 4.6")
//c) Create a function delcoords that is passed a reference to a list of coordinates.
//   delcoords deletes from the list all coordinates whose x-value is less than
//   the y-value.
//d) Write a main function in which a list is filled with coordinates. The x and
//   y values ​​of the coordinates should be generated randomly. Give the coordinates
//   of the list and make a backup (a second list) of the first list. From the
//   first list, delete all coordinates whose x-value is smaller than y-value.
//   Then output both lists to the console and verify that the correct coordinates
//   have been deleted.
//============================================================================

#include <iostream>
using namespace std;
#include <list>
#include <cstdlib>
#include <ctime>

struct coord
{
float m_x;
float m_y;
coord(float a, float b)
{
m_x = a;
m_y = b;
}
};

void printlist(std::list<coord>* ptr)
{
std::list<coord>::iterator itr;

for (itr = (*ptr).begin(); itr != (*ptr).end(); itr++)
{cout<<"X: "<< (*itr).m_x <<" "<<"Y: " << (*itr).m_y<<"  " ; }

}

void delcoords(std::list<coord>& ref)
{
for (std::list<coord>::iterator itra = ref.begin(); itra != ref.end(); itra++)
{
if ((*itra).m_x < (*itra).m_y)
{
	itra = ref.erase(itra);
}
}
}

int main()
{
srand (time(nullptr));
std::list<coord> mylist;
for (int i=0; i<5; i++)
{
int xx = rand() % 20 + (-10);
int yy = rand() % 20 + (-10);
coord obj = coord(xx,yy);
mylist.push_back(obj);
}

//Backup:
std::list<coord> bcp = mylist;

// Liste ausgeben
printlist(&mylist);
cout<< '\n';

//delete einige Koordinaten
delcoords(mylist);
printlist(&mylist);

return 0;
}





