#include "Jet_fighter.h"
#include <iostream>
#include <fstream>

using namespace std;

Jet_fighter::Jet_fighter(){
        Mach_num = 0;
        No_of_missiles = 0;
        No_of_pilots = 0;
}

void Jet_fighter::printInfo()
{
        cout<< "Name : "<<Name <<endl;
        cout<< "Mach : "<<Mach_num <<endl;
        cout<< "No. of missiles : "<<No_of_missiles <<endl;
        cout<< "No. of pilots : "<<No_of_pilots <<endl;
        cout<< "Maximum alt. : "<<MaximumAlt <<endl;
        cout<< "Top Speed : "<<TopSpeed <<endl;
        cout<< "Dimension : "<<Dimension <<endl;
        cout<< "Range of Service : "<<RangeOfServ <<endl;
        cout<< "Range : "<<Range <<endl;


}

void Jet_fighter::ReadFromFile(string filename)
{
        ifstream myfile;
        myfile.open(filename.c_str());
        myfile >> Mach_num;
        myfile >> No_of_missiles;
        myfile >> No_of_pilots;
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