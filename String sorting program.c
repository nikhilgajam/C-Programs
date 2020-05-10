#include <stdio.h>
#include <string.h>

int main(){

    printf("String Sorting Program\n");

    int names=0, letters=0, i, j;

    printf("\nType how many names you wanted to enter: ");
    scanf(" %d", &names);

    printf("Type how many letters you want to enter: ");
    scanf(" %d", &letters);

    char array[names][letters], temp[letters];

    printf("\n");

    for(i=0; i<names; i++){
        printf("Type Name %d: ", i+1);
        scanf(" %s", array[i]);
    }

    for(i=0; i<names; i++){
        for(j=0; j<names-1; j++){
            if(strcasecmp(array[j], array[j+1]) > 0){
                strcpy(temp, array[j+1]);
                strcpy(array[j+1], array[j]);
                strcpy(array[j], temp);
            }
        }
    }

    printf("\nSorted List: \n\n");

    for(i=0; i<names; i++){
        printf("==> %s\n", array[i]);
    }



    return 0;

}
