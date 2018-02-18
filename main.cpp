#include "Aircraft.h"
#include "Seaplane.h"
#include "Helicopter.h"
#include "Jet_fighter.h"
#include <iostream>

using namespace std;

//Polymorphism, using the Aircraft class pointer to call virtual member for the derived class.
void displayData(Aircraft *p)
{
    p->printInfo();
}



int main()
{
    cout<<"Welcome to Malaysian Airport Hanger Hotel"<<endl;

    Jet_fighter myJet_fighter;
    Seaplane    mySeaplane;
    Helicopter  myHelicopter;

    myHelicopter.ReadFromFile("dataHelicopter.txt");
    myJet_fighter.ReadFromFile("dataJet_Fighter.txt");

    displayData(&myHelicopter);
    displayData(&myJet_fighter);
 
    
    return 0;

}