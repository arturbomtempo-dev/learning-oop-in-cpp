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

    virtual void emitirSom(){
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
