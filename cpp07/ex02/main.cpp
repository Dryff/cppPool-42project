#include "array.hpp"

int main() {
	
	{
		Array<std::string> stringArr(4);

		stringArr[0] = "Bonjour";
		stringArr[1] = "Hola";
		stringArr[2] = "Hello";
		stringArr[3] = "Hej";

		std::cout << "STRING ARRAY" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << stringArr << std::endl;
		std::cout << "------------" << std::endl;

		Array<std::string> copy(stringArr);
		std::cout << "Copying : ";
		std::cout << copy << std::endl;

		std::cout << "Accessing by id (3): ";
		std::cout << stringArr[3] << std::endl;

		std::cout << "Trying to access id out of bounds : ";
		try {
			std::cout << copy[40] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << "Getting the size of the array : ";
		std::cout << stringArr.size() << std::endl  << std::endl;
	}
	{
		Array<int> intArr(7);

		intArr[0] = 14;
		intArr[1] = 42;
		intArr[2] = 667;

		std::cout << "INT ARRAY" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << intArr << std::endl;
		std::cout << "------------" << std::endl;

		Array<int> copy(intArr);
		std::cout << "Copying : ";
		std::cout << copy << std::endl;

		std::cout << "Accessing by id (2): ";
		std::cout << intArr[2] << std::endl;

		std::cout << "Trying to access id out of bounds : ";
		try {
			std::cout << copy[40] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << "Getting the size of the array : ";
		std::cout << intArr.size() << std::endl << std::endl;
	}

	std::cout << "Testing default constructor and trying to display an empty array : ";
	try {
		Array<std::string> array;
		std::cout << array << std::endl;
	}
	catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
	}
}