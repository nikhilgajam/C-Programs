#include <stdio.h>

int linear_search(int arr[], int sear);
int sorted_linear_search(int arr[], int sear);
int binary_search(int arr[], int sear);

int num; //Global count

int main(){

    printf("Searching Programs\n\n");

    int choice, i, sear, get;

    printf("1.Linear Search (Unsorted)\n2.Sorted Linear Search\n3.Binary Search\n==> ");
    scanf(" %d", &choice);

    printf("Enter no.of elements: ");
    scanf(" %d", &num);

    int arr[num];

    printf("Enter numbers:\n");
    for(i=0; i<num; i++){

        printf("Enter %d element: ", i+1);
        scanf(" %d", &arr[i]);

    }

    printf("Enter the number to search: ");
    scanf(" %d", &sear);

    switch(choice){
    case 1:
        get = linear_search(arr, sear);
        break;

    case 2:
        get = sorted_linear_search(arr, sear);
        break;

    case 3:
        get = binary_search(arr, sear);

        if(get != -1){
        printf("\n%d is found at %d position\n", sear, get);
        }else{
        printf("\n%d is not found\n");
        }
        return 1;
        break;

    default:
        printf("\nEnter instructed numbers only\n");
    }

    if(get != -1){

        printf("\n%d is found and repeated for %d time(s)\n", sear, get);

    }else{

        printf("\n%d is not found\n");

    }

    return 0;

}

int linear_search(int arr[], int sear){

    int i, count=0;


    for(i=0; i<num; i++){

        if(sear == arr[i]){

            count++;

        }
    }

    if(count == 0){

        return -1;

    }else{

        return count;

    }

}

int sorted_linear_search(int arr[], int sear){

    // It takes less time if the number is smaller



    int i, j, count=0, temp;

    for(i=0; i<num; i++){
        for(j=0; j<num-i-1; j++){

            if(arr[j] > arr[j+1]){

                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
    }

    printf("\nSorted values: ");

    for(i=0; i<num; i++){

        printf("%d ", arr[i]);

    }

    printf("\n\n");

    for(i=0; i<num; i++){

        if(sear == arr[i]){

            count++;

        }

        if(sear < arr[i]){

            break;

        }

    }

    if(count == 0){

        return -1;

    }else{

        return count;

    }

}

int binary_search(int arr[], int sear){

    int low=0, middle, high=num-1, count=0;

    int i, j, temp;

    for(i=0; i<num; i++){
        for(j=0; j<num-i-1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    while(high >= low){

        middle = (low + high) / 2;

        if(sear == arr[middle]){
            count = 1;
            break;
        }else if(sear < arr[middle]){
            high = middle - 1;
        }else{
            low = middle + 1;
        }

    }

    if(count == 0){

        return -1;

    }else{

        return middle;

    }

}
