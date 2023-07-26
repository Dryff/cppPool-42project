#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	cout << "-----Constructors-----" << endl;
	const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
	cout << "-----Destructors-----" << endl;
	for ( int i = 0; i < 4; i++ ) {
		cout << "Animal [" << i << "]" << endl;
		delete animals[i];
		cout << "--------" << endl;
	}
}