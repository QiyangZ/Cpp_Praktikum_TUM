//============================================================================
// Name        : Palindrome.cpp
// Author      : Qiyang Zong
// Version     :
// Copyright   : Your copyright notice
// Description : Palindrome
// Task: palindromes
// A palindrome is a word that reads the same from the right as from the left,
// such as the word "rotor".
//
// a) Create a function that tests whether a given word is a palindrome. Only
//    lowercase words need to be considered. The [] operator can be used to compare
//    single characters. (Note that the return value of [] is of type char.)
// b) Write a program that reads a word and returns whether it is a palindrome.
//========================================================================
#include <iostream>
#include <string>
using namespace std;

int palindr_ungra( string s1 )
{
	int len1, i=1 ;
	len1 = s1.length() ;
	while (s1 [(len1 + 1)/2 - i - 1] == s1 [(len1 + 1)/2 + i - 1]){
		i++ ;
		if (i <= (len1 + 1)/2 ){
			cout << "loading... \n"  ;
		}
		else
		{break ;}
	}

	if (i <= (len1 + 1)/2 ){
		cout << "Das ist kein Palindrome!" ;
	}
	else {
		cout << "Das ist ein Palindrome!" ;
	}


	return 0 ;
}

int palindr_gra(string s2)
{
	int len2, i=1 ;
	len2 = s2.length() ;
	while (s2 [len2/2 - i] == s2 [len2/2 + i - 1]){
		i++ ;
		if (i <= len2 /2 ){
			cout << "loading... \n" ;
		}
		else
		{break ;}
	}
	if (i <= len2/2 ){
			cout << "Das ist kein Palindrome!" ;
		}
		else {
			cout << "Das ist ein Palindrome!" ;
		}

	return 0 ;
}

int main()
{
	string s0 ;
	int j ;
	cout << "Bitte ein Wöter geben: \n" ;
	cin >> s0 ;
	j = s0.length() ;
	if (j % 2){
		palindr_ungra(s0) ;
	}
	else{
		palindr_gra(s0) ;
	}
	return 0;
}
