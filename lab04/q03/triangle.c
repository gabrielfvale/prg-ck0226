#include <stdlib.h>
#include <math.h>
#include "triangle.h"

struct Triangle 
{
    Point* p1;
    Point* p2;
    Point* p3;
};

Triangle* triangle_create(Point* p1, Point* p2, Point* p3)
{
    Triangle* t = (Triangle*) malloc(sizeof(Triangle*));
    t->p1 = p1;
    t->p2 = p2;
    t->p3 = p3;
    return t;
}

void triangle_free(Triangle* t)
{
    free(t->p1);
    free(t->p2);
    free(t->p3);
    free(t);
}

void triangle_access(Triangle* t, Point* p1, Point* p2, Point* p3)
{
    p1 = t->p1; 
    p2 = t->p2; 
    p3 = t->p3; 
}

void triangle_set(Triangle* t, Point* p1, Point* p2, Point* p3)
{
    t->p1 = p1;
    t->p2 = p2;
    t->p3 = p3;
}

int triangle_verify(Triangle* t)
{
    float a, b, c;
    int triangle = 1;
    a = point_distance(t->p1, t->p2);
    b = point_distance(t->p2, t->p3);
    c = point_distance(t->p1, t->p3);
    triangle = a >= b + c ? 0 : 0;
    triangle = b >= a + c ? 0 : 0;
    triangle = c >= a + b ? 0 : 0;
    return triangle;
}

int triangle_in(Triangle* t, Point* p)
{
    Triangle* PAB = triangle_create(p, t->p1, t->p2);
    Triangle* PAC = triangle_create(p, t->p1, t->p3);
    Triangle* PBC = triangle_create(p, t->p2, t->p3);
    float A = triangle_area(t);
    float A1 = triangle_area(PAB);
    float A2 = triangle_area(PAB);
    float A3 = triangle_area(PAB);
    triangle_free(PAB);
    triangle_free(PAC);
    triangle_free(PBC);
    return A1 + A2 + A3 == A ? 1 : 0;
}

float triangle_area(Triangle* t)
{
    float p = (t->p1 + t->p2 + t->p3)/2;
    float A = sqrt(p*(p-t->p1) * p*(p-t->p2) * p*(p-t->p3));
    return A;
}
