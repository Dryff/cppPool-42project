#include "Fixed.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() :_value(0){
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const int n) : _value( n << _bits ) {
    cout << "Int constructor called" << endl;
}

Fixed::Fixed(const float n) : _value( std::roundf( n * ( 1 << _bits ) ) ) {
    cout << "Float constructor called" << endl;
}

Fixed::Fixed(const Fixed &src) {
	cout << "Copy constructor called" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Fixed::~Fixed() {
	cout << "Destructor called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Fixed &	Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

std::ostream & operator<<( std::ostream & o, Fixed const & i ) {
    o << i.toFloat();
    return o;
}
/*
** --------------------------------- METHODS ----------------------------------
*/

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