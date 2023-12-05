#include "RPN.hpp"

RPN::RPN(void) {};

RPN::RPN(const RPN &to_copy) {
    *this = to_copy;
}

RPN& RPN::operator=(const RPN &to_copy) {
	(void)to_copy;
    return *this;
}

RPN::~RPN(void) {};

void RPN::isValidExpression(const std::string & str) {
    int counter = 0;

    if (str.find_first_not_of("0123456789+-/* ") != std::string::npos)
        throw CalculationNotPossibleException();

    for (size_t i = 0; i < str.size(); i++) {
        if (isdigit(str[i]))
            counter++;
        else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/') {
            counter--;
        }
    }
    if (counter != 1)
        throw CalculationNotPossibleException();
}

long long RPN::calculate(const std::string & str) {

    std::stringstream ss(str);
    char token;
    int arg1;
    int arg2;

    while (ss >> token)
    {
        if (token != '+' && token != '-' && token != '/' && token != '*') {
            _stack.push(atoi(&token));
        }
        else {
            if (_stack.size() < 2)
                throw CalculationNotPossibleException();
            arg2 = _stack.top();
            _stack.pop();
            arg1 = _stack.top();
            _stack.pop();
            switch (token)
            {
                case '+': _stack.push(arg1 + arg2) ; break;
                case '-': _stack.push(arg1 - arg2) ; break;
                case '/': _stack.push(arg2 != 0 ? arg1 / arg2 : throw DividingByZeroException()); break;
                case '*': _stack.push(arg1 * arg2); break;
            }
        }
    }
    return _stack.top();
}

const char*	RPN::CalculationNotPossibleException::what() const throw() {
	return "Error: calculation isn't possible.";
}

const char*	RPN::DividingByZeroException::what() const throw() {
	return "Error: division by zero isn't possible.";
}