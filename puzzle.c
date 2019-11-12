#include<stdio.h>
#define TRIPLE(a) 3*a

int main()
{
	int x=1;
	int y=0, z=0;
	printf("%d\n",TRIPLE(y+x));
	x *= 1 + 2;
	printf("%d\n",x);
	x = y == z;
	printf("%d\n",x);
	x += y = z = 4;
	printf("%d\n",x);
	return 0;
}