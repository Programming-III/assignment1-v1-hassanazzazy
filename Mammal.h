#ifndef MAMMAL_H
#define MAMMAL_H

#include "Animal.h"
#include <string>
using namespace std;
class Mammal : public Animal{
    private:
    string furColor;

    public:
    Mammal();
    Mammal(string fC);
    ~Mammal();
};
#endif
