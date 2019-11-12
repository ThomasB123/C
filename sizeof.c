#include<stdio.h>
int main(){
	char a;
	short int b; /*Could also just write ``short b;''*/
	int c;
	long int d; /*Could also just write ``long d;''*/
	long long int e; /*Could also just write ``long e;''*/
	float f;
	double g;
	long double h;
	printf("On this computer:\n");
	printf("A char uses %ld byte\n",sizeof(a));
	printf("A short (int) uses %ld bytes (2 is the minimum allowed)\n",sizeof(b));
	printf("An int uses %ld bytes (2 is the minimum allowed)\n",sizeof(c));
	printf("A long (int) uses %ld bytes (4 is the minimum allowed)\n",sizeof(d));
	printf("A long long (int) uses %ld bytes (8 is the minimum allowed)\n",sizeof(e));
	printf("A float uses %ld bytes\n",sizeof(f));
	printf("A double uses %ld bytes\n",sizeof(g));
	printf("A long double uses %ld bytes\n",sizeof(h));
	return 0;
}