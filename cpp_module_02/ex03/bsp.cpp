#include "Point.hpp"

bool bsp(
	Point const a, Point const b, Point const c, Point const point) {
	if ((a == b) || (b == c) || (a == c)) {
		std::cout << "err" << std::endl;
		exit(1);
	}
	// (x1-x0)*(y2-y1)-(x2-x1)*(y1-y0)
	// (x2-x0)*(y3-y2)-(x3-x2)*(y2-y0)
	// (x3-x0)*(y1-y3)-(x1-x3)*(y3-y0)
	Fixed vector1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	Fixed vector2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	Fixed vector3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	// std::cout << vector1 << " " << vector2 << " " << vector3 << std::endl;
	if (vector1 < 0 && vector2 < 0 && vector3 < 0)
		return true;
	if (vector1 > 0 && vector2 > 0 && vector3 > 0)
		return true;
	return false;
}
