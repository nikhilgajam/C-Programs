#include <stdio.h>

int main(){
    int a, b, c, d;
    printf("Bigger Number Determination Program");

    printf("\n\nType Numbers A, B, C & D\n");
    scanf(" %d %d %d %d", &a, &b, &c, &d);

    if(a>b && a>c && a>d){

        printf("\n%d (A) is Bigger\n", a);

    }else if(b>a && b>c && b>d){

        printf("\n%d (B) is Bigger\n", b);

    }else if(c>a && c>b && c>d){

        printf("\n%d (C) is Bigger\n", c);

    }else if(d>a && d>b && d>c){

        printf("\n%d (D) is Bigger\n", d);

    }else{

        printf("\n%d = %d = %d = %d (All Numbers Are Same)\n", a, b, c, d);

    }

    return 0;
}

/*

BIGGER NUMBER AMONG THREE NUMBERS

int a, b, c;
    printf("Bigger Number Determination Program");

    printf("\nType Numbers A, B & C\n");
    scanf(" %d %d %d", &a, &b, &c);

    if(a>b && a>c){

        printf("\n%d (A) is Bigger\n", a);

    }else if(b>a && b>c){

        printf("\n%d (B) is Bigger\n", b);

    }else if(c>a && c>b){

        printf("\n%d (C) is Bigger\n", c);

    }else{

        printf("\n%d = %d = %d (Three Numbers Are Same)\n", a, b, c);

    }

*/

/*

BIGGER NUMBER BETWEEN TWO NUMBERS

int a, b, c;
    printf("Bigger Number Determination Program");

    printf("\nType Numbers A & B\n");
    scanf(" %d %d", &a, &b);

    if(a>b){
        printf("%d is Bigger\n", a);
    }else if(b>a){
        printf("%d is Bigger\n", b);
    }else{
        printf("%d = %d\n", a, b);
    }

*/
