#include<stdio.h>
struct point {
	int x;
	int y;
};

int main(){
	struct point a;
	a.x=5;
	a.y=6;
	struct point b={3,4};
	printf("b.x=%d, b.y=%d\n", b.x, b.y);
	b=a;
	printf("b.x=%d, b.y=%d\n", b.x, b.y);
	return 0;

}