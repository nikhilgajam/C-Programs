#include <stdio.h>

int factorial(int num);

int main(){

    int num, n, temp, sum=0;

    printf("Strong Number Determination Program\nEx: 1, 2, 40585, 145\n145 = 1!+4!+5! = 145\n\n");

    printf("Enter a number: ");
    scanf(" %d", &num);

    temp = num;

    for( ; num>0; num/=10){

        n = num%10;

        sum += factorial(n);
    }

    if(temp == sum){
        printf("\n%d is a Strong Number\n", temp);
    }else{
        printf("\n%d is a Normal Number\n", temp);
    }

    return 0;

}

int factorial(int num){

    if(num > 0){
        return (num * factorial(num-1));
    }else{
        return 1;
    }

}
