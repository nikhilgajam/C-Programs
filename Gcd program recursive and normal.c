#include <stdio.h>

int gcd_recursive(int num1, int num2);

int main(){

    int num1, num2, i, j, gcd;

    printf("GCD Program\n\n");

    printf("Enter two numbers: ");

    scanf(" %d %d", &num1, &num2);

    for(i=1; i<=num1 && i<=num2; i++){

        if(num1%i == 0 && num2 % i == 0){

            gcd = i;

        }
    }

    printf("GCD = %d\n", gcd);

    return 0;

}

int gcd_recursive(int num1, int num2){

    if(num2 != 0){
            
        return (gcd_recursive(num2, num1 % num2));
    
    }else{
        
        return (num1);
        
    }
}
