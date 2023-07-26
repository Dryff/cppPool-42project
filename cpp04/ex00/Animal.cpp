#include "Animal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Animal::Animal() : type("Random Animal")
{
	cout << type << " constructor called !" << endl;
}

Animal::Animal(string str) : type(str)
{
	cout << "Animal constructor called !" << endl;
}

Animal::Animal( const Animal & src )
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


/* ************************************************************************** */