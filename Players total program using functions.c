#include <stdio.h>

int players();

int total; //It is static int due to its outside declaration

int main(){

    int num;
    printf("Type how players do you have: ");
    scanf(" %d", &num);

    for(int k=1; k<=num; k++){
        printf("Type player %d runs: ",k);
        total += players();
    }

    printf("\nTotal team runs: %d\n", total);


    return 0;

}

int players()
{
    int play;
    scanf(" %d", &play);
    return play;
}










