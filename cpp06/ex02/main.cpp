#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base * generate(void);
void identify_point(Base* p);

void identify_ref(Base& p)
{
	identify_point(&p);
}

void identify_point(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

Base * generate(void)
{
	int random = rand() % 3;
	if (random == 0)
		return (new A());
	else if (random == 1)
		return (new B());
	else
		return (new C());
}
int main()
{
	srand(time(NULL));

	Base *random = generate();
	identify_point(random);
	identify_ref(*random);



}