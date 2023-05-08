#include "../headers/Animal.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/Brain.h"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j; //should not create a leak
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
	delete array[i];
}
return 0;
}