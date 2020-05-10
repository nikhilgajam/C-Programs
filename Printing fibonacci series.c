#include <stdio.h>

void print_using_array();

int main() {
  int num, a=0, b=1, temp, x;

  printf("Printing fibonacci series program\nThis is sum of two digits\nEx: 0+1 = 1, 1+1=2, 2+1 = 3....\n");
  printf("\nType how many numbers you want: ");
  scanf(" %d", &num);

  for(x=1; x<=num; x++){
    printf("%d\n", a);

    temp = a+b;

    a = b;

    b = temp;
  }
  return 0;
}

void print_using_array(){

    //Printing the fibonacci series using array

    printf("Program for fibonacci series using array\n\n");

    int num;

    printf("Type: ");
    scanf(" %d", &num);

    int a[num];

    a[0] = 0;
    a[1] = 1;

    printf("\nSeries: \n\n");

    for(int k=2; k<num; k++){
        a[k] = a[k-1] + a[k-2];
    }

    for(int k=0; k<num; k++){
        printf("%d\n", a[k]);
    }

    return 0;

}
