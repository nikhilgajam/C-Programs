#include <stdio.h>

int main(){

    int num, i, n, k=0;

    printf("Program to find frequency\n\n");

    printf("How many numbers you need: ");
    scanf(" %d", &n);

    int a[n];


    for(i=0; i<n; i++){

        printf("Enter number %d: ", i+1);
        scanf(" %d", &a[i]);

    }

    printf("\n\nEnter the number you want to find frequency: ");
    scanf(" %d", &num);

    for(i=0; i<n; i++){

        if(a[i] == num){

            k++;

        }
    }


    printf("\n%d number frequency = %d\n", num, k);



    return 0;

}
