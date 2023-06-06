#include "newSed.hpp"

int main ( int argc, char **argv )
{
    if (argc != 4) {
        cout << "Usage: ./NewSed <filename> <to_find> <replace>." << endl;
        return 1;
    } else {
        NewSed   newSed(argv[1]);
        newSed.replace(argv[2], argv[3]);
    }
    return (0);
}