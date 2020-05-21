#include <stdio.h>

int main(){

    enum Days{Mon=1, Tues, Wed, Thu, Fri, Sat, Sun};

    // When we assign a number to a member then next members will have next values


    enum Days d;

    d = Mon;

    printf("Mon = %d", d);

    return 0;

}
