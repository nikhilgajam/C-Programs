#include <stdio.h>
#include <string.h>

int main(){

    printf("Palindrome String Determination Program\n\n");

    char s1[50], s2[50];

    printf("Enter a string: ");

    gets(s1);

    strcpy(s2, s1);

    strrev(s1);

    int l = stricmp(s1, s2); //stricmp treats capital and small letters as same

    if(l == 0){
        printf("\n%s = %s, Palindrome String\n", s2, s1);
    }else{
        printf("\n%s != %s, Not Palindrome String\n", s2, s1);
    }

    return 0;

}
