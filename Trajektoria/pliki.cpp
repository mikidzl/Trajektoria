#include "pliki.h"

bool wczytaj(string nazwa, Punkt *&g)
{
    ifstream plik(nazwa.c_str());

    if(!plik.is_open()) return false;

    Punkt *a=0;

    double x,y,v,alfa;

    while(!plik.eof())
    {
        plik>> x >> y >> v >> alfa;

        if(g==0)
        {
            g= new Punkt;
            a=g;
        }
        else
        {
            a->n= new Punkt;
            a=a->n;
        }
        a->x=x;
        a->y=y;
        a->vx=v;
        a->vy=alfa;
    }

    plik.close();

    return true;
}

bool wczytaj_baze(string nazwa, double Ob[][3])
{   
    ifstream plik(nazwa.c_str());

    if(!plik.is_open()) return false;

    double Cd,Masa,A;
    int i=0;

    while(!plik.eof())
    {
        plik>> Cd >> Masa >> A;

        Ob[i][0]=Cd;
        Ob[i][1]=Masa;
        Ob[i][2]=A;

        i++;
    }

    plik.close();

    return true;
}

bool zapisz(string nazwa, Punkt *w)
{
    nazwa= ".\\Trajektorie\\"+nazwa;

    ofstream plik(nazwa.c_str());

    if(!plik.is_open()) return false;

    while(w!=0)
    {
        plik<< w->x << " " << w->y << endl; //<< " " << hypot(w->vx,w->vy) << " " << atan2(w->vy,w->vx)*180/M_PI << endl;
        w=w->n;
    }
    return true;
}

bool zapisz_wolfram(string nazwa, Punkt *w)
{
    ofstream plik(nazwa.c_str());

    if(!plik.is_open()) return false;

    while(w!=0)
    {
        plik<< "{" << w->x << "," << w->y << "},";
        w=w->n;
    }
    return true;
}
