#include <stdio.h>

int main(){

    printf("Insertion Sort Program\n\n");
    // Insertion sort is a simple sorting algorithm that builds the final sorted array one item at a time
    int i, j, key, num;

    printf("Enter no. of elements: ");
    scanf(" %d", &num);

    int a[num];

    for(i=0; i<num; i++){
        printf("Enter element %d: ", i+1);
       scanf(" %d", &a[i]);
    }

    for(i=1; i<num; i++){

        key = a[i];

        for(j=i-1; j>=0 && a[j]>key; j=j-1){   // You can also change < and > in the if statement ( a[j] > key Ascending )

            a[j+1] = a[j];

        }

        a[j+1] = key;

    }

    printf("\nSorted elements: \n\n");

    for(i=0; i<num; i++){
       printf("%d\n", a[i]);
    }

    return 0;

}
