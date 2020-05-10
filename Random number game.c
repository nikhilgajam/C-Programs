#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, guessnum, rangenum;

  printf("Random Number Game\n");
  
  printf("\nType Range of Random Numbers\nEx:(1-6):Type 6\n");
  scanf(" %d", &rangenum);

  num = (rand()%rangenum)+1;

  printf("\nType a number\n");
  scanf(" %d", &guessnum);

  while(guessnum != 0){

    if(guessnum == num){

      printf("\n%d is Correct Guess\n", guessnum);

      break;

    }else if(guessnum < num){
      printf("\nGuess is Little Low\n");

      printf("Type: ");

    }else{
      printf("\nGuess is Little High\n");

      printf("Type: ");

    }

    scanf(" %d", &guessnum);
  }


  return 0;
}