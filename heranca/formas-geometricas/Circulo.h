#ifndef CIRCULO_H
#define CIRCULO_H

#include "Forma.h"

class Circulo : public Forma {
public:
    Circulo(string n);
    void desenhar() override;
};

#endif