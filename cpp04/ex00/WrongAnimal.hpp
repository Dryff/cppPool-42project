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
		virtual ~WrongAnimal();

		string getType() const;
		virtual void makeSound() const;
};

std::ostream &			operator<<(std::ostream & o, WrongAnimal const & i);

#endif /* ************************************************************* WrongAnimal_H */