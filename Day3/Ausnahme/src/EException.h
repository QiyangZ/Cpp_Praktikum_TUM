/*
 * Exception.h
 *
 *  Created on: 03.10.2022
 *      Author: pi
 */

#ifndef EEXCEPTION_H_
#define EEXCEPTION_H_
#include <iostream>
#include <exception>

class nofileException : public std::exception
{
public:
	virtual const char* waht() const throw()
	{
    return "Die Datei existiert nicht";

	}
};



#endif /* EEXCEPTION_H_ */
