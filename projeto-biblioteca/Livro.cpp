#include "Livro.h"
#include <iostream>

using namespace std;

Livro::Livro()
{
    titulo = "";
    autor = "";
    ano = 0;
}

Livro::Livro(string titulo, string autor, int ano)
{
    this->titulo = titulo;
    this->autor = autor;
    this->ano = ano;
}

string Livro::getTitulo()
{
    return titulo;
}

string Livro::getAutor()
{
    return autor;
}

int Livro::getAno()
{
    return ano;
}

void Livro::exibir()
{
    cout << "Título: " << titulo << "\nAutor: " << autor << "\nAno: " << ano << "\n\n";
}