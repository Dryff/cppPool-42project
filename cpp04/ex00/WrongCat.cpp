#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	cout << type << " constructor called !" << endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
	cout << type << " constructor called !" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	cout << "WrongCat destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongCat::makeSound() const
{
	cout << "WrongCat makeSound called" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat&   WrongCat::operator=( const WrongCat& rhs ) {
	cout << ">WrongCat< " << rhs.type << " has been copied on "<< this->type << " with copy assignment operator." << std::endl;
	this->type = rhs.type;

	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/



/* ************************************************************************** */