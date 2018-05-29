#include "baza_obiektow.h"


bool ladowanie_bazy(double Ob[][3])
{
    if(wczytaj_baze("Baza_obiektow.txt",Ob))
        return true;
    else
    {
        for(int i = 0; i<5; i++)
        {
            Ob[i][0]=0.3;
            Ob[i][1]=0.00745;
            Ob[i][2]=0.00025;
        }
    }

    return false;
}
