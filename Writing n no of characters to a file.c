#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char name[100];

    printf("Enter name of the file to write in it: ");
    scanf("%s", name);

    FILE *p;

    p = fopen(name, "a");

    int ch=NULL;

    printf("Enter ~ to exit from writing\n");
    printf("Start writing: \n");

    while(ch != '~'){
        ch = getchar();

        if(ch != '~'){

            fputc(ch, p);

        }

    }

    fprintf(p, "%s", "\n\n");

    fclose(p);

    printf("Successfully Written\n");


    return 0;

}
