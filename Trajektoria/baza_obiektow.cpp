#include "baza_obiektow.h"


bool ladowanie_bazy(obiekt *Ob)
{
    if(wczytaj_baze("Baza_obiektow.txt",Ob))
        return true;

    return false;
}
