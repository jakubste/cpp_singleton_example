//
// Created by kuba on 11.10.15.
//

#ifndef SINGLETONTEST_SINGLETON_H
#define SINGLETONTEST_SINGLETON_H

class Singleton {
public:
    static Singleton * getInstance();
    static void deleteInstance();

    int getSecretNumber();

private:
    Singleton();
    ~Singleton();

    int secret_number;

    static Singleton * instance;
};

#endif //SINGLETONTEST_SINGLETON_H
