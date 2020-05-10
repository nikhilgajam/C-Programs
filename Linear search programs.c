#include <stdio.h>

int linear_search(int arr[], int sear);
int sorted_linear_search(int arr[], int sear);

int nm; //Global count

int main(){

    printf("Linear Search Program\n\n");

    int choice, i, j, sear, get;

    printf("1.Linear Search (Unsorted)\n2.Sorted Linear Search\n\n==> ");
    scanf(" %d", &choice);

    printf("Enter no.of elements: ");
    scanf(" %d", &nm);

    int arr[nm];

    printf("Enter numbers:\n");
    for(i=0; i<nm; i++){

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


    for(i=0; i<nm; i++){

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

    for(i=0; i<nm; i++){
        for(j=0; j<nm-i-1; j++){

            if(arr[j] > arr[j+1]){

                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;

            }
        }
    }

    printf("\nSorted values: ");

    for(i=0; i<nm; i++){

        printf("%d ", arr[i]);

    }

    printf("\n\n");

    for(i=0; i<nm; i++){

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
