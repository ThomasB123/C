#include<stdio.h>
#include<limits.h>
int main(){
	printf("On this computer:\n");
	printf("A char has minimum value %d and maximum value %d\n",CHAR_MIN,CHAR_MAX);
	printf("A short has minimum value %d and maximum value %d\n",SHRT_MIN,SHRT_MAX);
	printf("An int has minimum value %d and maximum value %d\n",INT_MIN,INT_MAX);
	printf("A long has minimum value %ld and maximum value %ld\n",LONG_MIN,LONG_MAX);
	printf("A long long has minimum value %lld and maximum value %lld\n",LLONG_MIN,LLONG_MAX);
	printf("An unsigned char has minimum value 0 and maximum value %u\n",UCHAR_MAX);
	printf("An unsigned short has minimum value 0 and maximum value %u\n",USHRT_MAX);
	printf("An unsigned int has minimum value 0 and maximum value %u\n",UINT_MAX);
	printf("An unsigned long has minimum value 0 and maximum value %lu\n",ULONG_MAX);
	printf("An unsigned long long has minimum value 0 and maximum value %llu\n",ULLONG_MAX);
	return 0;
}