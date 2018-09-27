#include <stdio.h>
#include "point.h"
#include "triangle.h"

int main(void)
{
    Triangle* t = triangle_create(point_create(1, 1), point_create(4, 2), point_create(2, 7))
    Point* p = point_create(2, 3);
    int valid = triangle_verify(t);
    if(valid) {
        printf("O triangulo eh valido.\n");
        printf("A area do triangulo eh %f", triangle_area(t));
        triangle_in(t, p) ? printf("O ponto p esta no triangulo.\n") : printf("O ponto p nao esta no triangulo.\n")
    }
    else 
    {
        printf("O triangulo eh invalido.\n");
    }
}
