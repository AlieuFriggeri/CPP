#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

class Base {
	public:
		virtual ~Base(){};
};

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base *generate(void)
{
	Base *res;
	int r = rand() % 3;

	if (r == 1)
	{
		A a;
		return res = &a;
	}
	else if (r == 2)
	{
		B b;
		return res = &b;
	}
	else
	{
		C c;
		return res = &c;
	}
}

void identify(Base* p)
{
	A *a = NULL;
	B *b = NULL;
	C *c = NULL;

	a = dynamic_cast<A*>(p);
	if (a != NULL)
		std::cout << "p real type is A" << std::endl;
	b = dynamic_cast<B*>(p);
	if (b != NULL)
		std::cout << "p real type is B" << std::endl;
	c = dynamic_cast<C*>(p);
	if (c != NULL)
		std::cout << "p real type is C" << std::endl;
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
	}
	catch(std::bad_cast&)
	{
		
		try
		{
			dynamic_cast<B&>(p);
			std::cout << "B" << std::endl;
		}
		catch(std::bad_cast&)
		{
			try
			{
				dynamic_cast<C&>(p);
				std::cout << "C" << std::endl;
			}
			catch(std::bad_cast&)
			{
				
			}
		}
	}	

	std::cout << "Unknown type" << std::endl;
}

int main()
{
	srand(time(NULL));
	C a;
	Base &ptr = a;
	//ptr = &a;
	identify(ptr);
	return 0;
}