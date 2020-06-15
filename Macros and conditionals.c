#include <stdio.h>
#define PI 3.14

int main(){

    // Macro conditionals

    #ifdef PI   // if defined
    printf("Hello World\n");
    #else
    printf("Define the macro\n");
    #endif



    #ifndef PI   // if not defined
    printf("OK\n");
    #endif // PI

    #define A 100 // Macro

    #ifdef A

        #if A == 100
        printf("A exists perfectly\n");
        #elif A > 100
        printf("A is more\n");
        #else
        printf("A exists\n");
        #endif // A

    #endif // A

    #ifndef A
    printf("Define \"A\" Macro\n");
    #endif // A


    return 0;

}
