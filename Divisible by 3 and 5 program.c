#include <stdio.h>
int main() {
  int num, k=0;
  printf("Divisible By 3 And 5 Program\n");
  printf("\nType a number: ");
  scanf(" %d", &num);
  if(num%3 == 0){
    k++;
    if(num%5 == 0)
      printf("%d is Divisible by 3 And 5\n", num);
    else if(k==1)
    printf("%d is Divisible only by 3", num);
  }else{
    if(num%5 == 0)
      printf("%d is Divisible by 5\n", num);
    else
      printf("%d is not divisible by 3 and 5\n", num);
  }
  return 0;
}