#pragma once
#include <vector>

class Span
{
	public:
	Span(unsigned int n);
	Span(const Span &span);
	~Span();
	Span &operator=(const Span &span);

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();
	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	private:
	unsigned int count;
	std::vector<int> arr;
};