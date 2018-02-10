#ifndef JET_FIGHTER
#define JET_FIGHTER

#include "Aircraft.h"

class Jet_fighter : public Aircraft
{
    private:
        float Mach_num;
        int No_of_missiles;
        int No_of_pilots;

    public:
        Jet_fighter();

        void setMach_num(float M){Mach_num = M;}
        void setNo_of_missiles(int m){No_of_missiles = m;}
        void setNo_of_pilots(int p){No_of_pilots = p;}

        float getMach_num(){return Mach_num;}
        int getNo_of_missiles(){return No_of_missiles;}
        int getNo_of_pilots(){return No_of_pilots;}
        
};

#endif // !SEAPLANE
