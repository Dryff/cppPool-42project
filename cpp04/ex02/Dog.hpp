#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include <string>

# include "AAnimal.hpp"

class Dog : public AAnimal
{

	public:

		Dog();
		Dog(Dog const & src);
		~Dog();

		void makeSound() const;
		Dog &		operator=(Dog const & rhs);

	private:

};

#endif /* ************************************************************* DOG_H */