#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl << std::endl;
	a.setRawBits(7777);
	b.setRawBits(999);
	std::cout << std::endl << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl << std::endl;
	return 0;
}