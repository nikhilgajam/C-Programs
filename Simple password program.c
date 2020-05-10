#include <stdio.h>
#include <string.h>

int main() {
  char id[10], pa[10];
  printf("Enter User ID: ");
  scanf(" %s", id);
  
  printf("Enter Password: ");
  scanf(" %s", pa);

  if(strcmp(id, "abcd")==0 && strcmp(pa, "Abcd1")==0){
    printf("Welcome");
  }else{
    printf("Type your id & password");
  }

  return 0;
}