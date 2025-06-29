#include <iostream>
using namespace std;

class Elevador
{
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

public:
    Elevador(int capacidade, int totalAndares)
    {
        this->capacidade = capacidade;
        this->totalAndares = totalAndares;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    void entrar()
    {
        if (pessoasPresentes < capacidade)
        {
            pessoasPresentes++;
            cout << "Uma pessoa entrou no elevador. Total de pessoas: " << pessoasPresentes << endl;
        }
        else
        {
            cout << "Elevador cheio! Nao e possivel entrar." << endl;
        }
    }

    void sair()
    {
        if (pessoasPresentes > 0)
        {
            pessoasPresentes--;
            cout << "Uma pessoa saiu do elevador. Total de pessoas: " << pessoasPresentes << endl;
        }
        else
        {
            cout << "Elevador vazio! Nao e possivel sair." << endl;
        }
    }

    void sobe()
    {
        if (andarAtual < totalAndares)
        {
            andarAtual++;
            cout << "Elevador subiu para o andar " << andarAtual << endl;
        }
        else
        {
            cout << "O elevador ja esta no ultimo andar!\n";
        }
    }

    void desce()
    {
        if (andarAtual > 0)
        {
            andarAtual--;
            cout << "Elevador desceu para o andar " << andarAtual << endl;
        }
        else
        {
            cout << "O elevador ja esta no terreo!\n";
        }
    }
     // Getters
    int getAndarAtual() { 
        return andarAtual; 
    }
    int getTotalAndares() { 
        return totalAndares; 
    }
    int getCapacidade() { 
        return capacidade; 
    }
    int getPessoasPresentes() { 
        return pessoasPresentes; 
    }
};

int main()
{
    Elevador elevador(5, 10);

    elevador.entrar();
    elevador.entrar();
    elevador.sobe();
    elevador.sobe();
    elevador.sair();
    elevador.desce();

    cout << "\nEstado final do elevador:\n";
    cout << "Andar atual: " << elevador.getAndarAtual() << endl;
    cout << "Total de andares: " << elevador.getTotalAndares() << endl;
    cout << "Capacidade: " << elevador.getCapacidade() << endl;
    cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;

    return 0;
}