#include <stdio.h>

extern int x = 100;


int main(){

    printf("Storage Classes In C\n");

    auto int w = 100;
    // Storage(RAM [Stack]), Initial Value(Garbage), Scope(Within block), Life(End of the block)


    x = 100;
    // Storage(RAM [Data segment]), Initial Value(Zero), Scope(Global and Multiple files), Life(Till end of the program)


    static int y = 100;
    // Storage(RAM [Data segment]), Initial Value(Zero), Scope(Within block), Life(Till end of the program)


    register int z = 100;
    // Storage(RAM [CPU register]), Initial Value(Garbage), Scope(Within block), Life(End of block)


    return 0;

}
