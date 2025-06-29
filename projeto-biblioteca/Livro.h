#ifndef LIVRO_H
#define LIVRO_H

#include <string>

using namespace std;

class Livro
{
private:
    string titulo;
    string autor;
    int ano;

public:
    Livro(string titulo, string autor, int ano);
    string getTitulo();
    string getAutor();
    int getAno();
    void exibir();
};

#endif