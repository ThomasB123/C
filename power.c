#include<stdio.h>
int power( int base, int n );

int main()
{
	int a,b;
	a=2;
	b=3;
	printf("%d to the power of %d is %d\n", a, b, power(a,b));
	return 0;
}


int power( int base, int n )
{
	int p;
	for ( p = 1; n > 0; n-- )
		p = p * base;
	return p;
}