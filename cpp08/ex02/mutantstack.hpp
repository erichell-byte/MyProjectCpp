#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template<class T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>() {}
	virtual ~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin()
	{
		return (this->c.begin());
	}

	iterator end()
	{
		return (this->c.end());
	}

};

#endif