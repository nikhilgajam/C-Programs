#include <stdio.h>
#include <time.h>

int main() {
  int t;
  printf("Time Program\n\n");

  time_t tt = time(NULL);
  printf("%s", ctime(&tt));

  printf("\nThis program prints real time\nTo start press 1\n");
  printf("This program runs infinitely\n");
  printf("To exit press 'CTRL+C'\n");

  scanf(" %d", &t);

  while(t==1){
    time_t tt = time(NULL);
    printf("%s", ctime(&tt));
  }
  return 0;
}