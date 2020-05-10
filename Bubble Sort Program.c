#include <stdio.h>

int main() {
  int num[100], step, n, k, temp;

  printf("\n*********************************************\n\t\t\tBubble Sort Program\n*********************************************\n");
  // Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements and swaps them if they are in the wrong order.
  printf("\nType with how many numbers you wanted to perform sorting\n");

  scanf(" %d", &n);

  for(k=0; k<n; k++){

    printf("Type element %d:  ", k+1);

    scanf(" %d", &num[k]);
  }

  for(step=0; step<n-1; step++){

    for(k=0; k<n-step-1; k++){
		//Ex: 1-10 means if(number[k]>number[k+1]) (OR) 10-1 means if(number[k]<number[k+1])
      if(num[k]>num[k+1]){
      temp = num[k];

      num[k] = num[k+1];

      num[k+1] = temp;
      }

    }

  }

    printf("Sorted List\n");

    for(k=0; k<n; k++){

      printf("%d\n", num[k]);

    }

  return 0;
}
