#include <iostream>
#include <string> // Adicione esta linha para incluir a definição da classe Animal
#include "Animal.h" // Inclua o header da classe base Animal

using namespace std;

class Cachorro : public Animal {
public:
    Cachorro(string nome) : Animal(nome) {}

    void som() override {
        cout << nome << " esta latindo." << endl;
    }

    void buscar() {
        cout << nome << " esta pegando a bola." << endl;
    }
};

