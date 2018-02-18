#include "Seaplane.h"
#include <iostream>

using namespace std;

Seaplane::Seaplane(){
        Buoyancy = 0;
        No_of_engines = 0;
        No_of_passengers = 0;
        Max_weight_luggage = 0;
}


 void Seaplane::printInfo()
{
        cout<< "Name : "<<Name <<endl;
        cout<< "Buoyancy : "<<Buoyancy <<endl;
        cout<< "No. of engines : "<<No_of_engines <<endl;
        cout<< "No. of passengers : "<<No_of_passengers <<endl;
        cout<< "Max. weight of luggage : "<<Max_weight_luggage <<endl;
        cout<< "Top Speed : "<<TopSpeed <<endl;
        cout<< "Dimension : "<<Dimension <<endl;
        cout<< "Range of Service : "<<RangeOfServ <<endl;
        cout<< "Range : "<<Range <<endl;
}