#include "AAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

AAnimal::AAnimal() : type("Random AAnimal")
{
	cout << type << " constructor called !" << endl;
}

AAnimal::AAnimal(string str) : type(str)
{
	cout << "AAnimal constructor called !" << endl;
}

AAnimal::AAnimal( const AAnimal & src )
{
	cout << type << " copy constructor called" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

AAnimal::~AAnimal()
{
    cout << "AAnimal destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

void AAnimal::makeSound() const
{
    cout << "AAnimal makeSound called" << endl;
}

string    AAnimal::getType() const
{
    return this->type;
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */