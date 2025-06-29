#include <iostream>
#include <string>

using namespace std;

class Conta{
private:
    float valor;
    float saldo;
    float taxa = 0.05; 
public:
    Conta(float valor, float saldo) {
        this->valor = valor;
        this->saldo = saldo;
    }

    void depositar(float valor) {
        saldo += valor;
    }

    void sacar(float valor) {
        if(valor > saldo) {
            cout << "Saldo insuficiente para saque." << endl;
        } else {
            saldo -= valor + (valor * taxa);
        }
    }

    float getSaldo() {
        return saldo;
    }
};

int main(){
    Conta conta1(0, 1000); 
    Conta conta2(0, 500); 

    conta1.depositar(200);
    cout << "Saldo da conta1 apos deposito: " << conta1.getSaldo() << endl;

    conta2.sacar(100);
    cout << "Saldo da conta2 apos saque: " << conta2.getSaldo() << endl;
}