#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : AAnimal("Cat")
{
	cout << type << " constructor called !" << endl;
}

Cat::Cat(Cat const & src)
{
	cout << type << " copy constructor called !" << endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	cout << "Cat destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const
{
	cout << "Miaou" << endl;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */