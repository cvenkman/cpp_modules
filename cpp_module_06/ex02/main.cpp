/* dynamic_cast */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    std::srand(std::time(NULL));
    int r = rand() % 3;
    if (r == 0)
        return new A();
    else if (r == 1)
        return new B();
    return new C();
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "pointer is A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "pointer is B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "pointer is C\n";
	else
		std::cout << "pointer is NULL\n";
}

void identify(Base &p)
{
	if ((void *)&p == NULL)
	{
		std::cout << "reference is NULL\n";
		return ;
	}
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "reference is A\n";
	}
	catch (std::bad_cast)
	{
		std::cout << "reference is not A\n";
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "reference is B\n";
	}
	catch (std::bad_cast) 
	{
		std::cout << "reference is not B\n";
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "reference is C\n";
	}
	catch (std::bad_cast &e)
	{
		std::cout << "reference is not C\n";
	}
}

int main(void)
{
	Base *ptr = generate();

	identify(ptr);
	identify(*ptr);
	identify(0);
	ptr = NULL;
	identify(*ptr);
}
