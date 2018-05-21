#ifndef TRAJEKTORIA_H
#define TRAJEKTORIA_H

#include <cmath>
#include "punkt.h"
#include "atmosfera.h"
#include "listy.h"

using namespace std;

double SilaOporu(Punkt *p, double alfa);

double PolozenieX(double x0, double vx, double F, double alfa);

double PolozenieY(double y0, double vy, double F, double alfa);

double Predkosc_x(double vx, double F, double alfa);

double Predkosc_y(double vy, double F, double alfa);

double Reynolds(Punkt *p);

void Krzywa(double x, double y, double F, double vx, double vy, Punkt *&p, double alfa);

void Parabola(Punkt *&p);

double Trajektoria(double W[], double S[], double O[], bool atmosfera, Punkt *&g);

#endif // TRAJEKTORIA_H
