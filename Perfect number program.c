#include <stdio.h>

int main(){

    int num, i, sum=0;

    printf("Perfect Number Checking Program\n\n");

    printf("Enter a number: ");

    scanf("%d", &num);

    printf("Number Divides By: ");

    for(i=1; i<num; i++){

        if(num%i == 0){

            sum += i;
            printf("%d+", i);

        }

    }

    if(num == sum){

        printf(" = %d", num);
        printf("\n\n%d is a Perfect Number\n", num);

    }else{

        printf(" != %d", num);
        printf("\n\n%d is not a perfect number\n", num);
    }



    return 0;

}
