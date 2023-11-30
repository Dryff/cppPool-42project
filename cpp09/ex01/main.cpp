#include "RPN.hpp"

int main(int argc, char** argv) {
	
	RPN rpn;
	
	if (argc != 2) {
		std::cout << "Error: Usage: ./RPN [RPN Expression]" << std::endl;
		return 1;
	}

	try {
		rpn.isValidExpression(argv[1]);
		std::cout << rpn.calculate(argv[1]) << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}