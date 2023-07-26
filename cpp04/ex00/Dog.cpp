#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	cout << type << " constructor called !" << endl;
}

Dog::Dog(Dog const & src)
{
	cout << type << " copy constructor called !" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	cout << "Dog destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Dog::makeSound() const
{
	cout << "Wouf" << endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */