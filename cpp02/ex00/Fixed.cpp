#include "Fixed.hpp"
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Fixed::Fixed() :_value(0) {
	cout << "Default constructor called" << endl;
}

Fixed::Fixed(const Fixed &src) {
	cout << "Copy constructor called" << endl;
	this->setRawBits(src.getRawBits());
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

Fixed &				Fixed::operator=(Fixed const & rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_value = rhs.getRawBits();
    return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

int Fixed::getRawBits() const {
	cout << "getRawBits member function called" << endl;
	return (this->_value);
}

void Fixed::setRawBits(int const raw) {
	this->_value = raw;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/