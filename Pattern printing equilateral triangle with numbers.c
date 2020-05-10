#include <stdio.h>

int main() {
  int w, x, y, rows, var;

  printf("Type How Many Rows You Want: ");
  scanf("%d", &rows);
  
  var = rows;

  printf("\nPattern\n\n");
  for(w=1; w<=rows; w++){
    
    for(x=1; x<=var; x++){
      printf(" ");
    }
    for(y=1; y<=w; y++){
      printf("%d", w); // replace w with z to print in a another way
      printf(" ");
    }
    printf(" ");
    printf("\n");
    var = var - 1;
  }
  return 0;
}

/*

INVERTED TRIANGLE PROGRAM

#include <stdio.h>

int main() {
	
  int w, x, y, rows, var;

  printf("Type How Many Rows You Want: ");
  scanf("%d", &rows);
  
  var = rows;

  printf("\nPattern\n\n");
  for(w=rows; w>=1; w--){
    
    for(x=var; x>=1; x--){
      printf(" ");
    }
    for(y=1; y<=w; y++){
      printf("%d", w);    // replace w with z to print in a another way
      printf(" ");
    }
    printf(" ");
    printf("\n");
    var = var + 1;
  }
  return 0;
}

*/