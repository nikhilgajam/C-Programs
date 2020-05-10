#include <stdio.h>

int main()
{
  int a[5], b, c, k;
  float j;
  printf("\n************************************************************\n Total and average calculator for any number that you enter\n************************************************************\n");

  printf("\nHey for how many numbers do you want to calculate average\n");
  scanf(" %d",&k);
  for(b=0; b<k; b++){
    printf("Enter No %d\n", b+1);
    scanf(" %d", &a[b]);
    c = c+a[b];
  }
  j = c/(float)k;
  printf("\nTotal: %d\n", c);
  printf("Avg %f \n", j);
}