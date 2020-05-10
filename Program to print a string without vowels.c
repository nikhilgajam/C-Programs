#include <stdio.h>
#include <string.h>

int main(){

    int i, l;
    char a[100];

    printf("Program to print given string without vowels\n\n");

    printf("Enter a name: ");
    gets(a);

    l = strlen(a);

    printf("\nString without vowels: \n");

    for(i=0; i<l; i++){
            
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u'){
                
            continue;
        
        }else{
            
            printf("%c", a[i]);
    
        }
    }

    printf("\n");
    
    
    
    
    
    

    return 0;

}
