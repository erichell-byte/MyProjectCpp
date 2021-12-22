#include "span.hpp"

Span::Span(unsigned int n) : _N(n) {}

Span::Span() : _N(0){}

Span::~Span(){}

Span::Span(Span const& ref) : _N(ref._N)
{
	this->_array.clear();
	this->_array = ref._array;
}

Span &Span::operator=(Span const& ref)
{
	if (this != &ref)
	{
		this->_array.clear();
		this->_array = ref._array;
		this->_N = ref._N;
	}
	return (*this);
}

void Span::addNumber(const int& num)
{
	if (_array.size() < _N)
		_array.push_back(num);
	else
		throw SizeOfArrayFullException();
}

int Span::longestSpan()
{
	if (this->_array.size() < 2)
		throw (EnoughNumInArrayException());
	int a = *std::max_element(_array.begin(), _array.end());
	int b = *std::min_element(_array.begin(), _array.end());
	return (std::abs(a - b));
}

int Span::shortestSpan()
{
	unsigned int	tmp = UINT_MAX;
	unsigned int	diff;
	if (this->_array.size() < 2)
		throw (EnoughNumInArrayException());
	std::sort(_array.begin(), _array.end());
	for (int i = 0; i < _N - 1; i++)
	{
		diff = abs(_array[i] - _array[i + 1]);
		if (diff < tmp)
			tmp = diff;
	}
	return (tmp);
}

void Span::addNumber(std::vector<int>::const_iterator iter1, std::vector<int>::const_iterator iter2)
{
	while (iter1 < iter2)
	{
		if (_array.size() == _N)
			throw SizeOfArrayFullException();
		_array.push_back(*iter1);
		iter1++;
	}
}


