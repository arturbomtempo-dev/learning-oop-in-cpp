#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato : public Animal
{
public:
    Gato(string n);
    void emitirSom() override;
    void escalar();
};

#endif