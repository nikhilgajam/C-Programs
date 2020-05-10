#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    printf("Random Number Generation Program\n\n");

    int i;

    srand(time(0));

    for(i=0; i<100; i++){
        printf("%d\n", 1+(rand()%100));
    }

    return 0;























}
