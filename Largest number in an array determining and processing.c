#include <stdio.h>

int main()
{
  int n;
  printf("Type how many numbers you wanted in your array\n");
  scanf(" %d", &n);
  
  int a[n];
  int larg=0;
  int k;

  for(k=0; k<n; k++){
    printf("Type element %d: ",k+1);
    scanf(" %d", &a[k]);
  }

  for(k=0; k<n; k++){
    if(a[k]>larg){
      larg = a[k];
    }
  }
  printf("\nThe largest number is %d\n", larg);
  return 0;
}