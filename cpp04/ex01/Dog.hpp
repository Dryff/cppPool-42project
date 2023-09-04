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
		virtual ~Dog();

		void makeSound() const;

		Dog &		operator=(Dog const & rhs);
};

#endif /* ************************************************************* DOG_H */