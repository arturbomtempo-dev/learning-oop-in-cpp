#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>
using namespace std;
// Classe base
class Animal {
    protected:
    string nome;
    public:
    Animal(string n);
    virtual void som();// Metodo para emitir som (polimorfico)
    void mostrarNome();
};

#endif // ANIMAL_H