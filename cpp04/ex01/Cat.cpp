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
	type = src.type;
	cout << type << " deep copy constructor called !" << endl;
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

Cat&   Cat::operator=( const Cat& rhs ) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

/* ************************************************************************** */