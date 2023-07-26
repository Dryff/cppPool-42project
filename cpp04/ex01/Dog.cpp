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
	cout << type << "copy constructor called !" << endl;
	type = src.type;
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


/* ************************************************************************** */