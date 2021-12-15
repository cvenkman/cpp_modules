#include "Fixed.hpp"

// #define increment
// #define arithmetic
// #define comparison

// int main( void ) {
// 	#ifdef arithmetic
// 	{
// 		Fixed a;
// 		Fixed b(10);
// 		Fixed c(42.42f);
// 		Fixed d(b);
// 		a = Fixed(1234.4321f);

// 		std::cout << "a is " << a << std::endl;
// 		std::cout << "b is " << b << std::endl;
// 		std::cout << "c is " << c << std::endl;
// 		std::cout << "d is " << d << std::endl << std::endl;

// 		a = a + c;
// 		std::cout << "a after a+c " << a <<
// 			" a+b " << a + b << " a+b+c " << a + b + c << std::endl;
// 		std::cout << "a-c " << a - c << " a-b " << a - b << std::endl;
// 		std::cout << "\na = " << a << "  b = " << b << std::endl;
// 		std::cout << "a*b " << a * b << std::endl;
// 		std::cout << "a/b " << a / b << std::endl;
// 	}
// 	#endif

// 	#ifdef comparison
// 	{
// 		Fixed a(1234.4321f);
// 		Fixed a_two(1234.4321f);
// 		Fixed b(123443.21f);
// 		Fixed c(1234.4321f);
// 		Fixed x(10);
// 		std::cout << "a = " << a << "  b = " << b
// 			<< " c = " << c << "  x = " << x
// 			<< "  a_two= " << a_two << std::endl;
// 		/*		==		*/
// 		if (a == c)
// 			std::cout << "a == c" << std::endl;
// 		if (a == b)
// 			std::cout << "a == b" << std::endl;
// 		/*		!=		*/
// 		if (a != x)
// 			std::cout << "a != x" << std::endl;
// 		if (a != a_two)
// 			std::cout << "a != a_two" << std::endl;
// 		/*		>	>=		*/
// 		if (a > x)
// 			std::cout << "a > x" << std::endl;
// 		if (a >= a_two)
// 			std::cout << "a >= a_two" << std::endl;
// 		/*		<	<=		*/
// 		if (x < a)
// 			std::cout << "x < a" << std::endl;
// 		if (a <= a_two)
// 			std::cout << "a <= a_two" << std::endl;
// 	}
// 	#endif

// 	#ifdef increment
// 	{
// 		Fixed a;
// 		std::cout << a << std::endl;
// 		std::cout << ++a << std::endl;
// 		std::cout << a << std::endl;
// 		std::cout << a++ << std::endl;
// 		std::cout << a << std::endl;
// 	}
// 	#endif
// 	return 0;
// }

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}