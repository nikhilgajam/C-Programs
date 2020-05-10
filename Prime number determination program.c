#include <stdio.h>

int main() {
  int num ,count=0, x;

  printf("Prime Number Determination Program\n");

  printf("\nType a number: ");
  scanf(" %d", &num);

  for(x=1; x<=num; x++){  //counter must start with 1 "x=1"

    if(num%x == 0){

      count++;

    }

  }

  if(count == 2){
    printf("%d is a Prime Number\n", num);
  }else{
    printf("%d is a Ordinary Number\n", num);
  }

  return 0;
}
