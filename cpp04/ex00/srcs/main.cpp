#include "../headers/Animal.h"
#include "../headers/Cat.h"
#include "../headers/Dog.h"
#include "../headers/WrongAnimal.h"
#include "../headers/WrongCat.h"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
const WrongAnimal* wa= new WrongCat();
const WrongAnimal* wb= new WrongAnimal();

std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << meta->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << "-------------------WRONG SECTION-------------------" << std::endl;
std::cout << wa->getType() << " " << std::endl;
std::cout << wb->getType() << " " << std::endl;
wa->makeSound();
wb->makeSound();

delete j;
delete i;
delete meta;
delete wa;
delete wb;

return 0;
}