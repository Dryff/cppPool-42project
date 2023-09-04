#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Animal")
{
	cout << type << " constructor called !" << endl;
}

Animal::Animal(string str) : type(str)
{
	cout << "Animal constructor called !" << endl;
}

Animal::Animal(const Animal & src)
{
	cout << type << " copy constructor called" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Animal::~Animal()
{
    cout << "Animal destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Animal::makeSound() const
{
    cout << "Animal makeSound called" << endl;
}

string    Animal::getType() const
{
    return this->type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

Animal&   Animal::operator=( const Animal& rhs ) {
	cout << ">Animal< " << rhs.type << " has been copied on "<< this->type << " with copy assignment operator." << std::endl;
	this->type = rhs.type;

	return *this;
}


/* ************************************************************************** */