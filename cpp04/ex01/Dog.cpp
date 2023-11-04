#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : Animal("Dog")
{
	cout << type << " constructor called !" << endl;
	brain = new Brain();
}

Dog::Dog(Dog const & src)
{
	type = src.type;
	cout << type << " deep copy constructor called !" << endl;
	brain = new Brain(*src.brain);
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Dog::~Dog()
{
	delete brain;
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

Dog&   Dog::operator=( const Dog& rhs ) {
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	this->brain = new Brain(*rhs.brain);
	return (*this);
}

/* ************************************************************************** */