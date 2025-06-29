#include "Cachorro.h"
#include <iostream>

using namespace std;

Cachorro::Cachorro(string nome) : Animal(nome) {}

void Cachorro::emitirSom()
{
    cout << nome << " esta latindo." << endl;
}

void Cachorro::buscar()
{
    cout << nome << " esta pegando a bola." << endl;
}
