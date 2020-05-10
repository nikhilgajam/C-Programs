#include <stdio.h>

int main(){

    printf("Selection Sort Program\n\n");
    // Selection sort is an in-place comparison sorting algorithm which interchanges lower index with lower value number
    int i, j, temp, min, num;

    printf("Enter no. of elements: ");
    scanf(" %d", &num);

    int a[num];

    for(i=0; i<num; i++){
        printf("Enter element %d: ", i+1);
        scanf(" %d", &a[i]);
    }

    for(i=0; i<num-1; i++){

            min = i;

        for(j=i+1; j<num; j++){

            if(a[min] > a[j]){  // You can also change < and > in the if statement ( > Ascending )
                min = j;

            }

        }

        temp = a[i];
        a[i] = a[min];
        a[min] = temp;

    }

    printf("\nSorted elements: \n\n");

    for(i=0; i<num; i++){
        printf("%d\n", a[i]);
    }

    return 0;

}
