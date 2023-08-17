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

	private:

};

std::ostream &			operator<<(std::ostream & o, Dog const & i);

#endif /* ************************************************************* DOG_H */