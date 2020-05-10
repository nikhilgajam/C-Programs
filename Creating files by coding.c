#include <stdio.h>

int main()
{
  FILE * name;
  name = fopen("abc.txt", "w");
  fprintf(name,"Hello World\n");
  fclose(name);
  return 0;
}