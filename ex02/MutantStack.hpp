#pragma once

#include <deque>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack(){}
	MutantStack(const MutantStack &mutantStack):
		std::stack<T>(mutantStack) {}
	~MutantStack(){}
	MutantStack &operator=(const MutantStack &mutantStack)
	{
		std::stack<T>::operator=(mutantStack);
		return *this;
	}

	typedef typename std::deque<T>::iterator iterator;

	iterator begin()
	{
		return std::stack<T>::c.begin();
	}
	iterator end()
	{
		return std::stack<T>::c.end();
	}
};
