#ifndef ITER_HPP
#define ITER_HPP

#include <cstdlib>
#include <iostream>
#include <vector>

template <typename T>
void iter(T* array, int len, void f(const T& item)) {
	for (int i = 0; i < len; i++) {
		f(array[i]);
	}
}

#endif