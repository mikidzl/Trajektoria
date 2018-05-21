#ifndef PLIKI_H
#define PLIKI_H

#include <fstream>
#include <cmath>
#include "punkt.h"

using namespace std;

bool wczytaj(string nazwa, Punkt *&g);
bool wczytaj_baze(string nazwa, double Ob[4][3]);
bool zapisz(string nazwa, Punkt *w);
bool zapisz_wolfram(string nazwa, Punkt *w);


#endif // PLIKI_H
