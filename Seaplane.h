#ifndef SEAPLANE
#define SEAPLANE

#include "Aircraft.h"

class Seaplane : public Aircraft
{
    private:
        float Buoyancy;
        int No_of_engines;
        int No_of_passengers;
        float Max_weight_luggage;

    public:
        Seaplane();

        void setBuoyancy(float b){Buoyancy = b;}
        void setNo_of_engines(int e){No_of_engines = e;}
        void setNo_of_passengers(int p){No_of_passengers = p;}
        void setMax_weight_luggage(float w){Max_weight_luggage = w;}

        float getBuoyancy(){return Buoyancy;}
        int getNo_of_engines(){return No_of_engines;}
        int getNo_of_passengers(){return No_of_passengers;}
        int getMax_weight_luggage(){return Max_weight_luggage;}

        void printInfo();

};

#endif // !SEAPLANE
