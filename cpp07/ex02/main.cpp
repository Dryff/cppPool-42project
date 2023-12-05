#include "Array.hpp"

int main() {
	
	{
		Array<int> intArr(5);

		intArr[0] = 14;
		intArr[1] = 42;
		intArr[2] = 667;

		std::cout << "INT ARRAY" << std::endl;
		std::cout << "------------" << std::endl;
		std::cout << intArr << std::endl;
		std::cout << "------------" << std::endl;

		Array<int> copy1(intArr);

		std::cout << "Testing empty default constructor and trying to display an empty array : ";
		try {
			Array<std::string> array;
			std::cout << array << std::endl;
		}
		catch (const std::exception &e) {
				std::cerr << e.what() << std::endl;
		}

		std::cout << "---------------------------" << std::endl;

		std::cout << "Copying with constructor : ";
		std::cout << copy1 << std::endl;

		std::cout << "Modifying the copy : ";
		copy1[4] = 1;
		std::cout << copy1 << std::endl;

		std::cout << "Testing if intArr is still the same : ";
		std::cout << intArr << std::endl;

		std::cout << "---------------------------" << std::endl;

		Array<int> copy2;
		copy2 = intArr;

		std::cout << "Copying with operator : ";
		std::cout << copy2 << std::endl;

		std::cout << "Modifying the intArr : ";
		intArr[4] = 2;
		std::cout << intArr << std::endl;

		std::cout << "Testing if copy is still the same : ";
		std::cout << copy2 << std::endl;

		std::cout << "---------------------------" << std::endl;

		std::cout << "Test : 'int * a = new int();' \nresult : ";
		int * a = new int();
		std::cout << *a << std::endl;
		delete a;

		std::cout << "---------------------------" << std::endl;

		std::cout << "Accessing by id (2): ";
		std::cout << intArr[2] << std::endl;

		std::cout << "---------------------------" << std::endl;

		std::cout << "Trying to access id out of bounds : ";
		try {
			std::cout << intArr[40] << std::endl;
		}
		catch (const std::exception &e) {
			std::cerr << e.what() << std::endl;
		}

		std::cout << "---------------------------" << std::endl;

		std::cout << "Getting the size of the array : ";
		std::cout << intArr.size() << std::endl;
	}
}