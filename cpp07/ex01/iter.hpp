#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void iter(T *arr, const int& len, void(*f)(const T& arg))
{
	for (int i = 0; i < len; i++)
	{
		f(arr[i]);
	}
}

#endif
