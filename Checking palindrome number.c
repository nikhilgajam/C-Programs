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
    r = r*10+n;
  } 

  printf("Number is: %d\n", r);

  if(r==temp){
    printf("%d is a Palindrome Number\n", r);
  }else{
    printf("%d is a Normal Number\n", r);
  }
  return 0;
}