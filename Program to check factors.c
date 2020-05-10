#include <stdio.h>

int main(){
    int x, num;
    printf("Type a number: ");
    scanf(" %d", &num);
    for(x=1; x<=num; x++){
        if(num%x == 0){
            printf("%d", x);

        if(num>x){
            printf(", ");
        }
        if(num == x){
            printf(".\n");
        }
        }
    }
    return 0;
}