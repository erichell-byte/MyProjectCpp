#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <list>
#include <array>
#include <vector>
#include <algorithm>

class NoFindNumException : public  std::exception
{
public:
	const char* mess() const throw()
	{
		return("Num not find at container");
	}
};

template <typename T>
typename T::const_iterator easyfind(const T& cons, const int & num)
{
	typename T::const_iterator iter;
	iter = std::find(cons.begin(), cons.end(), num);
	if (iter == cons.end())
		throw NoFindNumException();
	return (iter);
}
#endif

