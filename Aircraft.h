#ifndef AIRCRAFT
#define AIRCRAFT 

#include <iostream>

using namespace std;

class Aircraft
{
    public:
        Aircraft();

        void setMaximumAlt(float m){MaximumAlt = m;}
        void setTopSpeed(float s){TopSpeed = s;}
        void setDimension(string d){Dimension = d;}
        void setRangeOfServ(int rs){RangeOfServ = rs;}
        void setName(string n){Name = n;}
        void setRange(float r){Range = r;}

        float getMaximumAlt(){return MaximumAlt;}
        float getTopSpeed(){return TopSpeed;}
        string getDimension(){return Dimension;}
        int getRangeOfServ(){return RangeOfServ;}
        string getName(){return Name;}
        float getRange(){return Range;}        

        //Virtual methods.
        // Abstrat function, force this class to be an abstract class, can create object out of it
        virtual void printInfo()=0;
        // Virtual method, allow the derived class to override the definition of the method
        virtual void ReadFromFile(string filename){return;}

    protected:
        float MaximumAlt;
        float TopSpeed;
        string Dimension;
        int RangeOfServ;
        string Name;
        float Range;


    private:
};

#endif // !AIRCRAFT