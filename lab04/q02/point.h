/* ADT: Point(x, y) */

typedef struct point Point;

/* Creates a Point */
Point* point_create(float x, float y);

/* Frees the memory taken by the Point */
void point_free(Point* p);

/* Accesses each coordinate of the Point */
void point_access(Point* p, float* x, float* y);

/* Sets each coordinate of the Point */
void point_set(Point* p, float x, float y);

/* Calculates the distance between two points */
float point_distance(Point* p1, Point* p2);
