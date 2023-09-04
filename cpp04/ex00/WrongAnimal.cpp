#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(string str) : type(str)
{
	cout << "WrongAnimal constructor called !" << endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	cout << type << " copy constructor called !" << endl;
	*this = src;
}

WrongAnimal::WrongAnimal() : type("Random WrongAnimal")
{
	cout << type << " constructor called !" << endl;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal( void )
{
    cout << "WrongAnimal destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void WrongAnimal::makeSound() const
{
    cout << "*WrongAnimal sound*" << endl;
}

string    WrongAnimal::getType() const
{
    return this->type;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal&   WrongAnimal::operator=( const WrongAnimal& rhs ) {
	cout << ">WrongAnimal< " << rhs.type << " has been copied on "<< this->type << " with copy assignment operator." << std::endl;
	this->type = rhs.type;

	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */