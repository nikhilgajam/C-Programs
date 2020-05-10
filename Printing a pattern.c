#include <stdio.h>

int main() {
  int a, b, k;
  char ch[10];
  printf("\n*****************************************\n\t\tPattern printing program\n*****************************************\n");
  
  printf("\nEnter a character\n(only one time should be entered)\n");
  scanf(" %s", ch);

  printf("How many times do you wanted to print: ");
  scanf(" %d", &k);

  printf("\n");
  for(a=1; a<=k; a++){
    for(b=1; b<=a; b++){
      printf("%s", ch);
    }
    printf("\n");
  }
  return 0;
}