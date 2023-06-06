#include "Zombie.hpp"

Zombie*    zombieHorde(int N, string name) {
    Zombie *zHorde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zHorde[i].setName(name);
    }
    return zHorde;
}

bool is_only_digits(const string &str) {
	return (str.find_first_not_of("0123456789") == string::npos);
}

int main() {
    int N = 0;
    string str;
    Zombie *zHorde;

    do {
        if (!is_only_digits(str))
            cout << "-------" << endl << "Please enter a number" << endl;
        cout << "Enter the number of zombies you want in the Horde : ";
        cin >> str;
    } while (!is_only_digits(str));
    N = stoi(str);
    zHorde = zombieHorde(N, "zombi");
    for (int i = 0; i < N; i++)
    {
        cout << "Zombie " << i + 1 << " : ";
        zHorde[i].announce();
    }

    delete []zHorde;
    return 0;
}