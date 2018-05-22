#include "baza_obiektow.h"


bool ladowanie_bazy(double Ob[][3])
{
    if(wczytaj_baze("Baza_obiektow.txt",Ob))
        return true;

    return false;
}
