//============================================================================
// Name        : Datum.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Datum.h"

Date::Date()
{
//	srand(time(nullptr));
	m_month = rand() % 12 + 1 ;
	m_year = rand() % 61 + 1970 ;
	if (m_month == 4 || m_month == 6 || m_month == 9 || m_month == 11 )
	{
		m_day = rand() % 30+1 ;
	}
	else if(m_month == 2)
	{m_day = rand() % 29+1;}
	else
	{
		m_day = rand() % 31+1 ;
	}
}
Date::Date(int id, int im, int iy)
{
	m_day = id;
	m_month = im;
	m_year = iy;
}

Date::~Date(){}
bool Date::isEqual(Date dd)
{
	if(m_day==dd.m_day && m_month==dd.m_month && m_year==dd.m_year)
	{return true;}
	else
	{return false;}
}

int Date::getDay()
{
 return m_day;
}

int Date::getMonth()
{
return m_month;
}

int Date::getYear()
{
return m_year;
}

int Date::compare(Date someday)
{
if (m_year <= someday.m_year )
{
if(m_year == someday.m_year)
{
if (m_month <= someday.m_month)
{
if(m_month == someday.m_month)
{
if (m_day <= someday.m_day)
{
if (m_day == someday.m_day)
{return 0;}
else  {return 1;}
}
else  {return -1;}
}
else  {return 1;}
}
else  {return -1;}
}
else  {return 1;}
}
else  {return -1;}
}

void Date::printday()
{
cout << m_day << "."<<m_month << "."<<m_year <<endl ;
}






