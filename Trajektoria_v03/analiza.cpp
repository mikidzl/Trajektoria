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
