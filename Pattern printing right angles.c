#include <stdio.h>

int main(void) {
  int w, x;
  for(w=1; w<=6; w++){
    for(x=1; x<=w; x++){
      printf("%d",x);    //replace x with w to get another pattern
    }
    printf("\n");
  }
  return 0;
}

/*

{

    int i, j, k;

    for(i=1; i<=6; i++){
        for(j=6; j>=i; j--){
                                 //    1
                                //    12
                               //    123
            printf(" ");
        }

        for(k=1; k<=i; k++){
            printf("%d", k);
        }
        printf("\n");

    }

#include <stdio.h>

int main(void) {
  int w, x;
  for(w=6; w>=1; w--){
    for(x=6; x>=w; x--){
      printf("%d",x);    //replace x with w to get another pattern
    }
    printf("\n");
  }
  return 0;
}
*/
