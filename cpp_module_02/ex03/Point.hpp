#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <string>
#include "Fixed.hpp"

class Point {
public:
	Point();
	Point(int _value);
	Point(const float _value);
	Point(const Point &obj);
	~Point();

private:
	Fixed const x;
	Fixed const y;
};

#endif