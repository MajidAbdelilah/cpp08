#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int n) : count(n) {}

Span::Span(const Span &span) : count(span.count), arr(span.arr) {}

Span::~Span() {}

Span &Span::operator=(const Span &span) {
	count = span.count;
	arr = span.arr;
	return *this;
}

void Span::addNumber(int number)
{
	if((arr.size()) >= count)
		throw std::out_of_range("Span is full");
	arr.push_back(number);
}

void Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	if (arr.size() + std::distance(begin, end) > count)
		throw std::out_of_range("Span is full");
	arr.insert(arr.end(), begin, end);
}


int Span::shortestSpan()
{
	if (arr.size() <= 1)
		throw std::out_of_range("Span is too small");
	std::vector<int> sorted = arr;
	std::sort(sorted.begin(), sorted.end());
	int min = sorted[1] - sorted[0];
	for (unsigned int i = 2; i < sorted.size(); i++)
	{
		if (sorted[i] - sorted[i - 1] < min)
			min = sorted[i] - sorted[i - 1];
	}
	return min;
}

int Span::longestSpan()
{
	if (arr.size() <= 1)
		throw std::out_of_range("Span is too small");
	std::vector<int> sorted = arr;
	std::sort(sorted.begin(), sorted.end());
	return sorted[sorted.size() - 1] - sorted[0];
}


