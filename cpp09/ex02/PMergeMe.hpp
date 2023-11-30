#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <cctype>
#include <cstdlib>
#include <vector>
#include <ctime>
#include <deque>

inline bool ft_error(std::string str) {
		std::cerr << str << std::endl;
		return false;
}

template <typename T>
void printArray(T *arg, int len, std::string text) {
	std::cout << text;
	for (int i = 0; i < len; i++) {
		std::cout << arg[i] << " ";
		if (i == 4)
			break;
	}
	if (len > 5)
		std::cout << "[...]";
	std::cout << std::endl;
}

template <typename T>
void printVector(const std::vector<T>& vec, std::string text) {
    std::cout << text;
    for (typename std::vector<T>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

void	checkErrors(int ac, char **av);
std::vector<int> vecSort(unsigned int *arr, int argc);
std::deque<int> deqSort(unsigned int *arr, int argc);

#endif