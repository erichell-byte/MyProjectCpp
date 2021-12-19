#include <iostream>
#include "Convert.hpp"

int main(int argc, char **argv)
{
   
	if (argc != 2)
	{
		std::cout << "Incorrect number of arguments" << std::endl;
		return (-1);
	}
	else
	{
		Convert a = Convert(argv[1]);
		std::cout << a << std::endl;
	}
	return (0);
        
}
