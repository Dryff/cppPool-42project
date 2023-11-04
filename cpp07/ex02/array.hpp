#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <iomanip>

template<typename T>
class Array {
private:
	unsigned int	_size;
	T*				_myArray;

public:
	Array(): _size(0), _myArray(new T[_size]) {};

	Array(unsigned int n): _size(n) {
		this->_myArray = new T[n];
	};

	~Array() {
		if (this->_size > 0)
			delete[] _myArray;
	}

	Array(Array const & src): _size(src.size()) {
		this->_myArray = new T[src.size()];
		for (unsigned int i = 0 ; i < this->_size; i++) {
			this->_myArray[i] = src._myArray[i];
		}
	};

	Array & operator=(Array const & src) {
		if (this != &src) {
			this->_size = src.size();
			delete _myArray;
			this->_myArray = new T[_size];
			for (unsigned int i = 0 ; i < this->_size; i++) {
				this->_myArray[i] = src._myArray[i];
			}
		}
		return *this;
	}

	T & operator[](unsigned int index) const {
		if (index >= _size) {
			throw std::out_of_range("Index is out of range");
		}
		return _myArray[index];
	}

	unsigned int size() const {
		return this->_size;
	}

};

template <typename T>
std::ostream & operator<<(std::ostream & out, const Array<T> & arr) {
	if (arr.size() == 0)
		return out << "Array is empty";
	for (unsigned int i = 0; i < arr.size(); i++) {
		out << arr[i] << " ";
	}
	return out;
}

#endif