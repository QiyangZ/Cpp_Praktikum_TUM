/*
 * Datum.h
 *
 *  Created on: 29.09.2022
 *      Author: pi
 */

#ifndef DATUM_H_
#define DATUM_H_

class Date
{
private:
	int m_day, m_month, m_year;

public:
	Date();
	Date(int id,int im, int iy);
	~Date();
	bool isEqual(Date dd);
	int getDay();
	int getMonth();
	int getYear();
	int compare(Date someday);
	void printday();
};



#endif /* DATUM_H_ */
