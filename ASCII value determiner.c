#include <stdio.h>
int main(){
  char a;
  printf("Type a character to its know ASCII value(numbers)\n");
  scanf(" %c",&a);

  printf("%c ASCII value is \"%d\"\n", a, a);
}