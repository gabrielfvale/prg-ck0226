#include <stdio.h>
#include "circle.h"

int main(void)
{
    float x, y, r;
    printf("Digite os valores de x, y, e o raio do circulo.\n");
    scanf("%f %f %f", &x, &y, &r);
    Circle* c = circle_create(point_create(x, y), r);
    printf("O area do circulo eh %f.\n", circle_area(c));
    circle_free(c);
    return 0;
}
