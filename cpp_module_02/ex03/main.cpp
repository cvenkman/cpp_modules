#include "Point.hpp"

int main() {
	{
		Point a(1, 1);
		Point b(2, 3.5);
		Point c(3.7, 1.5);
		Point point(3, 2);
		std::cout << "point is inside of a triangle: " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point a(1, 1);
		Point b(2, 3.5);
		Point c(3.7, 1.5);
		Point point(3, 3.5);
		std::cout << "not inside a triangle: " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point a(1, 1);
		Point b(2, 3.5);
		Point c(3.7, 1.5);
		Point point(2, 3.5);
		std::cout << "point is a vertex: " << bsp(a, b, c, point) << std::endl;
	}
	{
		Point a(5, 0.5);
		Point b(7, 0.5);
		Point c(6.5, 2.5);
		Point point(6, 0.5);
		std::cout << "point that is on the edge: " << bsp(a, b, c, point) << std::endl;
	}
}
