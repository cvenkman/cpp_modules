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
	Fixed operator+ (const Fixed& obj);
	Fixed operator- (const Fixed& obj);
	Fixed operator* (const Fixed& obj);
	Fixed operator/ (const Fixed& obj);

	Fixed& operator-- ();
	Fixed& operator++ ();
	Fixed operator++(int);
	Fixed operator--(int);

	bool operator== (const Fixed& obj);
	bool operator!= (const Fixed& obj);
	bool operator> (const Fixed& obj);
	bool operator< (const Fixed& obj);
	bool operator>= (const Fixed& obj);
	bool operator<= (const Fixed& obj);

	bool operator== (const Fixed& obj)	const;
	bool operator!= (const Fixed& obj)	const;
	bool operator> (const Fixed& obj)	const;
	bool operator< (const Fixed& obj)	const;
	bool operator>= (const Fixed& obj)	const;
	bool operator<= (const Fixed& obj)	const;

	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	static const Fixed& max (Fixed const& first, Fixed const& second);
	static const Fixed& min (Fixed const& first, Fixed const& second);

private:
	int value;
	static const int bits;
};

std::ostream& operator<<(std::ostream &out, const Fixed &obj);

#endif