#include<stdio.h>
int main(){
	enum EGA_colors {BLACK, LT_GRAY = 7, DK_GRAY, WHITE = 8};
//	enum EGA_colors c=10;
	printf("BLACK has value %d\n",BLACK);
	printf("LT_GRAY has value %d\n",LT_GRAY);
	printf("DK_GRAY has value %d\n",DK_GRAY);
	printf("WHITE has value %d\n",WHITE);
	return 0;
}