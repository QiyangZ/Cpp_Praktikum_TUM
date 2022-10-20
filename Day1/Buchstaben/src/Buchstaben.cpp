//============================================================================
// Name        : Buchstaben.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : letter and word
//
// According to a sruevy by the Uinevsrtiy of Cmarbdige, lteetrs can be ordered
// arbitrarily in words. It is ipmroatnt  that the first and last letters of the
// word are in the correct positions. The remaining letter positions can be
// sorted arbitrarily without affecting people's reading. That's the way it is,
// because the human barin deosn't raed  eevry snilge lteetr, but rtaehr the lteetr as a wohle.
//
// a) Write a function that changes the order of the letters in a given word
//    according to the scheme of the text above. Two adjacent letters should always
//    be exchanged (example -> beep rope).
// b) Another phenomenon is that many words in German can also be read without
//    vowels. Write another function that removes all vowels from a word.
// c) Write a main function that reads in words from the user and prints them
//    once with the letter order reversed and once without the vowels.
//========================================================================

#include <iostream>
#include <string>
using namespace std ;

int reihenf_ite(string s1)
{
int len1 = s1.length() ;
if (len1 % 2 == 0)
{
	for (int i = 1; i<= len1 - 2; i = i+2){
		char a = s1[i+1] ;
		s1[i+1] = s1[i] ;
		s1[i] = a;}
}
	else
	{
		for (int i = 1; i<= len1 - 4; i = i+2){
			char a = s1[i+1] ;
			s1[i+1] = s1[i] ;
			s1[i] = a;}
	}
cout << s1 <<endl;
return 0 ;
}

int word_ite(string s2)
{
string str = "aeiou" ;

for (int i = 0; i < 5; i++)
{
	while (s2.find(str[i]) < s2.length())
	{
		int pos = s2.find(str[i]) ;
			s2 = s2.erase(pos, 1) ;
	}
}

cout << s2 <<endl;
return 0 ;
}

int main()
{
string wort ;
cout << "Bitte ein Wort eingeben : \n" ;
cin >> wort;
reihenf_ite(wort) ;
word_ite(wort) ;
return 0 ;
}
