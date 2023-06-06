#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::string;

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