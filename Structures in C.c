#include <stdio.h>
#include <stdlib.h>


struct mem{
int id;
char name[100];
int age;

};

int main() {
  int k, n;
  printf("How many members?\n");
  scanf(" %d", &n);

  struct mem mems[10];

  for(k=0; k<n; k++){
    mems[k].id = k+1;
    printf("Enter information for user: %d\n", mems[k].id);

    printf("Name: ");
    scanf(" %s", mems[k].name);

    printf("Age: ");
    scanf(" %d", &mems[k].age);

    printf("\n");
  }

  for(k=0; k<n; k++){
    printf("Information of: %d\n", mems[k].id);

    printf("Name: %s\n", mems[k].name);

    printf("Age: %d\n", mems[k].age);
    
    printf("\n");

  }

  return 0;
}