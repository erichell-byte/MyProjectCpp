#include "Serialize.hpp"
#include <iostream>
#include <ostream>

int main()
{
	srand(time(NULL));
	void *p;
	Data *data;

	std::cout << "SERIALIZATION\n" << std::endl;
	p = serialize();
	std::cout << "\nDESERIALIZATION\n" << std::endl;
	data = deserialize(p);

	std::cout << "data->s1 = " << data->s1 << std::endl;
	std::cout << "data->n = " << data->n << std::endl;
	std::cout << "data->s2 = " << data->s2 << std::endl;
}
