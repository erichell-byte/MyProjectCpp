#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
public:
	Span();
	Span(unsigned int n);
	~Span();
	Span(Span const& ref);
	Span &operator=(Span const& ref);
	void addNumber(const int& num);
	void addNumber(std::vector<int>::const_iterator iter1, std::vector<int>::const_iterator iter2);
	int longestSpan();
	int shortestSpan();
	

	class SizeOfArrayFullException : std::exception
	{
	public:
		const char* mess() throw()
		{
			return ("size of array is over!!!!!1!!");
		}
	};

	class EnoughNumInArrayException : std::exception
	{
	public:
		const char* mess() throw()
		{
			return (" size of array 0 or 1 !!!111!!1!01021");
		}
	};
private:
	unsigned int _N;
	std::vector<int> _array;
};
#endif // !SPAN_HPP
