#include <stdio.h>

int main() {
  int x, ec=0, oc=0, et=0, ot=0, as=0, num;

  printf("Total And Counting Program\n");

  printf("\nType How Many Numbers Do You Want To Count: ");
  scanf(" %d", &num);

  printf("\n********** Total & Count **********\n");
  for(x=1; x<=num; x++){

    as = as + x;

    if(x%2==0){

      ec++;

      et = et+x;

    }

    else{

      oc++;

      ot = ot+x;

    }
  }

  printf("\nEven Total:\t%d\nOdd Total:\t%d\n\n", et, ot);

  printf("Even Count:\t%d\nOdd Count:\t%d\n\n", ec, oc);

  printf("Total Sum:\t%d", as);

  return 0;
}