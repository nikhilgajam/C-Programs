#include <stdio.h>

int main(){

    printf("Palindrome Range Program\n\n");

    int i, n=0, r=0, num=0, temp=0, total=0;

    int start, end, swap;

    printf("Enter Start Range: ");
    scanf("%d", &start);
    printf("Enter End Range: ");
    scanf("%d", &end);

    if(start > end){
        swap = start;
        start = end;
        end = swap;
    }

    printf("Range:\n");

    for(i=start; i<=end; i++){

        num = i;
        for(; num>0; num/=10){
            n = num%10;
            r = r*10+n;
        }

        if(r == i){
            printf("Palindrome Number: %d\n", i);
            total++;
        }

        r = 0;
    }

    printf("\nTotal No Of Palindromes: %d\n", total);

}
