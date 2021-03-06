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

obiekt* wczytaj_baze(string nazwa)
{   
    ifstream plik(nazwa.c_str());

    if(!plik.is_open())
    {
        obiekt* O = new obiekt[1];
        O[0].nazwaOb = '0';
        return O;
    }
    string linia;
    int i=0;
    int n=0;

    while(getline(plik,linia))
    {
        n++;
    }

    obiekt* O = new obiekt[n];

    while(!plik.eof())
    {
        plik>> O[i].nazwaOb >> O[i].Cd >> O[i].Masa >> O[i].A;

        i++;
    }


    plik.close();


    return O;
}

bool zapisz(string nazwa, Punkt *w)
{
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
