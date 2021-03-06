#include "analiza.h"

double min_x(Punkt *p)
{
    double minx=0;

    while(p!=0)
    {
        if(p->x < minx)
            minx = p->x;
        p = p->n;
    }

    return abs(minx);
}

double max_x(Punkt *p)
{
    double maxx=0;

    while(p!=0)
    {
        if(p->x > maxx)
            maxx = p->x;
        p = p->n;
    }
    return maxx;
}

double max_y(Punkt *p)
{
    while(p->y <= p->n->y)
    {
        p = p->n;
    }
    return p->y;
}

double max_v(Punkt *p)
{
    double maxv=0;

    while(p!=0)
    {
        if(hypot(p->vx,p->vy) > maxv)
            maxv = hypot(p->vx,p->vy);
        p = p->n;
    }
    return maxv;
}


double x_kon(Punkt *p)
{
    while(p->n!=0)
        p=p->n;
    return p->x;
}


double czas(Punkt *p)
{
    int i=0;

    while(p!=0)
    {
        i++;
        p=p->n;
    }
    return i*0.01;
}
