#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	cout << "-----Constructors-----" << endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	cout << "-----Tests-----" << endl;
	std::cout << "Type : " << j->getType() << " " << std::endl;
	std::cout << "Type : " << i->getType() << " " << std::endl;
	cout << "Sound of Dog : ";
	j->makeSound();
	cout <<  "Sound of Cat : ";
	i->makeSound();
	cout << "Sound of Animal : ";
	meta->makeSound();
	cout << endl;
	
	cout << "-----Constructors-----" << endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	const WrongCat* l = new WrongCat();
	
	cout << "-----Tests-----" << endl;
	std::cout << "Type : " << k->getType() << " " << std::endl;
	k->makeSound();
	wrongMeta->makeSound();
	l->makeSound();

	cout << "-----Destructors-----" << endl;

	delete meta;
	delete i;
	delete j;
	delete wrongMeta;
	delete k;

	return 0;
}