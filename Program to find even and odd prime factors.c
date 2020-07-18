#include <stdio.h>

void even_prime_factors(long long num);
void odd_prime_factors(long long num);

int main(){

    even_prime_factors(100);

    return 0;

}

void even_prime_factors(long long num){

    long long i, j, count=0;

    for(i=1; i<=num; i++){

        if(num%i == 0){
            count = 0;

            for(j=1; j<=i; j++){
                if(i%j == 0){
                    count++;
                }
            }

            if(count == 2)
                printf("%d\n", i);

        }

    }

}

void odd_prime_factors(long long num){

    long long i, j, count=0;

    for(i=1; i<=num; i++){
        if(num%i != 0){
            count = 0;

            for(j=1; j<=i; j++){
                if(i%j == 0){
                    count++;
                }
            }

            if(count == 2)
                printf("%d\n", i);

        }

    }

}
