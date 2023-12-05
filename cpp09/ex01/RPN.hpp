#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <stack>
#include <cstdlib>

class RPN {
    public:
        RPN();
        RPN(const RPN& other);
		RPN &operator=(const RPN &other);
		~RPN();

        void isValidExpression(const std::string &str);
        long long calculate(const std::string &str);

        class CalculationNotPossibleException: public std::exception {
            public:
                virtual const char* what() const throw();  
        };

        class DividingByZeroException : public std::exception {
            public:
                virtual const char* what() const throw();  
        };

    private:
        std::stack<int> _stack;
};

#endif