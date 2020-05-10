#include <stdio.h>

int main(){

    int i, j, num, temp;

    printf("Program to find greatest 3 digits\n\n");

    printf("Enter no.of digits: ");
    scanf(" %d", &num);

    int a[num];

    for(i=0; i<num; i++){
        printf("Enter number %d: ", i+1);
        scanf(" %d", &a[i]);
    }

    for(i=0; i<num; i++){

        for(j=0; j<num-1; j++){

            if(a[j] < a[j+1]){

                temp = a[j+1];

                a[j+1] = a[j];

                a[j] = temp;

            }

        }

    }

    printf("\nGreatest 1st = %d, 2nd = %d, 3rd = %d\n", a[0], a[1], a[2]);

    return 0;

}
