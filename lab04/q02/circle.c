#include <stdlib.h>
#include <math.h>
#include "circle.h"
#define PI 3.14159

struct circle 
{
    Point* p;
    float radius;
};

Circle* circle_create(Point* p, float radius)
{
    Circle* c = (Circle*) malloc(sizeof(Circle*));
    c->p = p;
    c->radius = radius;
    return c;
}

void circle_free(Circle* c)
{
    point_free(c->p);
    free(c);
}

void circle_access(Circle* c, float* x, float* y, float* r)
{
    point_access(c->p, x, y);
    *r = c->radius;
}

void circle_set(Circle* c, float x, float y, float r)
{
    point_set(c->p, x, y);
    c->radius = r;
}

float circle_area(Circle* c)
{
    float r = c->radius;
    float area = (4*r*r*r*PI)/3;
    return area;
}

int circle_in(Circle* c, Point* p)
{
    float d = point_distance(p, c->p);
    return d < c->radius ? 1 : 0;
}
