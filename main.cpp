#include <iostream>
#include "Animal.h"
#include "Mammal.h"
#include "Mammal.h"
#include "Reptile.h"
#include "Enclosure.h"
#include "Visitor.h"
#include <string>
using namespace std;


        Animal::Animal(){
            name = "";
            age = 0;
        }
        Animal::Animal(string n ,int a ,bool h){
            name = n;
            age = a;
            isHungry = h;
        }

        void Animal::feed(){
            cout << isHungry  << endl;

        };

        void Animal::display(){
            cout << name << age << isHungry << endl;
        };

        Animal::~Animal() {};
        
        Mammal::Mammal(){
            furColor = "null";
        };

        Mammal::Mammal(string fc){
            furColor = fc;
        };

        Mammal::~Mammal(){};

        Bird::Bird(){
            wingSpan = 0.0;
        };


        Bird::Bird(float ws){
            wingSpan = ws;
        };

        Bird::~Bird() {};


        Enclosure::Enclosure(){
            capacity = 0;
            currentCount = 0;
        };
        Enclosure::Enclosure(int c,int cc){
                capacity = c;
                currentCount = cc;
                Animal = new Animal[capacity];
        };

        Enclosure::~Enclosure(){
            delete[] Animal;
        };

        Reptile::Reptile(){
            isVenomous = false;
        };
        
        Reptile::Reptile(bool a){
            isVenomous = a;
        };

        Reptile::~Reptile(){};

        Visitor::Visitor(){
            visitorName = "";
            ticketsBought = 0;
        };

        Visitor::Visitor(string n,int t){
            visitorName = n;
            ticketsBought =t;
        };

        void Visitor::displayInfo(){
            cout<< visitorName << ticketsBought <<endl;
        };

int main(){

    return 0;
}

