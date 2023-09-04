#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include <string>

# include "WrongAnimal.hpp"



class WrongCat : public WrongAnimal
{

	public:

		WrongCat();
		WrongCat(WrongCat const & src);
		~WrongCat();

		void makeSound() const;

	private:

};

std::ostream &			operator<<(std::ostream & o, WrongCat const & i);

#endif /* ************************************************************* WrongCat_H */