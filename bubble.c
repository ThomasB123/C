#include <stdio.h>
//#include <stdbool.h>
#define array_size 10


int main()//(int numbers[], int array_size)
{
  int i, j, temp, numbers[10]={9,8,7,6,5,4,3,2,1,0};
  //numbers = {9,8,7,6,5,4,3,2,1,0};
  //array_size = 10;

  for (i = (array_size - 1); i > 0; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (numbers[j-1] > numbers[j])
      {
        temp = numbers[j-1];
        numbers[j-1] = numbers[j];
        numbers[j] = temp;
      }
    }
  }
  //printf(numbers[]);
  //printf("%d\n", numbers);
  int a;
   printf("[");
	
   // navigate through all numbers 
   for(a = 0; a < array_size; a++) {
      printf("%d ",numbers[a]);
   }
	
   printf("]\n");
}