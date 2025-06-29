#include "Circulo.h"
#include <iostream>
using namespace std;

Circulo::Circulo(string n) : Forma(n) {}

void Circulo::desenhar() {
    cout << "Desenhando um circulo: " << nome << endl;
}