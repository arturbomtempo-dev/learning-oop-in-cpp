#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include "Livro.h"
#include <string>

using namespace std;

#define MAX_LIVROS 100

class Biblioteca
{
private:
    Livro livros[MAX_LIVROS];
    int quantidadeLivros;

public:
    Biblioteca();
    void adicionarLivro(Livro livro);
    void listarLivros();
    void buscarPorTitulo(string titulo);
    void removerPorTitulo(string titulo);
};

#endif