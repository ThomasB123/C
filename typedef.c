#include <stdio.h>

typedef struct points {
    int x;
    int y;
} point;

typedef union numbers {
 	int i;
	double d;
} number;


int main() {
	point p = {4,5};
	number n = {.d =10.0};
	printf("Value = %f\n", n.d);
	printf("Point = {%d, %d}\n", p.x, p.y);
	return 0;
}