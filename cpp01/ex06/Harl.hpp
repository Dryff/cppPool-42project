#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

/* colors */
#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define YELLOW "\033[0;33m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

class Harl {
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		~Harl();

		void    complain(string inputLevel);
};

typedef void (Harl::*t_func)(void);

#endif