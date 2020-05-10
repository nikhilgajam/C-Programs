#include <stdio.h>

int main() {
  
  int a[2][3] = {{1, 2, 3}, {10, 9, 8}};
  int r, c;

  for(r=0; r<2; r++){

    for(c=0; c<3; c++){
      printf("%d\t", a[r][c]);
    }

    printf("\n");
  }
  return 0;
}