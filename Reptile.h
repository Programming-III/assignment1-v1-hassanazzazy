#ifndef REPTILE_H
#define REPTILE_H

#include "Animal.h"
#include <string>
using namespace std;
class Reptile{
    private:
    bool isVenomous;
    public:
    Reptile();
    Reptile(bool a);
};
#endif
