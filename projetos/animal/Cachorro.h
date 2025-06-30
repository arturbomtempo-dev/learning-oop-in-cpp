#ifndef CACHORRO_H
#define CACHORRO_H

#include "Animal.h"
class Cachorro : public Animal
{
public:
    Cachorro(string nome);
    void emitirSom() override;
    void buscar();
};

#endif