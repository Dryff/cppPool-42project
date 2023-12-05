#include "span.hpp"
#include <iostream>
#include <algorithm>

Span::Span() : _size(0) {
}

Span::Span(unsigned int N) : _size(N) {
}

Span::Span(const Span &src) : _size(src._size), _container(src._container) {
}

Span::~Span() {
}

Span &Span::operator=(const Span &src) {
	this->_size = src._size;
	this->_container = src._container;
	return *this;
}

void Span::addNumber(int number) {
	if (this->_container.size() >= this->_size) {
		throw std::out_of_range("Error : The container is already full");
	}
	this->_container.push_back(number);
}

void Span::fillWithANumber(int number) {
	if (this->_container.size() >= this->_size) {
		throw std::out_of_range("Error : The container is already full");
	}
	for (unsigned int i = 0; i < this->_size; i++) {
		this->_container.push_back(number);
	}
}

void Span::displayNumbers() {
	for (unsigned int i = 0; i < _size; i++) {
        std::cout << _container[i];
    }
	std::cout << std::endl;
}

int Span::shortestSpan() {
	if (this->_container.size() < 2) {
		throw std::out_of_range("Error : The container should have at least two numbers to get the shortest span");
	}
	std::vector<int> temp = this->_container;
	std::sort(temp.begin(), temp.end());
	int minSpan = std::abs(temp[0] - temp[1]);
	for (unsigned int i = 1; i < temp.size() - 1 ; i++) {
		if (std::abs(temp[i] - temp[i + 1]) < minSpan) {
			minSpan = std::abs(temp[i] - temp[i + 1]);
		}
	}
	return minSpan;
}

int Span::longestSpan() {
	if (this->_container.size() < 2) {
		throw std::out_of_range("Error : The container should have at least two numbers to get the longest span");
	}
	int max = *std::max_element(this->_container.begin(), this->_container.end());
	int min = *std::min_element(this->_container.begin(), this->_container.end());
	return max - min;
}