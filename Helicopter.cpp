#include "Helicopter.h"
#include <iostream>
#include <fstream>

using namespace std;

Helicopter::Helicopter(){

        No_of_blades = 0;
        No_of_passengers = 0;
        No_of_tail_rotor_blades = 0;
        Torque = 0;
}

void Helicopter::printInfo()
{
        cout<< "Name : "<<Name <<endl;
        cout<< "No. of blades : "<<No_of_blades <<endl;
        cout<< "No. of passengers : "<<No_of_passengers <<endl;
        cout<< "No. of tail rotor blades : "<<No_of_tail_rotor_blades <<endl;
        cout<< "Torque : "<<Torque <<endl;
        cout<< "Maximum alt. : "<<MaximumAlt <<endl;
        cout<< "Top Speed : "<<TopSpeed <<endl;
        cout<< "Dimension : "<<Dimension <<endl;
        cout<< "Range of Service : "<<RangeOfServ <<endl;
        cout<< "Range : "<<Range <<endl;


}

void Helicopter::ReadFromFile(string filename)
{
        ifstream myfile;
        myfile.open(filename.c_str());
        myfile >> No_of_blades;
        myfile >> No_of_passengers;
        myfile >> No_of_tail_rotor_blades;
        myfile >> Torque;
        myfile >> MaximumAlt;
        myfile >> TopSpeed;
        myfile >> Dimension;
        myfile >> RangeOfServ;
        myfile.ignore();
        myfile.ignore();
        getline(myfile, Name);
        myfile >> Range;
        myfile.close();

}