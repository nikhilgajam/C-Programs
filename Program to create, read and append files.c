#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char a[100];

    system("COLOR 17");

    printf("Basic Program To Create Files\n\n");

    printf("Enter W to write the file or R to read file or A to append file: ");
    scanf("%s", a);

    printf("Use .txt extension\nEx: hello.txt to Read, Write or Append\n\n");

    printf("Nikhil\n");

    if(strcmp(a, "R") == 0){

    system("COLOR 57");

    FILE *p;

    printf("Enter File Name To Read: ");
    scanf("%s", a);

    char c;

    p = fopen(a, "r");

    if(p == NULL){
        printf("Error");
        exit(1);
    }

    c = fgetc(p);

    while(c != EOF){
        printf("%c", c);
        c = fgetc(p);
    }

    fclose(p);

    printf("\n\n Successfully Read\n");

    }else if(strcmp(a, "W") == 0){

        system("COLOR 37");

        FILE *p;

        printf("Enter File Name To Write: ");
        scanf("%s", a);

        p = fopen(a, "w");

        fflush(stdin);
        printf("Enter Something To Write: ");
        gets(a);

        fprintf(p, "%s", a);

        fclose(p);

        printf("\n\nSuccessfully Written");

    }else if(strcmp(a, "A") == 0){

        system("COLOR 87");

        FILE *p;

        printf("Enter File Name To Append: ");
        scanf("%s", a);

        if(p == NULL){
        printf("Error");
        exit(1);
        }

        p = fopen(a, "a");

        printf("Enter Something To Write: ");
        gets(a);

        fprintf(p, "%s", a);

        fclose(p);

        printf("\n\nSuccessfully Appended\n");

    }else{
        printf("Enter as instructed\n");
    }

    printf("\nPress Any Key To Close The Program\n\n");
    scanf("%s", a);

    return 0;

}
