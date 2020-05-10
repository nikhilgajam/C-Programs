#include <stdio.h>

int main()
{
  int num, n, r=0, temp;

  printf("Checking whether the number is Palindrome number\n");

  printf("\nType a multi digit number\n");
  scanf(" %d", &num);
  temp = num;

  for(; num>0; num/=10){
    n = num%10;
    r = r+n;
  } 

  printf("Summation is: %d\n", r);
  return 0;
}