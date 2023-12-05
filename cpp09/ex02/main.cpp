#include "PmergeMe.hpp"

bool parse_args(unsigned int arr[], int argc, char **argv) {
	if (argc < 3)
		return ft_error("Error: At least two arguments needed.");
	for (int i = 1; i < argc; i++) {
		std::string str(argv[i]);
		if (str.find_first_not_of("0123456789") != std::string::npos)
			return ft_error("Error: Arguments must be positive integers.");
		if ((arr[i - 1] = std::strtol(argv[i], NULL, 10)) > INT_MAX)
			return ft_error("Error: Arguments must be positive integers.");
	}
	for (int i = 0; i < argc - 1; i++) {
		for (int j = i + 1; j < argc - 1; j++)
			if (arr[i] == arr[j])
				return ft_error("Error: Duplicate integers.");
	}
	return true;
}

int main(int argc, char **argv)
{
	try
	{
		unsigned int arr[argc - 1];
		std::vector<int> vec;
		std::deque<int> deq;
		clock_t timerVec;
		clock_t timerDeq;

		if (!parse_args(arr, argc, argv))
			return 1;

		printArray(arr, argc - 1, "Before : ");

		timerVec = std::clock();
		vecSort(vec, arr, argc - 1);
		timerVec = std::clock() - timerVec;

		timerDeq = std::clock();
		vecSort(deq, arr, argc - 1);
		timerDeq = std::clock() - timerDeq;

		printVector(vec, "After : ");

		std::cout << "Time to process a range of " << argc - 1 << " elements with std::vector : " << 
		((((long double)timerVec) / CLOCKS_PER_SEC) * 1000) << " ms" << std::endl;
		std::cout << "Time to process a range of " << argc - 1 << " elements with std::deque : " <<
		((((long double)timerDeq)/CLOCKS_PER_SEC) * 1000) << " ms" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	
	return 0;
}