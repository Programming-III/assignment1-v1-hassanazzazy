#ifndef ENCLOSURE_H
#define ENCLOSURE_H
#include <string>
using namespace std;
class Enclosure{
    private:
    int capacity = 0;
    int currentCount;
    
    
    public:
    Enclosure();
    Enclosure(int c,int cc);
    void addAnimal(Animal* a);
    void displayAnimal();
};
#endif
