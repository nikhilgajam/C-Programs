#include <stdio.h>


int main()
{
    int num, n, count=0, r=0;

    printf("Type a number: ");
    scanf(" %d", &num);

    for( ; num>0; num/=10){
        n = num%10;
        r = n+r;
        count++;
    }

    printf("Sum = %d, Digits = %d\n", r, count);
	
	return 0;
}
