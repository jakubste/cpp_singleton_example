#include <time.h>
#include <stdlib.h>
#include <iostream>

#include "singleton.h"

using namespace std;

int main() {
    srand(time(NULL));
    cout << "Hello, World!" << endl;
    Singleton * a = Singleton::getInstance();
    Singleton * b = Singleton::getInstance();
    cout << "A:\t" << a << "\t" << a->getSecretNumber() << endl;
    cout << "B:\t" << b << "\t" << b->getSecretNumber() << endl;

    for (char c = 'C'; c < 'H'; c++) {
        Singleton * x = Singleton::getInstance();
        cout << c << ":\t" << x << "\t" << x->getSecretNumber() << endl;
    }

    Singleton * del = Singleton::getInstance();
    cout << "Usuwam instancje..." << endl;
    del->deleteInstance();

    cout << "Pobieram nowa:" << endl;
    Singleton * z = Singleton::getInstance();
    cout << "Z:\t" << z << "\t" << z->getSecretNumber() << endl;

    cout << "\nDisclaimer:\n" <<
            "Addres of new instance occur to be the same as first one, " <<
            "but it is caused because the new instance is placed in the same place in memory.\n" <<
            "The secret_number is new, which proves, that constructor has been used." << endl;

    return 0;
}