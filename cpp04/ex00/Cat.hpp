#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(Cat const & src);
		~Cat();

		void makeSound() const;
		Cat &		operator=(Cat const & rhs);
};

#endif /* ************************************************************* CAT_H */