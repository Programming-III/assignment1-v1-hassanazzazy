#ifndef VISITOR_H
#define VISITOR_H
#include <string>
using namespace std;

class Visitor{
    private:
    string visitorName;
    int ticketsBought;
    public:
    Visitor();
    Visitor(string n,int t);
    void displayInfo();
};

#endif
