#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int _value) : value(_value << this->bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _value) :
	value(roundf(_value * (1 << this->bits))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : value(obj.value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& obj) {
	std::cout << "Assignation operator called" << std::endl;
	this->value = obj.value;
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

int Fixed::getRawBits(void) const {
	// std::cout << "getRawBits: ";
	return this->value;
}

void Fixed::setRawBits(int const value) {
	// std::cout << "setRawBits: " << value << std::endl;;
	this->value = value;
}

float Fixed::toFloat(void) const {
	float value_f = (float)this->value / (1 << this->bits);
	return value_f;
}

int Fixed::toInt(void) const {
	int value_int = this->value >> this->bits;
	return value_int;
}