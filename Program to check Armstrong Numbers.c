#include <stdio.h>

int main(){
  int num, n, r=0, temp;
  printf("Armstrong Number is sum of cubes of individual numbers\nEx: 153\n");

  printf("\nType a number\n");
  scanf(" %d", &num);

  temp = num;

  for(; num>0;){
    n = num%10;
    r = r+(n*n*n);
    num=num/10;

  }

  if(temp==r){
    printf("(%d = %d) is Armstrong Number\n", temp, r);

  }else{
    printf("(%d != %d) is Ordinary Number\n", temp, r);
    
  }

  return 0;
}