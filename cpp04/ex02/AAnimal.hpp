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
		virtual void    makeSound() const = 0;
		AAnimal & operator = ( const AAnimal & rhs );

};


#endif /* ********************************************************** AANIMAL_H */