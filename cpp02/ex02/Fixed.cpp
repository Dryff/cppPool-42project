#include "Fixed.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() :_value(0){
}

Fixed::Fixed(const int n) : _value(n << _bits) {
}

Fixed::Fixed(const float n) : _value(roundf(n * (1 << _bits))) {
}

Fixed::Fixed(const Fixed &src) {
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/


Fixed &	Fixed::operator=(Fixed const & rhs) {
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

/* INCREMENTATION/DECREMENTATION */

Fixed & Fixed::operator++(void) {
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    tmp._value = this->_value++;
    return tmp;
}

Fixed & Fixed::operator--(void) {
    --this->_value;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    tmp._value = this->_value--;
    return tmp;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}

/* COMPARISON */

bool	Fixed::operator<(Fixed const & rhs) {
    return this->_value < rhs._value;
}

bool	Fixed::operator>=(Fixed const & rhs) {
    return this->_value >= rhs._value;
}

bool	Fixed::operator>(Fixed const & rhs) {
    return this->_value > rhs._value;
}

bool	Fixed::operator<=(Fixed const & rhs) {
    return this->_value <= rhs._value;
}

bool	Fixed::operator==(Fixed const & rhs) {
    return this->_value == rhs._value;
}

bool	Fixed::operator!=(Fixed const & rhs) {
    return this->_value != rhs._value;
}

/* ARITHMETIC */

Fixed Fixed::operator+(const Fixed &rhs) {
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed &rhs) {
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed &rhs) {
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed &rhs) {
    return Fixed(this->toFloat() / rhs.toFloat());
}

/*
** --------------------------------- METHODS ----------------------------------
*/

Fixed & Fixed::min(Fixed & a, Fixed & b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

const Fixed & Fixed::min(const Fixed & a, const Fixed & b) {
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

const Fixed & Fixed::max(const Fixed & a, const Fixed & b) {
	return (a.getRawBits() > b.getRawBits() ? a : b);
}

int Fixed::getRawBits() const {
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

float Fixed::toFloat() const {
	return (float)(this->getRawBits()) / (1 << _bits);
}

int Fixed::toInt() const {
	return this->_value >> _bits;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/