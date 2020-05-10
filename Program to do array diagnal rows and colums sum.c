#include <stdio.h>

int main(){

    int i, j, dsum=0, r1sum=0, r2sum=0, r3sum=0, c1sum=0, c2sum=0, c3sum=0;

    int a[3][3];

    printf("Type elements: \n");

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            scanf(" %d", &a[i][j]);
        }
    }


    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(i==j){
                dsum += a[i][j];
            }
        }
    }

    r1sum = a[0][0]+a[0][1]+a[0][2];
    r2sum = a[1][0]+a[1][1]+a[1][2];
    r3sum = a[2][0]+a[2][1]+a[2][2];

    c1sum = a[0][0]+a[1][0]+a[2][0];
    c2sum = a[0][1]+a[1][1]+a[2][1];
    c3sum = a[0][2]+a[1][2]+a[2][2];

    printf("Diagonal sum = %d\n", dsum);

    printf("Row 1 sum = %d\n", r1sum);
    printf("Row 2 sum = %d\n", r2sum);
    printf("Row 3 sum = %d\n", r3sum);

    printf("Column 1 sum = %d\n", c1sum);
    printf("Column 2 sum = %d\n", c2sum);
    printf("Column 3 sum = %d\n", c3sum);

    return 0;

}
