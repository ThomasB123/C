#include<stdio.h>
#include<string.h>
int main(){
	char a[]="x";
	char b='x';
	printf("strlen(a)=%ld\n",strlen(a)); // returns number of characters
	printf("sizeof(b)=%ld\n",sizeof(b)); // returns number of bytes
	printf("sizeof(a)=%ld\n",sizeof(a));
	printf("sizeof('x')=%ld\n",sizeof('x'));
	return 0;
}