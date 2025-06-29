#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
    string nome;
    int idade;
    float altura;

public:
    //setters
    void setNome(string nome){
        this->nome = nome;
    }
    void setIdade(int idade){
        this->idade = idade;
    }
    void setAltura(float altura){
        this->altura = altura;
    }
    //getters
    string getNome(){
        return nome;
    }

    int getIdade(){
        return idade;
    }

    float getAltura(){
        return altura;
    }
};

int main(){
    Pessoa pessoa1;
    Pessoa pessoa2;

    pessoa1.setNome("Artur");
    pessoa1.setIdade(19);
    pessoa1.setAltura(1.74);

    pessoa2.setNome("Eduarda");
    pessoa2.setIdade(19);
    pessoa2.setAltura(1.59);

    cout << "Pessoa 1: " << pessoa1.getNome() << ", Idade: " << pessoa1.getIdade() << ", Altura: " << pessoa1.getAltura() << endl;
    cout << "Pessoa 2: " << pessoa2.getNome() << ", Idade: " << pessoa2.getIdade() << ", Altura: " << pessoa2.getAltura() << endl;

    return 0;
}   