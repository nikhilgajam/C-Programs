#include <stdio.h>
#include <ctype.h>

int main()
{
  int up, lo, dig, sym;

  char pw[10];

  printf("\n********************************************************************\nType Password which has a uppercase, lowercase words, a number and a symbol(@, $, &,#)\n********************************************************************\n\n");

  scanf(" %s", pw);

  for(int i=0; i<=8; i++){

    if(isupper(pw[i])){

      up++;

    }else if(islower(pw[i])){
      
      lo++;

    }else if(isdigit(pw[i])){
      
      dig++;

    }else if(pw[i] == '@' || pw[i] == '$' || pw[i] == '&'|| pw[i] == '#'){
      
      sym++;

    }

  }
  if(up && lo && dig && sym){

    printf("%s is \"Correct Password\"\n", pw);

  }else{

    printf("Type Valid Password as Instructed \n");

  }
  
  return 0;
}