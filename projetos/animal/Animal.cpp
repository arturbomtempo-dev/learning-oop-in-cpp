#include <iostream>
#include "Animal.h"

using namespace std;

Animal::Animal(string nome)
{
    this->nome = nome;
}

void Animal::emitirSom()
{
    cout << "O animal " << nome << " esta emitindo um som." << endl;
}

void Animal::mostrarNome()
{
    cout << "Nome do animal: " << nome << endl;
}

void Animal::comer()
{
    cout << "O animal " << nome << " esta comendo." << endl;
}

void Animal::dormir()
{
    cout << "O animal " << nome << " esta dormindo." << endl;
}
