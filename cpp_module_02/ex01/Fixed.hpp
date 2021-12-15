#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed {
public:
	Fixed();
	Fixed(int _value);
	Fixed(const float _value);
	Fixed(const Fixed &obj);
	~Fixed();
	Fixed& operator= (const Fixed& obj);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;

private:
	int value;
	static const int bits;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif