#include "Zombie.hpp"

int main(){

	string name;

    cout << "Creating zombie on the stack" << endl;
	cout << "Zombie name: " << endl;
	cin >> name;

	Zombie StackZombie(name);
    
	cout << "------------" << endl;
    cout << "Creating zombie on the heap." << endl;
    cout << "Zombie name: " << endl;
    cin >> name;

	cout << "-----TESTS-------" << endl;
    Zombie *HeapZombie = newZombie(name);
	cout << "Testing if HeapZombie and StackZombie can announce themself : " << endl;
    HeapZombie->announce();
    StackZombie.announce();

	cout << "------------" << endl;
	cout << "Deleting HeapZombie, should display a destroy message : " << endl;
    delete HeapZombie;

	cout << "------------" << endl;
    cout << "Calling randomChump func, give it a name : " << endl;
	cin >> name;
	cout << "------------" << endl;
    cout << "Zombie should be given a name, announce himself and be destroyed" << endl;
    randomChump(name);
	cout << "------------" << endl;
    cout << "End of program, StackZombie should be destroyed :" << endl;
}