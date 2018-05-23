#ifndef PLIKI_H
#define PLIKI_H

#include <fstream>
#include <cmath>
#include "punkt.h"
#include "baza_obiektow.h"

using namespace std;

bool wczytaj(string nazwa, Punkt *&g);
struct obiekt* wczytaj_baze(string nazwa);
bool zapisz(string nazwa, Punkt *w);
bool zapisz_wolfram(string nazwa, Punkt *w);


#endif // PLIKI_H
