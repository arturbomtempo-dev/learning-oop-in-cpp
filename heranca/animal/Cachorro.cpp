#include <iostream>
#include <string> // Adicione esta linha para incluir a definição da classe Animal
#include "Animal.h" // Inclua o header da classe base Animal
#include "Cachorro.h" // Inclua o header da classe Cachorro

using namespace std;

class Cachorro : public Animal {
public:
    Cachorro(string nome) : Animal(nome) {}

    void emitirSom() override {
        cout << nome << " esta latindo." << endl;
    }

    void buscar() {
        cout << nome << " esta pegando a bola." << endl;
    }
};

