#include "atmosfera.h"

double gestosc(double Ro, double y)                 //wzorcowy model atmosfery do 11km
{
    return Ro*pow((1-y/44300),4.256);
}

double V_wiatr(double vx, double vy, double U)      //predkosc wzgledem wiatru
{
    return hypot(vx-U,vy);
}

double Kat_wiatru(double vx, double vy , double U)  //kat wektora predkości względem wiatru
{
        return atan2(vy,vx-U);
}
