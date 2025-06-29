#include <iostream>
#include <string>

using namespace std;

class Eletrodomestico
{
private:
    string nome;
    string telefone;
    float preco;

public:
    Eletrodomestico()
    {
        nome = "";
        telefone = "";
        preco = 0.0;
    }

    Eletrodomestico(string nome, string telefone, float preco)
    {
        this->nome = nome;
        this->telefone = telefone;
        this->preco = preco;
    }

    void exibirInformacoes()
    {
        cout << "Nome da loja: " << nome << endl;
        cout << "Telefone da loja: " << telefone << endl;
        cout << "Preco da loja: " << preco << endl;
    }

    float getPreco()
    {
        return preco;
    }
};
int main()
{
    Eletrodomestico lista[15];
    double menor, maior, soma = 0.0;

    for (int i = 0; i < 15; ++i)
    {
        string loja, telefone;
        double preco;

        cout << "Cadastro do item " << i + 1 << ":" << endl;
        cout << "Nome da loja: ";
        cin >> loja;
        cout << "Telefone da loja: ";
        cin >> telefone;
        cout << "Preco do eletrodomestico: R$ ";
        cin >> preco;

        lista[i] = Eletrodomestico(loja, telefone, preco);
    }

    menor = lista[0].getPreco();
    maior = lista[0].getPreco();

    for (int i = 0; i < 15; ++i)
    {
        double preco = lista[i].getPreco();
        if (preco < menor)
            menor = preco;
        if (preco > maior)
            maior = preco;
        soma += preco;
    }

    double media = soma / 15;

    cout << "\nEstatisticas dos precos cadastrados:" << endl;
    cout << "Menor preco: R$ " << menor << endl;
    cout << "Preco medio: R$ " << media << endl;
    cout << "Maior preco: R$ " << maior << endl;

    return 0;
}
