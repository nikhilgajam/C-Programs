#include <stdio.h>

int main() {
  int t, k;
   
   printf("Table Printing Program\n");

   printf("\nType a number to print that table\n");
   scanf(" %d", &t);

   printf("\n%d Table\n\n", t);
  for(k=1; k<=10; k++){
    
    printf("%d x %d \t= \t%d\n", t , k, t*k);
  }
  return 0;
}