#include <stdio.h>

int main(void) {
  int a, b;

  for(a = 65, b = 90; a<=90, b>=65; a++, b--){
    printf("%c %c\n", a, b);
  }
  return 0;
}