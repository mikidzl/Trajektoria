#ifndef BAZA_OBIEKTOW_H
#define BAZA_OBIEKTOW_H

#include <cmath>
#include "pliki.h"

struct obiekt{
    string nazwaOb;
    double Cd,A,Masa;
};

bool ladowanie_bazy(obiekt *Ob);

#endif // BAZA_OBIEKTOW_H
