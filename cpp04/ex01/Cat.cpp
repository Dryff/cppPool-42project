#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
{
	cout << type << " constructor called !" << endl;
	brain = new Brain();
}

Cat::Cat(Cat const & src)
{
	cout << type << " deep copy constructor called !" << endl;
	type = src.type;
	brain = new Brain(*src.brain);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Cat::~Cat()
{
	delete brain;
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