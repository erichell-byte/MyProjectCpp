#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>
template<typename T>
class Array
{
private:
	unsigned int _n;
	T* _data;
public:
	Array() : _n(0), _data(NULL) {}

	Array(unsigned int n): _data(new T[n]), _n(n){}

	Array(Array const& ref): _data(new T[ref._n]), _n(ref._n)
	{
		for (unsigned int i = 0; i < _n; i++)
		{
			_data[i] = ref._data[i];
		}
	}

	~Array()
	{
		delete[] _data;
	}

	unsigned int size() const
	{
		return (this->_n);
	}

	Array& operator=(Array const& ref)
	{
		if (this->_data != NULL)
			delete[] _data;
		this->_n = ref._n;
		_data = new T[ref._n];
		for (unsigned int i = 0; i < _n; i++)
		{
			this->_data[i] = ref._data[i];
		}
		return(*this);
	}

	T& operator[](unsigned int i)
	{
		if (i >= _n)
			throw BadIndexException();
		return (_data[i]);
	}

	class BadIndexException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return "bad index , large index";
		}
	};
};
#endif