#include <iostream>
#include <string>
#include "Animal.h"
#include "Gato.h"

using namespace std;
class Gato : public Animal
{
public:
    Gato(string n) : Animal(n) {}
    void emitirSom() override
    {
        cout << nome << " esta miando." << endl;
    }
    void escalar()
    {
        cout << nome << " esta escalando." << endl;
    }
};
