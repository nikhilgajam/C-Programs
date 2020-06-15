#include <stdio.h>

int main(int argc, char *argv[]){

    printf("Command Line Arguments\n\n\n");

    printf("Total no of arguments: %d\n\n", argc);

    int i;

    // We can use argv[1] to get entered words in command line and argv[0] is command to start program
    printf("Arguments: \n");

    for(i=0; i<argc; i++){
        printf("%s\n", argv[i]);
    }

    return 0;

}
