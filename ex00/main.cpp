#include "easyfind.hpp"
#include <deque>
#include <vector>
#include <iostream>
int main()
{
	std::vector<int> vec;
	for (int i = 0; i < 10; i++)
		vec.push_back(i);
	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "Value found at index: " << std::distance(vec.begin(), it) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::vector<int>::iterator it = easyfind(vec, 15);
		std::cout << "Value found at index: " << std::distance(vec.begin(), it) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	
	std::deque<int> deq;
	for (int i = 0; i < 10; i++)
		deq.push_back(i);
	try {
		std::deque<int>::iterator it = easyfind(deq, 5);
		std::cout << "Value found at index: " << std::distance(deq.begin(), it) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::deque<int>::iterator it = easyfind(deq, 10);
		std::cout << "Value found at index: " << std::distance(deq.begin(), it) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return 0;
}