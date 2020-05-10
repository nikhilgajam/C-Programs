#include <stdio.h>

int main() {
  int a[10], elem, loca, k, n;
  printf("How many elements would you like to have\n");
  scanf(" %d",&n);

  for(k=0; k<n; k++){
    printf("Print element %d:", k+1);
    scanf(" %d", &a[k]);
  }

  printf("Enter a number that you wanted to store\n");
  scanf(" %d",&elem);

  printf("Enter where you wanted to keep the element\n");
  scanf(" %d", &loca);

  if(loca<=n){
  for(k=n-1; k>=loca; k--){
    a[k+1]=a[k];
  }

  a[loca]=elem;

  for(k=0; k<n+1; k++){
    printf("%d. %d\n",k+1, a[k]);
  }
  }else{
    printf("Enter a number <= the no of elements you assigned\n");
  }
  
  return 0;
}