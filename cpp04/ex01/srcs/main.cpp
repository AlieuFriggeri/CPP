#include "../headers/Animal.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/Brain.h"


int main()
{
const Dog* j = new Dog();
const Cat* i = new Cat();
const Dog *k = new Dog();
const Animal l(*j);
delete j;
std::cout << l.getType() << std::endl;
l.makeSound();
const Dog r(*k);
const Cat s(*i);
delete k; //should not create a leak
delete i;
Animal *array[50];
for (int i = 0; i < 50; i++)
{
	if (i < 25)
		array[i] = new Dog();
	else
		array[i] = new Cat();
}
for (int i = 0; i < 50; i++)
{
	array[i]->makeSound();
	delete array[i];
}
return 0;
}