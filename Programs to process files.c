#include <stdio.h>
#include <stdlib.h>

void read();
void write();
void append();
void removes();
void renames();
void edit();
void cdir();
void copy();
void cknow();
void lknow();
void ccount();
void wcount();

int main(){



}

void read(){

    char a[100];

    printf("Use .txt or any other extension to read\nEx: hello.txt\n\n");

    system("COLOR 57");

    FILE *p;

    printf("Enter File Name To Read: ");
    scanf("%s", a);

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    char c;

    p = fopen(a, "r");

    if(p == NULL){
        printf("\nError\n");
    }

    printf("\n");

    c = fgetc(p);

    while(c != EOF){
        printf("%c", c);
        c = fgetc(p);
    }

    printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");

    fclose(p);

    printf("\n\n Successfully Read\n");

}

void write(){

    char a[100];

    printf("Use .txt or any other extension to write\nEx: hello.txt\n\n");

    system("COLOR 37");

        FILE *p;

        printf("Enter File Name To Write: ");
        scanf("%s", a);

        p = fopen(a, "w");

        fflush(stdin);

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        int ch=NULL;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }



        fclose(p);

        printf("\n\nSuccessfully Written\n");
}

void append(){

    char a[100];

    printf("Use .txt or any other extension to append\nEx: hello.txt\n\n");

system("COLOR 87");

        FILE *p;

        printf("Enter File Name To Append: ");
        scanf("%s", a);

        if(p == NULL){
        printf("Error");
        }

        p = fopen(a, "a");

        printf("Enter ~ to exit from writing\n");
        printf("Start writing: \n");

        int ch=NULL;

        while(ch != '~'){
            ch = getchar();

            if(ch != '~'){

            fputc(ch, p);

        }

    }


        fclose(p);

        printf("\n\nSuccessfully Appended\n");

}

void removes(){
    char a[100];
    int m;

    printf("Enter a file name to remove: ");
    scanf("%s", a);

    m = remove(a);

    if(m == 0){
        printf("Successfully removed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}

void renames(){

    char a[100], b[100];
    int m;

    printf("Enter a file name to rename: ");
    scanf("%s", a);

    printf("\nEnter new name: ");
    scanf("%s", b);

    m = rename(a, b);

    if(m == 0){
        printf("Successfully renamed a file\n");
    }else{
        printf("Error in removing please check if the file exists in directory\n");
    }

}

void edit(){
    char a[100];
    printf("Warning: Close the editor to use Nikhil Terminal\n");
    printf("Use .txt or any other extension to edit\nEx: hello.txt\n\n");
    printf("Enter file name to edit: ");
    scanf("%s", a);

    system(a);

    printf("Successfully opened editing software\n");
}

void cdir(){
    char a[100];

    printf("Your Directory:\n");
    system("dir");
}

void copy(){

    char a[100], b[100];
    int c;
    FILE *p, *q;

    printf("Use .txt or any other extension to copy\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);
    printf("\nEnter copy destination file name: ");
    scanf("%s", b);

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    p = fopen(a, "r");
    q = fopen(b, "a");

    c = fgetc(p);
    while(c != EOF){
        fputc(c, q);
        c = fgetc(p);
    }

    fclose(p);
    fclose(q);

    printf("\nSuccessfully copied\n");
    }

}

void cknow(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to cknow\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    fflush(stdin);
    printf("\nEnter the character to search: ");
    scanf("%c", &cha);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c == cha){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of times %c repeated is = %d\n",  cha, count);
    }
}

void lknow(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to cknow\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c == '\n'){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of lines = %d\n", count);
    }

}

void ccount(){

    char a[100], cha;
    int c, count=0;
    FILE *p;

    printf("Use .txt or any other extension to ccount\nEx: hello.txt\n\n");
    printf("Enter existing file name: ");
    scanf("%s", a);

    p = fopen(a, "r");

    if(p == NULL){
        printf("The file is not found\n");
    }else{

    c = fgetc(p);
    while(c != EOF){
        if(c != ' ' && c != '\n'){
            count++;
        }
        c = fgetc(p);
    }

    fclose(p);

    printf("No. of characters in file is = %d\n", count);
    }
}

void wcount(){

    char name[100], sear[100], a[50];
    int k, word=0, tw=0;

    printf("Enter file name: ");
    scanf("%s", name);
    printf("Enter the word to search: ");
    scanf("%s", sear);

    FILE *p = fopen(name, "r");

    if(p == NULL){
        printf("Error");
        exit(1);
    }

    /*
    fseek(p, 0, SEEK_END);                 Use another method
    k = ftell(p);
    fseek(p, 0, SEEK_SET);

    while(k != ftell(p))
    */

    while(!feof(p)){
        fscanf(p, "%s", a);

        if(strcmp(a, sear) == 0){
            word++;
        }
        tw++;
    }

    printf("%s repeated = %d time(s)\n", sear, word);
    printf("Total no. of words = %d\n", tw);

}
