#include<stdio.h>
int main() {
	union i_d_thing {
		int i;
		double d;
	} u = {3};
	printf("u.i=%d u.d=%f\n",u.i,u.d);
	u.d=500000000000.0;
	printf("u.i=%d u.d=%f\n",u.i,u.d);

	union i_d_thing v = {.d=3};
	printf("v.i=%d v.d=%f\n",v.i,v.d);
	return 0;
}