// Do loop example
// Converts temperatures in Celsius to Fahrenheit
#include <stdio.h>

int main(void) {
	double fahr, celsius;
	int lower = 0;
	int upper = 100;
	int step = 10;
	
	printf("C     F\n\n");
	celsius = lower;
	do {
		fahr = (9.0/5.0) * celsius + 32.0;
		printf("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	} while (celsius <= upper);
	return 0;
}