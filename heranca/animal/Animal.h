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
    virtual void emitirSom();// Metodo para emitir som (polimorfico)
    void mostrarNome();
    void comer();
    void dormir();
};

#endif // ANIMAL_H