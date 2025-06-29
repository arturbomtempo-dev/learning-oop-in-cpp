#include <iostream>
#include <string>
using namespace std;

class Animal{
protected: 
    string nome;

public:
    Animal(string nome) {
        this->nome = nome;
    }

    virtual void som(){
        cout << "O animal " << nome << " esta emitindo um som." << endl;
    }; 
    // Método virtual para permitir polimorfismo(override nas classes derivadas(filhas))

    void mostrarNome() {
        cout << "Nome do animal: " << nome << endl;
    }

    void comer(){
        cout << "O animal " << nome << " esta comendo." << endl;
    }

    void dormir(){
        cout << "O animal " << nome << " esta dormindo." << endl;
    }
};


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

class Gato : public Animal {
public:
    Gato(string nome) : Animal(nome) {}

    void som() override {
        cout << nome << " esta miando." << endl;
    }

    void escalar() {
        cout << nome << " esta escalando." << endl;
    }
};

int main() {
    // Criando um objeto da classe base
    Animal animalGenerico("Animal Generico");
    animalGenerico.mostrarNome();
    animalGenerico.som();
    
    cout << endl;

    // Criando um objeto da classe derivada Cachorro
    Cachorro meuCachorro("Buddy");
    meuCachorro.mostrarNome();
    meuCachorro.som();
    meuCachorro.buscar();

    cout << endl;

    // Criando um objeto da classe derivada Gato
    Gato meuGato("Garfield");
    meuGato.mostrarNome();
    meuGato.som();
    meuGato.escalar();

    return 0;
}