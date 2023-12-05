#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span {
private:
	unsigned int _size;
	std::vector<int> _container;

	Span();
public:
	Span(unsigned int N);
	Span(Span const & src);
	~Span();

	Span & operator=(Span const & src);

	void addNumber(int number);
	void fillWithANumber(int number);
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

};

#endif

std::ostream & operator<<(std::ostream & out, Span const & src);