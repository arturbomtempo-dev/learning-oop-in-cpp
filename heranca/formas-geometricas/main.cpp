#include "Forma.h"
#include "Circulo.h"

int main() {
    Forma f("Forma");
    f.desenhar();

    // Criando um objeto da classe derivada Circulo que sobrescreve o método desenhar
    Circulo c("Circulo");
    c.desenhar();

    return 0;
}