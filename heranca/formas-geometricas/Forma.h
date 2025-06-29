#ifndef FORMA_H
#define FORMA_H

#include <iostream>
using namespace std;

class Forma {
protected:
    string nome;
public:
    Forma(string n);
    virtual void desenhar();
};

#endif