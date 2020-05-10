#include <stdio.h>

int main(){

    int year;

    printf("Program to find leap year\n\n");

    printf("Enter a year: ");

    scanf(" %d", &year);

    if(((year%4 == 0) && (year%100 != 0)) || (year%400 == 0)){
            
        printf("%d is a Leap Year\n", year);
    
    }else{
        
        printf("%d is a Regular Year\n", year);
        
    }

    return 0;

}