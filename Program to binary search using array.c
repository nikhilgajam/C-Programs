#include <stdio.h>
#include <stdlib.h>

int main(){

    printf("Binary Search Program\n\n");

    int a[100], num, k, search, scount=0, low, middle, high;

    printf("Enter No.of elements in an array: ");
    scanf(" %d", &num);

    if(num > 100){
        printf("\nToo Many Numbers\n");
        exit(0);
    }

    printf("\nEnter the elements of the array\n");

    for(k=0; k<num; k++){
        scanf(" %d", &a[k]);
    }

    printf("\nEnter the element to search: ");
    scanf(" %d", &search);

    low = 0;
    high = num-1;

    while(high >= low){

        middle = (low+high)/2;

        if(a[middle] == search){

            scount = 1;
            break;

        }else if (search < a[middle]){

            high = middle - 1;

        }else{

            low = middle + 1;

        }

    }

    if(scount == 0){

        printf("\n %d NOT FOUND\n", search);

    }else{

        printf("\n%d FOUND AT %d POSITION\n", search ,middle);

    }

    return 0;

}
