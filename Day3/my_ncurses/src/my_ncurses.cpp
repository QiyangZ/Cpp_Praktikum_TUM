//============================================================================
// Name        : my_ncurses.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : using of ncurses
//Attention please! To run ncurses, you must add nucurses in Libraries first. And
//then run the program in the terminal with using a same-named file in "De-
//bug".
//
//a) Create a new project in Eclipse and include ncurses in this project.
//b) Create a program that interacts with the user via ncurses. The user enters
//   multiple characters in a loop, which are stored in a doubly-linked list.
//   When the user enters a character, the previous output in the console is cleared,
//   the character is stored in the list, and then displayed on the console.
//   If the user does not enter a character, nothing happens. Input (and thus
//   ncurses) is terminated on typing 'q' and the list is written back to front
//   on standard output.
//============================================================================

#include <iostream>
#include "ncurses.h"
#include <list>
#include <string>

void printlist(std::list<char>* ptr)
{
std::list<char>::iterator itr;

for (itr = (*ptr).end(); itr != (*ptr).begin(); itr--)
{std::cout<<(*itr)<< ' '; }

}

int main()
{
std::list<char> my_ncu;
initscr();
nodelay(stdscr,TRUE);
noecho();

char chZeichen = 'A';
while(chZeichen != 'q')
{
chZeichen = getch();
if (chZeichen != -1)
{
clear();
my_ncu.push_back(chZeichen);
printw("Eingabe ist: %c",chZeichen);
}

}
endwin();

printlist(&my_ncu);
return 0;
}


