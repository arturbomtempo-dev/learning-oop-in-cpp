#include <iostream>
#include <string>
using namespace std;

// Classe base Forma
class Forma {
protected:
    string nome;
public:
    Forma(string nome) : nome(nome) {}

    virtual void exibir() {
        cout << "Forma: " << nome << endl;
        desenhar();
    }

    virtual void desenhar() {
        cout << "(Desenho generico da forma)" << endl;
    }
};

// Classe derivada: Circulo
class Circulo : public Forma {
public:
    Circulo(string nome) : Forma(nome) {}

    void desenhar() override {
        cout << "  **** " << endl;
        cout << " *    * " << endl;
        cout << " *    * " << endl;
        cout << "  **** " << endl;
    }
};

// Classe derivada: Retangulo
class Retangulo : public Forma {
public:
    Retangulo(string nome) : Forma(nome) {}

    void desenhar() override {
        cout << "****" << endl;
        cout << "*  *" << endl;
        cout << "*  *" << endl;
        cout << "****" << endl;
    }
};

// Classe derivada: Quadrado
class Quadrado : public Forma {
public:
    Quadrado(string nome) : Forma(nome) {}

    void desenhar() override {
        cout << "******" << endl;
        cout << "*    *" << endl;
        cout << "*    *" << endl;
        cout << "******" << endl;
    }
    
};

int main() {
    Forma formaGenerica("Forma Generica");
    formaGenerica.exibir();

    cout << endl;

    Circulo meuCirculo("Circulo");
    meuCirculo.exibir();

    cout << endl;

    Retangulo meuRetangulo("Retangulo");
    meuRetangulo.exibir();

    cout << endl;

    Quadrado meuQuadrado("Quadrado");
    meuQuadrado.exibir();

    return 0;
}
