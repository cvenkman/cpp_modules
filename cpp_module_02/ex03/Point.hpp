#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(const float _x, const float _y);
	Point(const Point &obj);
	~Point();
	Point& operator= (const Point& obj);

	bool operator== (const Point& obj)	const;
	bool operator== (const Point& obj);

	const Fixed& getX();
	const Fixed& getY();

	const Fixed& getX()	const;
	const Fixed& getY()	const;

private:
	Fixed const x;
	Fixed const y;
};

bool bsp(
	Point const a, Point const b, Point const c, Point const point);

#endif