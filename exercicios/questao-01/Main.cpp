#include <iostream>
#include <string>

using namespace std;

class Cliente
{
private:
    string nome;
    string dataNascimento;
    string endereco;
    string telefone;

public:
    Cliente()
    {
        this->nome = "Sem nome";
        this->dataNascimento = "10/10/2020";
        this->endereco = "Sem endereço";
        this->telefone = "(31) 99999-9999";
    }

    Cliente(string nome, string dataNascimento, string endereco, string telefone)
    {
        this->nome = nome;
        this->dataNascimento = dataNascimento;
        this->endereco = endereco;
        this->telefone = telefone;
    }

    string getNome()
    {
        return this->nome;
    }

    void setNome(string nome)
    {
        this->nome = nome;
    }

    string getDataNascimento()
    {
        return this->dataNascimento;
    }

    void setDataNascimento(string dataNascimento)
    {
        this->dataNascimento = dataNascimento;
    }

    string getEndereco()
    {
        return this->endereco;
    }

    void setEndereco(string endereco)
    {
        this->endereco = endereco;
    }

    string getTelefone()
    {
        return this->telefone;
    }

    void setTelefone(string telefone)
    {
        this->telefone = telefone;
    }
};

int main()
{
    int n;
    cout << "Quantos clientes deseja cadastrar? ";
    cin >> n;
    cin.ignore(); // Limpa o buffer do teclado para evitar problemas ao usar getline após cin >>

    Cliente clientes[n];

    for (int i = 0; i < n; ++i)
    {
        string nome, dataNascimento, endereco, telefone;

        cout << "\nCliente " << i + 1 << ":\n";
        cout << "Digite o nome: ";
        getline(cin, nome);

        cout << "Digite a data de nascimento (dd/mm/aaaa): ";
        getline(cin, dataNascimento);

        cout << "Digite o endereco: ";
        getline(cin, endereco);

        cout << "Digite o telefone: ";
        getline(cin, telefone);

        clientes[i] = Cliente(nome, dataNascimento, endereco, telefone);
    }

    cout << "\nDados dos clientes:\n";

    for (int i = 0; i < n; ++i)
    {
        cout << "\nCliente " << i + 1 << ":\n";
        cout << "Nome: " << clientes[i].getNome() << endl;
        cout << "Data de Nascimento: " << clientes[i].getDataNascimento() << endl;
        cout << "Endereco: " << clientes[i].getEndereco() << endl;
        cout << "Telefone: " << clientes[i].getTelefone() << endl;
    }

    return 0;
}
