#include <stdio.h>
#include "point.h"

int main(void) 
{
	float x1, y1, x2, y2;
	printf("Digite os valores de x e y do primeiro ponto:\n");
	scanf("%f %f", &x1, &y1);
	Point* p1 = point_create(x1, y1);
	printf("Digite os valores de x e y do primeiro ponto:\n");
	scanf("%f %f", &x2, &y2);
	Point* p2 = point_create(x2, y2);
	printf("A distance entre P1 e P2 eh %f\n", point_distance(p1, p2));
}
