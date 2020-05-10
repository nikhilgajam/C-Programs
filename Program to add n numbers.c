#include <stdio.h>

int main(){

    int num;

    printf("Program to add n numbers\n");

    printf("\nType with how many number you wanted to perform calculation: ");
    scanf(" %d", &num);

    int a[num];

    int total=0;

    for(int k = 0; k<=num-1; k++){
        printf("Type number %d: ", k+1);
        scanf(" %d", &a[k]);

        total += a[k];
    }

    printf("\nTotal: %d\n", total);

    return 0;

}
