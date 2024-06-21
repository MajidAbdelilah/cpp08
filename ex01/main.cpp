#include "Span.hpp"
#include <iostream>
#include <vector>

int main()
{
	Span sp = Span(5);
	
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl;

	Span larg_span = Span(50000);
	std::vector<int> vec;

	for (int i = 0; i < 50000; i++)
		vec.push_back(i);

	larg_span.addNumber(vec.begin(), vec.end());
	
	std::cout << "Shortest span: " << larg_span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << larg_span.longestSpan() << std::endl;
	
	try {
		larg_span.addNumber(5);
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::vector<int> vec2;
	vec2.push_back(0);

	try{
		larg_span.addNumber(vec2.begin(), vec2.end());
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}