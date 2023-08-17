#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class Animal
{
	protected:
		string type;

	public:
		Animal();
		Animal(string str);
		Animal(Animal const & src);
		virtual ~Animal();

		string getType() const;
		virtual void    makeSound( void ) const;
};


#endif /* ********************************************************** ANIMAL_H */