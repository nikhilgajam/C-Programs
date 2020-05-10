#include <stdio.h>

void sum(int);
void sub(int);
void muls(int);
void avgs(int);

int main(){

    int nums, cases;

    printf("Program to perform \'n\' number of calculations\n");

    printf("\nPress\n1 = +\n2 = -\n3 = *\n4 = avg\n: ");

    scanf(" %d", &cases);

    printf("\nHow many numbers you wanted to calculate operations: ");

    scanf(" %d", &nums);

    switch(cases){
    case 1:
        sum(nums);
        break;

    case 2:
        sub(nums);
        break;

    case 3:
        muls(nums);
        break;

    case 4:
        avgs(nums);
        break;

    default:
        printf("\nType only instructed things\n");

    }

    return 0;

}

void sum(int num){

    int a[num];

    int total=0;

    for(int k = 0; k<=num-1; k++){
        printf("Type number %d: ", k+1);
        scanf(" %d", &a[k]);

        total += a[k];
    }

    printf("\nTotal: %d\n", total);

}

void sub(int num){

    int a[num];

    int total=0;

    for(int k = 0; k<=num-1; k++){
        printf("Type number %d: ", k+1);
        scanf(" %d", &a[k]);

        total -= a[k];
    }

    printf("\nTotal: %d\n", total);

}

void muls(int num){

    int a[num];

    int total=1;

    for(int k = 0; k<=num-1; k++){
        printf("Type number %d: ", k+1);
        scanf(" %d", &a[k]);

        total *= a[k];
    }

    printf("\nTotal: %d\n", total);

}

void avgs(int num){

    int a[num];

    int total=0;

    double avg=0;

    for(int k = 0; k<=num-1; k++){
        printf("Type number %d: ", k+1);
        scanf(" %d", &a[k]);

        total += a[k];
    }

    avg = total/num;

    printf("\nTotal: %d\nAvg: %g\n", total, avg);


}
