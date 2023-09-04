#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

class WrongAnimal
{
	protected:
		string type;

	public:
		WrongAnimal();
		WrongAnimal(string str);
		WrongAnimal(WrongAnimal const & src);
		~WrongAnimal();

		string getType() const;
		void makeSound() const;

		WrongAnimal &		operator=(WrongAnimal const & rhs);
};

#endif /* ************************************************************* WrongAnimal_H */