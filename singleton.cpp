//
// Created by kuba on 11.10.15.
//

#include <time.h>
#include <iostream>
#include <stdlib.h>
#include "singleton.h"

using namespace std;

Singleton::Singleton() {

    srand(time(NULL));
    secret_number = rand() % 10 + 1;
}

Singleton::~Singleton() { }

int Singleton::getSecretNumber() {
    return secret_number;
}

Singleton* Singleton::instance;

Singleton *Singleton::getInstance() {
    if (Singleton::instance == 0) {
        Singleton::instance = new Singleton;
    }

    return Singleton::instance;
}

void Singleton::deleteInstance() {
    delete Singleton::instance;
}