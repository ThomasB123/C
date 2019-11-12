/* What will this code output? */
#include<stdio.h>
int main()
{
	int x=0;
	switch(x){
		case 0:
			printf("x is 0\n");
		case 1:
			printf("x is 0 or 1\n");
			break;
		case 2:
			printf("x is 2\n");
			break;
		default:
			printf("x is some other value\n");
			break; /* Putting a final break statement is good practice */
}
return 0;
}