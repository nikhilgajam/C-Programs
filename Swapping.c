#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("Enter a and b vales to swap\n");
  scanf("%d %d", &a, &b);
  c = a;
  a = b;
  b = c;
  printf("a is %d and b is %d\n", a, b);

  return 0;
}