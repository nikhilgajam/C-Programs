#include <stdio.h>

int main() {
  int r, c, k, num;
  printf("Prime Numbers Printing Program\n");

  printf("\nHow many prime numbers do you wanted to print\n");
  scanf(" %d", &num);

  printf("\nPrime Numbers\n");
  for(r=1; r<=num; r++){
    k=0;
    for(c=1; c<=num; c++){
      if(r%c==0){
        k++;
      }
    }
    if(k==2){
      printf("%d\n", r);
    }
  }
  
  return 0;
}