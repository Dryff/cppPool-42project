#include "iter.hpp"

template <typename T>
static void printValues(T const & item) {
	std::cout << item << std::endl;
}

int main() {
	std::cout << "--------- INT ---------" << std::endl;
	int arr[4] = {42, 14, 65, -667};
	iter(arr, 4, printValues);

	std::cout << "--------- STRING ---------" << std::endl;
	std::string arrStr[7] = {"orange", "jaune", "", "rouge", "bleu", "vert", "violet"};
	iter(arrStr, 7, printValues);
}