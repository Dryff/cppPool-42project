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
	cout <<  "Sound of Cat : ";
	i->makeSound(); //will output the cat sound!
	cout << "Sound of Dog : ";
	j->makeSound();
	cout << "Sound of RandomAnimal : ";
	meta->makeSound();

	cout << "-----Constructors-----" << endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* k = new WrongCat();
	
	cout << "-----Tests-----" << endl;
	std::cout << "Type : " << k->getType() << " " << std::endl;
	k->makeSound(); //will output the Wrongcat sound!
	wrongMeta->makeSound();

	cout << "-----Destructors-----" << endl;

	delete meta;
	delete i;
	delete j;
	delete wrongMeta;
	delete k;

	return 0;
}