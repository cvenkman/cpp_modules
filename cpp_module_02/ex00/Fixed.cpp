#include "Fixed.hpp"

const int Fixed::fractional = 8;

Fixed::Fixed() : raw(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : raw(obj.raw) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator= (const Fixed& obj) {
	std::cout << "Assignation operator called" << std::endl;
	this->raw = obj.raw;
	return *this;
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits: ";
	return this->raw;
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits: " << raw << std::endl;;
	this->raw = raw;
}