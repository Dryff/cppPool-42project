#include <iostream>
#include <vector>
#include <list>
#include "MutantStack.hpp"

int main() 
{	
	std::cout << "-- SUBJECT TEST OUTPUT --" << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "-- LIST OUTPUT --" << std::endl;

	std::list<int> lstack;
    lstack.push_back(5);
    lstack.push_back(17);
    std::cout << lstack.back() << std::endl;
    lstack.pop_back();
    std::cout << lstack.size() << std::endl;
    lstack.push_back(3);
    lstack.push_back(5);
    lstack.push_back(737);
    lstack.push_back(0);

	std::list<int>::iterator it_l= lstack.begin();
	std::list<int>::iterator ite_l = lstack.end();
	++it_l;
	--it_l;

    while (it_l != ite_l) {
        std::cout << *it_l << std::endl;
		++it_l;
	}

	std::cout << "-- MY TEST --" << std::endl;

	MutantStack<int> mutantStack;

    mutantStack.push(1);
    mutantStack.push(2);
    mutantStack.push(3);
    mutantStack.push(4);
    mutantStack.push(5);

    std::cout << "Iterate : ";
    for (MutantStack<int>::iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse iterate : ";
    for (MutantStack<int>::iterator it = mutantStack.end() - 1; it != mutantStack.begin(); --it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

	std::cout << "Const Iterate : ";
    for (MutantStack<int>::const_iterator it = mutantStack.begin(); it != mutantStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Const Reverse iterate : ";
    for (MutantStack<int>::const_iterator it = mutantStack.end() - 1; it != mutantStack.begin(); --it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}




