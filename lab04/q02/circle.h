/* ADT: Circle(Point, radius) */
#include "point.h"

typedef struct circle Circle;

/* Creates a circle */
Circle* circle_create(Point* p, float radius);

/* Frees the memory taken by the circle */
void circle_free(Circle* c);

/* Accesses each coordinate and the radius of the circle */
void circle_access(Circle* c, float* x, float* y, float* r);

/* Sets each coordinate and radius of the circle */
void circle_set(Circle* c, float x, float y, float r);

/* Calculates the area of the circle */
float circle_area(Circle* c);
