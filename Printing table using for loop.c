#include <stdio.h>

int main(void) {
  int r, c;
  for(r=1; r<=4; r++){
    for(c=1; c<=4; c++){
      printf("%d ",c);
    }
    printf("\n");
  }
  return 0;
}