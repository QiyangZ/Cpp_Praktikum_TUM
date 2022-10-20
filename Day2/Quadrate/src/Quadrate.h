/*
 * Quadrate.h
 *
 *  Created on: 29.09.2022
 *      Author: pi
 */

#ifndef QUADRATE_H_
#define QUADRATE_H_

class Square
{
private:
	float sidelen;
	float area;
	float perimeter;

public:
	Square(float sl);
	Square(const Square& s1);
	float get_sidelen();
	float get_area();
	float get_perimeter();
//	Square operator+ (Square squ2);
//	Square operator- (Square squ3);

};



#endif /* QUADRATE_H_ */
