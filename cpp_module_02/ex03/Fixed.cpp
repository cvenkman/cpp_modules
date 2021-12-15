#include "Fixed.hpp"
#include <cmath>

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {}
Fixed::Fixed(int _value) : value(_value << this->bits) {}
Fixed::Fixed(const float _value) :
	value(roundf(_value * (1 << this->bits))) {}

Fixed::Fixed(const Fixed &obj) : value(obj.value) {}
Fixed::~Fixed() {}

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

const Fixed& Fixed::operator= (const Fixed& obj) {
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

Fixed Fixed::operator- (const Fixed& obj) const {
	// return (value.toFloat())
	return value - obj.value;
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

bool Fixed::operator== (const Fixed& obj)	const{
	return (this->value == obj.value);
}

bool Fixed::operator!= (const Fixed& obj)	const{
	return (this->value != obj.value);
}

bool Fixed::operator> (const Fixed& obj)	const{
	return (this->value > obj.value);
}

bool Fixed::operator< (const Fixed& obj)	const{
	return (this->value < obj.value);
}

bool Fixed::operator>= (const Fixed& obj)	const{
	return (this->value >= obj.value);
}

bool Fixed::operator<= (const Fixed& obj)	const{
	return (this->value <= obj.value);
}

Fixed const& Fixed::max(const Fixed& first, const Fixed& second) {
	if (first >= second)
		return first;
	return second;
}

Fixed const& Fixed::min(const Fixed& first, const Fixed& second) {
	if (first <= second)
		return first;
	return second;
}
