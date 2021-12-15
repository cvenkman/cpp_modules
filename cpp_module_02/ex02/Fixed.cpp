#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int _value) : value(_value << this->bits) {
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float _value) :
	value(roundf(_value * (1 << this->bits))) {
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj) : value(obj.value) {
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const {
	return this->value;
}

void Fixed::setRawBits(int const value) {
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

Fixed& Fixed::operator= (const Fixed& obj) {
	// std::cout << "Assignation operator called" << std::endl;
	this->value = obj.value;
	return *this;
}

std::ostream& operator<< (std::ostream &out, const Fixed &obj) {
	out << obj.toFloat();
	return out;
}

Fixed Fixed::operator+ (const Fixed& obj) {
	Fixed val;
	val.setRawBits(value + obj.value);
	return val;
}

Fixed Fixed::operator- (const Fixed& obj) {
	Fixed val;
	val.setRawBits(value - obj.value);
	return val;
}

Fixed Fixed::operator* (const Fixed& obj) {
	Fixed tmp(this->toFloat() * obj.toFloat());
	return tmp;
}

Fixed Fixed::operator/ (const Fixed& obj) {
	Fixed tmp(this->toFloat() / obj.toFloat());
	return tmp;
}

Fixed& Fixed::operator-- () {
	// this->value -= (1 << bits);
	this->value--;
	return *this;
}

Fixed& Fixed::operator++ () {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed	tmp;
	tmp = *this;
	this->value++;
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed	tmp;
	tmp = *this;
	this->value--;
	return tmp;
}

bool Fixed::operator== (const Fixed& obj) {
	return (this->value == obj.value);
}

bool Fixed::operator!= (const Fixed& obj) {
	return (this->value != obj.value);
}

bool Fixed::operator> (const Fixed& obj) {
	return (this->value > obj.value);
}

bool Fixed::operator< (const Fixed& obj) {
	return (this->value < obj.value);
}

bool Fixed::operator>= (const Fixed& obj) {
	return (this->value >= obj.value);
}

bool Fixed::operator<= (const Fixed& obj) {
	return (this->value <= obj.value);
}

static Fixed& max(const Fixed& first, const Fixed& second) {
	
}

static Fixed& min(const Fixed& first, const Fixed& second) {
	
}