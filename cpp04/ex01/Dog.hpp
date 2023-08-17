#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"


class Dog : public Animal
{
	private:
		Brain *brain;

	public:
		Dog();
		Dog(Dog const & src);
		~Dog();

		void makeSound() const;


};

std::ostream &			operator<<(std::ostream & o, Dog const & i);

#endif /* ************************************************************* DOG_H */