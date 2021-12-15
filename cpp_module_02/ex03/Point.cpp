#include "Point.hpp"

Point::Point() : x(0), y(0) {}
Point::Point(const float _x, const float _y) : x(_x), y(_y) {}
Point::Point(const Point &obj) : x(obj.x), y(obj.y) {}
Point::~Point() {}

const Fixed& Point::getX() {return this->x; }
const Fixed& Point::getY() {return this->y; }

const Fixed& Point::getX() const {return this->x; }
const Fixed& Point::getY() const {return this->y; }

Point& Point::operator= (const Point& obj) {
	const_cast<Fixed &>(this->x) = getX();
	const_cast<Fixed &>(this->y) = getY();
	return *this;
}

bool Point::operator== (const Point& obj) {
	return ((this->x == obj.x) && (this->y == obj.y));
}

bool Point::operator== (const Point& obj) const {
	return ((this->x == obj.x) && (this->y == obj.y));
}
