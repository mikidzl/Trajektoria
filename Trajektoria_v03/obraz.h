#ifndef OBRAZ_H
#define OBRAZ_H

#include <QPainter>
#include <cmath>

#include "punkt.h"
#include "analiza.h"

QPixmap tworzObraz(Punkt *p, int size_x, int size_y);

void rysujTrajektorie(QImage &obraz, Punkt *p, int size_x, int size_y, int a);
void rysujOsie(QImage &obraz, Punkt *p, int size_x, int size_y, int a);
void rysujSiatka(QImage &obraz, Punkt *p, int size_x, int size_y, int a);

void trawka(QImage &obraz, int ziemia, int size_x, int size_y);
void slonko(QImage &obraz);
bool proporcje(double x, double y, int size_x, int size_y);
void wybuch(QImage &obraz, Punkt *p, int size_x, int size_y, int a);



#endif // OBRAZ_H
