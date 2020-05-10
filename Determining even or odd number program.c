#include <stdio.h>

int main() {
  int num;

  printf("Determining Even Or Odd Numbers Program\n");

  printf("\nType a number: ");
  scanf(" %d", &num);

  if(num%2 == 0 && num != 0){
    printf("%d is a Even Number\n", num);
  }else if(num == 0){
    printf("%d is neither Even nor Odd\n", num);
  }else{
    printf("%d is a Odd Number\n", num);
  }
  return 0;
}