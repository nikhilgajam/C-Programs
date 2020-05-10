#include <stdio.h>

int main(void) {
  int a, b;
  printf("Enter numbers to store in a & b\n");
  scanf(" %d %d",&a, &b);
  a = a + b;
  b = a - b;
  a = a - b;
  printf("a is: %d\nb is: %d", a, b);
  return 0;
}