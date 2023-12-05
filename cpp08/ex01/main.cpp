#include <iostream>
#include <vector>
#include "span.hpp"

int main()
{
	{
		std::cout << "-- Test of the subject (Span) --" << std::endl;
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;
	}

		std::cout << "-- My tests --" << std::endl << std::endl;
	{
		std::cout << "--------------" << std::endl;
		std::cout << "Testing the throw exceptions if the container is already full :" << std::endl  << std::endl;
		Span sp(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try {
			sp.addNumber(25);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "--------------" << std::endl << std::endl;
	}

	{
		std::cout << "--------------" << std::endl;
		std::cout << "Testing the throw exceptions if the container has only 1 number :" << std::endl  << std::endl;
		Span sp(1);
		try {	
			std::cout << sp.shortestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {	
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "--------------" << std::endl << std::endl;
	}

	{
		std::cout << "--------------" << std::endl;
		std::cout << "Testing 10000 numbers in container :" << std::endl << std::endl;
		Span sp(10000);
		sp.fillWithANumber(5);
		sp.displayNumbers();
		std::cout << std::endl;
		std::cout << "--------------" << std::endl;

		std::cout << "Calling Addnumber to check if the container is full" << std::endl  << std::endl;
		try {	
			sp.addNumber(9);
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << "--------------" << std::endl << std::endl;
	}

}