#include <iostream>
#include <vector>
#include <algorithm>
#include "easyfind.hpp"

int main() {
	std::vector<int> list;
	std::vector<int>::iterator search;
	
	for (int i = 0; i < 20; i++) {
		list.push_back(i);
	}

	std::cout << "The value isnt in the array : ";
	search = easyfind(list, 50);
	std::cout << *search << std::endl;

	std::cout << "The value is in the array, value pointed by the iterator : ";
	search = easyfind(list, 19);
	std::cout << *search << std::endl;
}