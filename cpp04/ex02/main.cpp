#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	//Animal test;
	cout << "-----Constructors-----" << endl;
	const AAnimal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	cout << "-----Tests-----" << endl;
	for (int i = 0; i < 4; i++)
	{
		animals[i]->makeSound();
	}
	cout << "-----Destructors-----" << endl;
	for ( int i = 0; i < 4; i++ ) {
		cout << "Animal [" << i << "]" << endl;
		delete animals[i];
		cout << "--------" << endl;
	}
}