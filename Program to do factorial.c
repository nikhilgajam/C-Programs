#include <stdio.h>

int main() {
  int fact=1, k, num;

  printf("Program to do factorial\n");

  printf("\nType a number\n");
  scanf(" %d", &k);

  num = k;

  for(; k>=1; k--){

    fact = fact*k;

  }

  printf("\n!%d = %d", num , fact);

  /* 
  //Another Way:

  int fact=1, k, num, n;

  printf("Program to do factorial\n");

  printf("\nType a number\n");
  scanf(" %d", &n);

  num = n;

  for(k=1; k<=n; k++){

    fact = fact*k;

  }

  printf("\n!%d = %d", num , fact); 

  */

  return 0;
}