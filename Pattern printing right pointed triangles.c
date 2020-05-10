#include <stdio.h>

int main() {
  int w, x, y, z;
  for(w=1; w<=6; w++){
    for(x=1; x<=w; x++){
      printf("%d",x);
    }
    printf("\n");
  }
  for(y=5; y>=1; y--){
    for(z=1; z<=y; z++){
      printf("%d",z);    // replace z with y to get another pattern
    }
    printf("\n");
  }
  return 0;
}
/*
ANOTHER

#include <stdio.h>

int main() {
  int w, x, y, z;
  for(w=6; w>=1; w--){
    for(x=6; x>=w; x--){
      printf("%d",x);
    }
    printf("\n");
  }
  for(y=2; y<=6; y++){
    for(z=6; z>=y; z--){
      printf("%d",z);    // replace z with y to get another pattern
    }
    printf("\n");
  }
  return 0;
}
*/