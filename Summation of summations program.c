#include <stdio.h>

void sum_of_sums(long long num);

int main(){

    long long x;

    printf("Enter a number: ");
    scanf(" %lld", &x);

    sum_of_sums(x);

    return 0;

}

void sum_of_sums(long long num){

    long long n, r=0, count=0;

    printf("\nThe summation: \n\n");

    if(num >= 10){

        while(num >= 10){

            for(; num>0; num/=10){
                n = num % 10;
                printf("%lld+", n);
                r = r+n;
            }

            printf("\b");   // This deletes the extra symbol
            num = r;
            r = 0;

            printf(" = %lld\n", num);

        }

    }else{
        printf("%lld = %lld\n", num, num);
    }


}
