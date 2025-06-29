#include "Biblioteca.h"
#include <iostream>

using namespace std;

int main()
{
    Biblioteca biblioteca;
    int opcao;

    do
    {
        cout << "\n=== Biblioteca ===\n";
        cout << "1. Adicionar livro\n";
        cout << "2. Listar livros\n";
        cout << "3. Buscar por título\n";
        cout << "4. Remover por título\n";
        cout << "0. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cin.ignore();

        if (opcao == 1)
        {
            string titulo, autor;
            int ano;
            cout << "Título: ";
            getline(cin, titulo);
            cout << "Autor: ";
            getline(cin, autor);
            cout << "Ano: ";
            cin >> ano;
            cin.ignore();

            biblioteca.adicionarLivro(Livro(titulo, autor, ano));
        }
        else if (opcao == 2)
        {
            biblioteca.listarLivros();
        }
        else if (opcao == 3)
        {
            string titulo;
            cout << "Título para buscar: ";
            getline(cin, titulo);
            biblioteca.buscarPorTitulo(titulo);
        }
        else if (opcao == 4)
        {
            string titulo;
            cout << "Título para remover: ";
            getline(cin, titulo);
            biblioteca.removerPorTitulo(titulo);
        }

    } while (opcao != 0);

    return 0;
}