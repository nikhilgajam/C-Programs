#include <stdio.h>

int arsum(int A[], int N){

  if (N<=0){
    return 0;
  }
  return (arsum(A, N - 1) + A [N - 1]);
}

int main(){
  int A[] = {1, 2, 3, 4, 5, 6};
  int N = sizeof(A)/sizeof(A[0]);
  printf("%dn", arsum(A,N));
}