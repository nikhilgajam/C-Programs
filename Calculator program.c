#include <stdio.h>

int main()
{
  int a, b, k;
  char c;
  printf("\n*********************************************\n\t\t\tCalculator Program\n*********************************************\n");
  
  do{
  printf("\n Type numbers to perform calculation\n");
  scanf(" %d %d", &a, &b);

  printf("\nType 1 = '+'\nType 2 = '-'\nType 3 = '*'\nType 4 = '/'\nType 5 =  'modulus' \n");
  scanf(" %d", &k);

  switch(k){
    case 1: 
      printf("\nAns: %d\n", a+b);
      break;

    case 2: 
      printf("\nAns: %d\n", a-b);
      break;

    case 3:  
      printf("\nAns: %d\n", a*b);
      break;

    case 4: 
      printf("\nAns: %d\n", a/b);
      break;

    case 5: 
      printf("\nAns: %d\n", a%b);
      break;

    default:
      printf("\nType mentioned digits\n");
  }

  printf("Do you want to do another calculation\ny = yes\nn = no\n");
  scanf(" %c", &c);
  }while(c =='y');

return 0;
}