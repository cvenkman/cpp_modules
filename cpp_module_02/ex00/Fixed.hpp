#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
	Fixed();
	Fixed(const Fixed &obj);
	~Fixed();
	Fixed& operator= (const Fixed& obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);

private:
	int raw;
	static const int fractional;
};

#endif