#include <stdio.h>
int main()
{
	double F = 10;
	double C;
	C = (F - 32.0) * (5.0 / 9.0) ;
	printf("%4.1f F = %6.1f C\n", F, C);
	return 0;
}