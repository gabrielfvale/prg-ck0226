#include <stdlib.h>
#include <math.h>
#include "point.h"

struct point 
{
	float x;
	float y;
};

Point* point_create(float x, float y) 
{
	Point* p = (Point*) malloc(sizeof(Point*));
	p->x = x;
	p->y = y;
	return p;
}

void point_free(Point* p) 
{
	free(p);
}

void point_access(Point* p, float* x, float* y) 
{
	*x = p->x;
	*y = p->y;
}

void point_set(Point* p, float x, float y)
{
	p->x = x;
	p->y = y;
}

float point_distance(Point* p1, Point* p2)
{
	float dx = p1->x - p2->x;
	float dy = p1->y - p2->y;
	return sqrt(dx*dx - dy*dy);
}
