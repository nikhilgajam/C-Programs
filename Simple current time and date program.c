#include <stdio.h>

int main(){
    char t[10] = __TIME__;
    char d[12] = __DATE__;

    printf("Current Time: %s\n\n", t);
    printf("Date: %s\n", d);

    return 0;
}
