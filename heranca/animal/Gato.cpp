#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

class Gato : public Animal {
public:
    Gato(string n) : Animal(n) {}
    void som() override {
        cout << nome << " esta miando." << endl;
    }
    void escalar() {
        cout << nome << " esta escalando." << endl;
    }
};
