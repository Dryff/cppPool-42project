#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain() 
{
	cout << "Brain constructor called !" << endl;
}

Brain::Brain(Brain const & src)
{
	cout << "Brain copy constructor called !" << endl;
	*this = src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	cout << "Brain destructor called" << endl;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */