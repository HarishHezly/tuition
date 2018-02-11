#include "Aircraft.h"
#include "Seaplane.h"
#include "Helicopter.h"
#include "Jet_fighter.h"
#include <iostream>

using namespace std;

int main()
{
    cout<<"Welcome to Malaysian Airport Hanger Hotel"<<endl;
    Aircraft myAircraft;
    Jet_fighter myJet_fighter;
    Seaplane mySeaplane;
    Helicopter myHelicopter;

    myHelicopter.ReadFromFile("dataHelicopter.txt");
    myHelicopter.printInfo();
    cout<< endl;
    myJet_fighter.ReadFromFile("dataJet_Fighter.txt");
    myJet_fighter.printInfo();

    return 0;

}