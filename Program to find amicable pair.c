#include <stdio.h>

void amicable_number();

int main(){

    printf("Amicable Number Program\n");
    printf("Ex: (220, 284) is an amicable pair because sum of factors of \n");
    printf("because sum of factors of 200 = 284 and 284 = 200\n");

    amicable_number();

    return 0;

}

void amicable_number(){

    int num1, num2, sum1=0, sum2=0, i;

    printf("\nEnter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    for(i=1; i<num1; i++){
        if(num1%i == 0){
            sum1 += i;
        }
    }

    for(i=1; i<num2; i++){
        if(num2%i == 0){
            sum2 += i;
        }
    }

    if(num1 == sum2 && num2 == sum1){
        printf("\nYes (%d, %d) is an Amicable pair\n", num1, num2);
    }else{
        printf("\nNo (%d, %d) is not an Amicable pair\n", num1, num2);
    }

}
