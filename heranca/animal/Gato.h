#ifndef GATO_H
#define GATO_H
#include "Animal.h"

class Gato: public Animal{
    public:

    Gato(string n);
    // Construtor para a classe derivada(filha)
    void som() override;
    void escalar();

};

#endif 