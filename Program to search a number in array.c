#include <stdio.h>

int main(){
    int array[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, j, search, sear = 0;

    printf("Array Searching Program\n\n");

    printf("Type a number to search in array: ");
    scanf(" %d", &search);

    for(k=0; k<10; k++){

        if(search == array[k]){
            sear++;
        }

    }

    if(sear == 1){
            
            printf("\n====> %d is found in array\n", search);
    
        }else{
            
            printf("\n====> %d is not found in array\n", search);
            
        }

    return 0;

}
