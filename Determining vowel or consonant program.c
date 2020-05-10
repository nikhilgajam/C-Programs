#include <stdio.h>

int main() {
  char a;
  
  printf("Determining Vowel Or Consonant Program\n");

  printf("\nType a letter: ");
  scanf(" %c", &a);

  if(a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u'){
    printf("%c is a Vowel\n", a);
  }else{
    printf("%c is a Consonant\n", a);
  }
  return 0;
}