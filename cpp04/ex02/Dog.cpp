#include "Dog.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Dog::Dog() : AAnimal("Dog")
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

Dog&   Dog::operator=( const Dog& rhs ) {
	cout << ">Dog< " << rhs.type << " has been copied on "<< this->type << " with copy assignment operator." << std::endl;
	this->type = rhs.type;

	return *this;
}

/* ************************************************************************** */