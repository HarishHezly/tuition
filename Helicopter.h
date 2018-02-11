#ifndef HELICOPTER
#define HELICOPTER
#include "Aircraft.h"

class Helicopter : public Aircraft
{
    private:
        int No_of_blades;
        int No_of_passengers;
        int No_of_tail_rotor_blades;
        float Torque;

    public:
        Helicopter();

        void setNo_of_blades(int b){No_of_blades = b;}
        void setNo_of_passengers(int p){No_of_passengers = p;}
        void setNo_of_tail_rotor_blades(int r){No_of_tail_rotor_blades = r;}
        void setTorque(float t){Torque = t;}

        int getNo_of_blades(){return No_of_blades;}
        int getNo_of_passengers(){return No_of_tail_rotor_blades;}
        int getNo_of_tail_rotor_blades(){return No_of_tail_rotor_blades;}
        float getTorque(){return Torque;}

        void printInfo();
        void ReadFromFile(string);

};

#endif // !HELICOPTER