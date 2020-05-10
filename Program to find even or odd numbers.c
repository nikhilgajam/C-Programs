#include <stdio.h>

int main() {
  int num;

  printf("Program to find even or odd\n");

  printf("\nType a number: ");
  scanf(" %d", &num);

  if(num%2==0){
    printf("%d is a Even Number\n", num);
  }else{
    printf("%d is a Odd Number\n", num);
  }

  return 0;
}

/*
//Same Program Using Switch

  int num;

  printf("Program to find even or odd\n");

  printf("\nType a number: ");
  scanf(" %d", &num);

  switch(num%2){

    case 0:
      printf("%d is a Even Number\n", num);
      break;

    case 1:
      printf("%d is a Odd Number\n", num);
  }

  return 0;
  
 */