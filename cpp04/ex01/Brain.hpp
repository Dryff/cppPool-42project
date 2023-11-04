#ifndef Brain_HPP
# define Brain_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Brain
{
	private:
		string ideas[100];

	public:
		Brain();
		Brain(Brain const & src);
		Brain(Brain *src);
		~Brain();

		string *getIdeas();
		Brain &		operator=(Brain const & rhs);

};

#endif /* ************************************************************* Brain_H */