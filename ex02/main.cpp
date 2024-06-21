#include "MutantStack.hpp"
#include <algorithm>
#include <cstdlib>
#include <iostream>
int main()
{
	MutantStack<int>
	mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	std::cout << "------------------\n";
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	
	std::cout << "------------------\n";

	std::cout << "737 lives at index " << 
		std::distance(mstack.begin(), 
			std::find(mstack.begin(), mstack.end(), 737)) << std::endl;

	std::cout << "------------------\n";

	MutantStack<int> mstack2;
	int i = 0;
	std::srand(time(0));
	while(i < 10000)
	{
		mstack2.push(std::rand() % 30000);
		i++;
	}

	std::sort(mstack2.begin(), mstack2.end());
	
	MutantStack<int>::iterator start = mstack2.begin();
	MutantStack<int>::iterator end = mstack2.end();
	while (start != end)
	{
		std::cout << *start << std::endl;
		++start;
	}
	return 0;
}