#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class AAnimal
{
	protected:
		string type;

	public:
		AAnimal();
		AAnimal(string str);
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();

		string getType() const;
		virtual void    makeSound( void ) const = 0;
};


#endif /* ********************************************************** AANIMAL_H */