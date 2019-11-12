#include <stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point p1;
  struct point p2;
};

int main() {
  struct rect a={{1,2},{3,4}};
  printf("Size = %lu\n", sizeof(a));
  return 0;
}