#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

using namespace std;

class Animal
{
protected:
    string nome;

public:
    Animal(string nome);
    virtual void emitirSom();
    void mostrarNome();
    void comer();
    void dormir();
};

#endif