#include "Cat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Cat::Cat() : Animal("Cat")
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
	cout << type << " destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void Cat::makeSound() const {
	cout << "Miaou" << endl;
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Cat&   Cat::operator=( const Cat& rhs ) {
	cout << ">Cat< " << rhs.type << " has been copied on "<< this->type << " with copy assignment operator." << std::endl;
	this->type = rhs.type;

	return *this;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */