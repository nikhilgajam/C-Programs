#include <stdio.h>

void swap(int *a, int *b);
int partition(int a[], int low, int high);
void quicksort(int a[], int low, int high);

int main(){

    printf("Quick Sort Program\n\n");

    int i, num;

    printf("Enter no.of elements: ");
    scanf(" %d", &num);

    int arr[num];

    for(i=0; i<num; i++){
        printf("Enter element %d: ", i+1);
        scanf(" %d", &arr[i]);
    }

    quicksort(arr, 0, num-1);

    printf("\nSorted elements: \n\n");

    for(i=0; i<=num-1; i++){
        printf("%d\n", arr[i]);       // 1-10 we have done here but we can do 10-1 by (i=num-1; i>=0; i--) copy
    }

    return 0;

}

void swap(int *a, int *b){

    int t = *a;
        *a = *b;
        *b = t;

}

int partition(int a[], int low, int high){

    int pivot = a[high];   // Pivot
    int i = (low-1), j;    // Small element index

    for(j=low; j<=high; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }

    swap(&a[i+1], &a[high]);
    return (i+1);

}

void quicksort(int a[], int low, int high){

    if(low < high){

        int pi = partition(a, low, high);  // Partition index
        quicksort(a, low, pi-1);
        quicksort(a, pi+1, high);
    }

}
