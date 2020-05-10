#include <stdio.h>
#include <math.h>

int main(){

    float P, T, R, SI, CI;

    printf("Simple and compound interest program\n\n");


    printf("Enter principle amount: ");
    scanf(" %f", &P);

    printf("Enter time: ");
    scanf(" %f", &T);

    printf("Enter rate: ");
    scanf(" %f", &R);

    SI = (P*T*R)/100;
    CI = P*(pow(1+R/100, T));

    printf("\nSimple Interest: %f\nCompound Interest: %f\n", SI, CI);

    return 0;

}
