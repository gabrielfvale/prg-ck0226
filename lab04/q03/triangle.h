/* ADT: Triangle(Point, Point, Point) */
#include "point.h"

typedef struct triangle Triangle;

/* Creates the triangle */
Triangle* triangle_create(Point* p1, Point* p2, Point* p3);

/* Frees the memory taken by the triangle */
void triangle_free(Triangle* t);

/* Accesses the points of a given triangle */
void triangle_access(Triangle* t, Point* p1, Point* p2, Point* p3);

/* Sets the points of a given triangle */
void triangle_set(Triangle* t, Point* p1, Point* p2, Point* p3);

/* Verifies if the given points make a triangle */
int triangle_verify(Triangle* t);

/* Checks if a point belongs to (is inside of) a triangle */
int triangle_in(Triangle* t, Point* p);

/* Returns the area of the triangle */
float triangle_area(Triangle* t);
