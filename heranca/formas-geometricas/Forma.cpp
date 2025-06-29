#include "Forma.h"

Forma::Forma(string n) {
    nome = n;
}

void Forma::desenhar() {
    cout << "Desenhando uma forma generica: " << nome << endl;
}