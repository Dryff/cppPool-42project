#include "Base.hpp"

Base * generate() {
	int random = rand() % 3;
	if (random == 0){
		std::cout << "Generated a A class" << std::endl;
		return new A();
	}
	else if (random == 1){
		std::cout << "Generated a B class" << std::endl;
		return new B();
	}
	else if (random == 2){
		std::cout << "Generated a C class" << std::endl;
		return new C();
	}
	else return NULL;
}

void identify(Base * p)
{
	if (dynamic_cast<A *>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown class" << std::endl;
}

void	identify( Base& p )
{
	Base result;

	try
	{
		result = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch (...) { }
	try
	{
		result = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
	}
	catch (...) { }
	try
	{
		result = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
	}
	catch (...) { }
}

int main() {
	srand(time(NULL));

	Base * generated = generate();

	std::cout << "Identify by pointer : ";
	identify(generated);

	std::cout << "Identify by reference : ";
	identify(*generated);

	delete generated;
}