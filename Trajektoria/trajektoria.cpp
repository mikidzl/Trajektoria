#include "trajektoria.h"

double Ro,A,Cd,Skok,Masa,G,U,V0,Alfa,H;
int i;

double SilaOporu(Punkt *p)
{
    return (gestosc(Ro,p->y)*A*Cd*pow(V_wiatr(p->vx,p->vy,U),2))/2;
}

double PolozenieX(double x0, double vx, double F, double alfa)
{
    return x0+vx*Skok-cos(alfa)*F*pow(Skok,2)/(2*Masa);
}

double PolozenieY(double y0, double vy, double F, double alfa)
{
    return y0+vy*Skok-(sin(alfa)*F+G*Masa)*pow(Skok,2)/(2*Masa);
}

double Predkosc_x(double vx, double F, double alfa)
{
    return vx-cos(alfa)*F*Skok/Masa;
}

double Predkosc_y(double vy, double F, double alfa)
{
    return vy-(sin(alfa)*F+G*Masa)*Skok/Masa;
}

double Reynolds(Punkt *p)                                                   //Liczba Reynoldsa(niewykorzystywana)
{
    return V_wiatr(p->vx,p->vy,U)*sqrt(A)*gestosc(Ro,p->y)/0.00001846;
}

void Krzywa(double x, double y, double F, double vx, double vy, Punkt *&p, double alfa)
{
    p->n=new Punkt;
    p=p->n;
    p->x=PolozenieX(x,vx,F,alfa);
    p->y=PolozenieY(y,vy,F,alfa);
    p->vx=Predkosc_x(vx,F,alfa);
    p->vy=Predkosc_y(vy,F,alfa);
    p->n=0;
}

void Parabola(Punkt *&p)
{
    p->n= new Punkt;
    p=p->n;
    p->x=V0*cos(Alfa)*Skok*i;
    p->y=H+V0*sin(Alfa)*Skok*i-G*pow(Skok*i,2)/2;
    p->vx=V0*cos(Alfa);
    p->vy=V0*sin(Alfa)-G*Skok*i;
    p->n=0;
}

double Trajektoria(double W[], double S[], double O[], bool atmosfera, Punkt *&g)
{
    G=S[0];                 //stałe
    Ro=S[1];
    Skok=S[2];

    Cd=O[0];                //parametry obiektu
    Masa=O[1];
    A=O[2];

    V0=W[0];                //wartości początkowe
    Alfa=W[1];
    H=W[2];
    U=W[3];

    if(g != 0)              //usunięcie starej trajektorii przed zapisem nowej
        usun(g->n);

    g=new Punkt;
    g->x=0;                 //wartości początkowe
    g->y=H;
    g->vx=V0*cos(Alfa);
    g->vy=V0*sin(Alfa);
    g->n=0;

    Punkt *p=g;

    i=0;

    if(atmosfera)
    {
        while(p->y>=0)
        {
            double alfa=Kat_wiatru(p->vx, p->vy, U);
            double F=SilaOporu(p);

            Krzywa(p->x,p->y,F,p->vx,p->vy,p,alfa);     //kolejne iteracje ruchu

            i++;                //licznik iteracji

        };        //moment uderzenia o ziemie
    }
    else
    {
        while(p->y>=0)
        {
            Parabola(p);

            i++;
        }
    }

    return i*Skok;          //zwraca czas
}
