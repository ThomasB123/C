#include <stdio.h>

struct number {
  enum {INT_KIND, DOUBLE_KIND} kind;
  union {
    int i;
    double d;
  } u;
};

int main(){
  struct number a_number ={INT_KIND, {10}} ;
  printf("a_number is %d value %d \n", a_number.kind, a_number.u.i );
  a_number.kind = DOUBLE_KIND ;
  a_number.u.d = 150.03 ;
  printf("a_number is %d value %6.3f \n", a_number.kind, a_number.u.d );
  printf("a_number is %d value %d \n", a_number.kind, a_number.u.i );
  return 0;
}