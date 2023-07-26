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

};

std::ostream &			operator<<(std::ostream & o, Brain const & i);

#endif /* ************************************************************* Brain_H */