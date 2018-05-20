#include "listy.h"

void usun(Punkt *&g)
{
    while(g!=0)
    {
        Punkt *p=g;
        g=g->n;
        delete p;
    }
}



