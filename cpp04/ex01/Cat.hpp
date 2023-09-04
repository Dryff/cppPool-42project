#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;

	public:
		Cat();
		Cat(Cat const & src);
		virtual ~Cat();

		void makeSound() const;
		Cat &		operator=(Cat const & rhs);
};

#endif /* ************************************************************* CAT_H */