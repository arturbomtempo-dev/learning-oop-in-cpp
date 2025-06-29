#include <iostream>
#include <string>
#include "Cachorro.h"
#include "Animal.h"
#include "Gato.h"

using namespace std;

int main() {
    // Criando um objeto da classe base
    Animal animalGenerico("Animal Generico");
    animalGenerico.mostrarNome();
    animalGenerico.emitirSom();
    cout << endl;
    // Criando um objeto da classe derivada
    Cachorro meuCachorro("Buddy");
    meuCachorro.mostrarNome();
    meuCachorro.emitirSom();
    meuCachorro.buscar();

    cout << endl;
    
    Gato meuGato("Garfield");
    meuGato.mostrarNome();
    meuGato.emitirSom();
    meuGato.escalar();

    return 0;

}