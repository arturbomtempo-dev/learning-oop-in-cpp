#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"
class Cachorro : public Animal {
    public:
    // Construtor para a classe derivada(filha)
    Cachorro(string n);
    // Metodo sobrescrito para emitir som especifico
    void som() override;
    // Metodo exclusivo da classe cachorro
    void buscar();
};

#endif 