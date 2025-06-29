#include <iostream>
#include <string>
#include "Animal.h"
#include "Gato.h"

using namespace std;

Gato::Gato(string n) : Animal(n) {}

void Gato::emitirSom()
{
    cout << nome << " esta miando." << endl;
}

void Gato::escalar()
{
    cout << nome << " esta escalando." << endl;
}
