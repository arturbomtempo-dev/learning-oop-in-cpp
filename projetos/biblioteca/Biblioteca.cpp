#include "Biblioteca.h"
#include <iostream>

Biblioteca::Biblioteca()
{
    quantidadeLivros = 0;
}

void Biblioteca::adicionarLivro(Livro livro)
{
    if (quantidadeLivros < MAX_LIVROS)
    {
        livros[quantidadeLivros++] = livro;
    }
    else
    {
        std::cout << "Limite de livros atingido.\n";
    }
}

void Biblioteca::listarLivros()
{
    if (quantidadeLivros == 0)
    {
        std::cout << "Nenhum livro cadastrado.\n";
        return;
    }

    for (int i = 0; i < quantidadeLivros; ++i)
    {
        livros[i].exibir();
    }
}

void Biblioteca::buscarPorTitulo(std::string titulo)
{
    bool encontrado = false;

    for (int i = 0; i < quantidadeLivros; ++i)
    {
        if (livros[i].getTitulo() == titulo)
        {
            livros[i].exibir();
            encontrado = true;
        }
    }

    if (!encontrado)
    {
        std::cout << "Livro não encontrado.\n";
    }
}

void Biblioteca::removerPorTitulo(std::string titulo)
{
    for (int i = 0; i < quantidadeLivros; ++i)
    {
        if (livros[i].getTitulo() == titulo)
        {
            for (int j = i; j < quantidadeLivros - 1; ++j)
            {
                livros[j] = livros[j + 1];
            }

            --quantidadeLivros;

            std::cout << "Livro removido com sucesso.\n";
            return;
        }
    }

    std::cout << "Livro não encontrado.\n";
}