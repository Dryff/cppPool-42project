#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
public:
	~Span();
	Span(unsigned int N);
	Span(Span const & src);
	Span & operator=(Span const & src);

	void addNumber(int number);
	void addMultipleNumbers(int number);
	void displayNumbers();
	int shortestSpan();
	int longestSpan();

	template <typename it>
	void fillSpan(it start, it end) {
		while (start != end) {
			addNumber(*start);
			start++;
		}
	}

private:
	unsigned int _size;
	std::vector<int> _container;

	Span();
};

#endif

std::ostream & operator<<(std::ostream & out, Span const & src);