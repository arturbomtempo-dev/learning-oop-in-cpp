#include <iostream>
#include <string>
#include "Cachorro.h"
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main() {
    Cachorro cachorro("Buddy");
    Gato gato("Garfield");

    Animal* animais[2];
    
    animais[0] = &cachorro;
    animais[1] = &gato;

    for (int i = 0; i < 2; ++i) {
        animais[i]->mostrarNome();
        animais[i]->emitirSom();
        cout << endl;
    }

    return 0;
}
