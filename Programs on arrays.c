#include <stdio.h>
#include <stdlib.h>

void array_copying();
void dynamic_array();
void array_searching();
void array_even_odd();
void simple_bubble_sort();
void binary_search();
void largest_nums_in_array();
void matrix_multiplication();
void matrix_subtraction();
void matrix_addition();
void matrix_transpose();
void matrix_determinant();
void matrix_diagonal_sum_program();


int main(){

    array_copying();

}

void array_copying(){

    printf("Copying one array to another\n");

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10], k;

    for(k=0; k<10; k++){
        b[k] = a[k];  //To copy 10 to 1 in another array use this  ==>  b[10-(k+1)] = a[k];
    }

    for(k=0; k<10; k++){
        printf("%d\n", b[k]);
    }

}

void dynamic_array(){

    printf("Dynamic Matrix Program\n\n");

    int *p, *q, *r, i, j, rs, cs;

    printf("Enter rows columns: ");
    scanf("%d %d", &rs, &cs);

    p = (int *)malloc((rs*cs)*sizeof(int));
    q = (int *)malloc((rs*cs)*sizeof(int));
    r = (int *)malloc((rs*cs)*sizeof(int));

    printf("Enter elements of matrix 1: \n");

    for(i=0; i<rs; i++){
        for(j=0; j<cs; j++){
            scanf("%d", (p+i*cs+j));
        }
    }

    printf("Enter elements of matrix 2: \n");

    for(i=0; i<rs; i++){
        for(j=0; j<cs; j++){
            scanf("%d", (q+i*cs+j));
        }
    }

    for(i=0; i<rs; i++){
        for(j=0; j<cs; j++){
            *(r+i*cs+j) = *(p+i*cs+j) + *(q+i*cs+j);
        }
    }

    printf("Answer:\n");
    for(i=0; i<rs; i++){
        for(j=0; j<cs; j++){
            printf("%d\t", *(r+i*cs+j));
        }
        printf("\n");
    }

}

void array_searching(){

    printf("Array search program\n\n");

    int a[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 10};
    int k, search, sear = 0, pos;

    printf("Type number to search: ");
    scanf(" %d", &search);

    for(k=0; k<11; k++){

        if(search == a[k]){
            sear++;
            pos = k;
        }

    }

    if(sear > 0){
        printf("\n\nElement %d is first found at position = %d & no.of same number(s) = %d\n", search, pos, sear);
    }

}

void array_even_odd(){

    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k, es=0, os=0, ec=0, oc=0;

    for(k=0; k<10; k++){

        if(a[k]%2 == 0){
            es += a[k];
            ec++;
        }else{
            os += a[k];
            oc++;
        }
    }

    printf("Even sum = %d, even count = %d\n", es, ec);
    printf("Odd sum = %d, odd count = %d\n", os, oc);

}

void simple_bubble_sort(){

    int n, k, l, temp;
    printf("Simple Bubble Sorting Program\n");

    printf("\nType how many elements you want in an array: ");
    scanf(" %d", &n);

    int a[n];

    for(k=0; k<n; k++){
        printf("Type element %d: ", k+1);
        scanf(" %d", &a[k]);
    }

    for(k=0; k<n; k++){

        for(l=0; l<n-k-1; l++){

            if(a[l] > a[l+1]){  // You can also change < and > in the if statement ( > Ascending )
                temp = a[l];
                a[l] = a[l+1];
                a[l+1] = temp;
            }
        }
    }


    printf("\nSorted Elements: \n");

    for(k=0; k<n; k++){

        printf("%d\n", a[k]);

    }

}

void binary_search(){

    printf("Binary Search Program\n\n");

    int a[100], num, k, search, scount=0, low, middle, high;

    printf("Enter No.of elements in an array: ");
    scanf(" %d", &num);

    if(num > 100){
        printf("\nToo Many Numbers\n");
        return; //exit(0);
    }

    printf("\nEnter the elements of the array\n");

    for(k=0; k<num; k++){
        scanf(" %d", &a[k]);
    }

    printf("\nEnter the element to search: ");
    scanf(" %d", &search);

    low = 0;
    high = num-1;

    while(high >= low){

        middle = (low+high)/2;

        if(a[middle] == search){

            scount = 1;
            break;

        }else if (search < a[middle]){

            high = middle - 1;

        }else{

            low = middle + 1;

        }

    }

    if(scount == 0){

        printf("\n %d NOT FOUND\n", search);

    }else{

        printf("\n%d FOUND AT %d POSITION\n", search ,middle);

    }

    return;

}

void largest_nums_in_array(){

printf("Program to find first and second largest numbers\n\n");

    int num;

    printf("Enter how many elements you need: ");
    scanf(" %d", &num);

    int a[num], i, j, t;

    for(i=0; i<num; i++){
        printf("Enter %d element: ", i+1);
        scanf(" %d", &a[i]);
    }

    for(i=0; i<num; i++){
        for(j=0; j<num-1; j++){

            if(a[j] < a[j+1]){

                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;

            }

        }
    }

    printf("\nNumbers you entered: \n");
    for(i=0; i<num; i++){
        printf("%d\n", a[i]);
    }

    printf("\nLargest Number = %d\n", a[0]);

    if(a[0] != a[1]){
        printf("Second largest Number = %d\n", a[1]);
    }else{
        printf("Second largest Number = %d\n", a[2]);
    }

}

void matrix_multiplication(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Multiplication Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(c1 == r2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c2; j++){

                        ans[i][j] = 0;

                        for(k=0; k<c1; k++){

                       ans[i][j] += matrix1[i][k] * matrix2[k][j];

                        }
                }

            }


            printf("\n\nMatrix Multiplication: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Dimensional Error\n");
    }
}

}

void matrix_subtraction(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Subtraction Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){

                       ans[i][j] = matrix1[i][j] - matrix2[i][j];

                }

            }


            printf("\n\nMatrix Subtraction: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Rows and Columns must be same to execute the operation\n");
    }
}

}

void matrix_addition(){

    {
    int r1, r2, c1, c2, i, j, k;

    printf("Matrix Addition Program\n\n");

    printf("Enter no of rows & columns of Matrix 1: ");
    scanf(" %d %d", &r1, &c1);

    printf("Enter no of rows & columns of Matrix 2: ");
    scanf(" %d %d", &r2, &c2);

    int matrix1 [r1] [c1];
    int matrix2 [r2] [c2];
    int ans [r1] [c1];

    if(r1 == r2 && c1 == c2){

            printf("\nEnter Elements Of Matrix 1\n\n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                       scanf("%d", &matrix1[i][j]);
                }

            }

            printf("\nEnter Elements Of Matrix 2\n\n");

            for(i=0; i<r2; i++){

                for(j=0; j<c2; j++){
                       scanf("%d", &matrix2[i][j]);
                }

            }

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){

                       ans[i][j] = matrix1[i][j] + matrix2[i][j];

                }

            }


            printf("\n\nMatrix Addition: \n");

            for(i=0; i<r1; i++){

                for(j=0; j<c1; j++){
                    printf("   ");
                       printf("%d\t", ans[i][j]);
                }

                printf("\n");

            }

    }else{
        printf("Rows and Columns must be same to execute the operation\n");
        }
    }
}

void matrix_transpose(){

    printf("Matrix Transpose Program\n\n");

    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf(" %d %d", &r, &c);

    int a[r][c], transpose[r][c];

    printf("Type array elements: \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            scanf("%d", &a[i][j]);

        }
    }


    printf("\nTransposed Elements: \n");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){

            transpose[i][j] = a[j][i];

            printf(" ");
            printf("\t%d", transpose[i][j]);
        }
        printf("\n");
    }


}

void matrix_determinant(){

    printf("Matrix Determinant Program\n\n");

    int i, j, r, c;

    printf("Enter rows and columns: ");
    scanf(" %d %d", &r, &c);

    int a[r][c], det;

    printf("\nEnter elements: \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf(" %d", &a[i][j]);
        }
    }


    if(r == 3 && c == 3){

        det = a[0][0] * ((a[1][1] * a[2][2]) -  (a[2][1] * a[1][2])) - a[0][1] * ((a[1][0] * a[2][2]) - (a[2][0] * a[1][2])) + a[0][2] * ((a[1][0] * a[2][1]) - (a[2][0] * a[1][1]));
        printf("\n3X3 Determinant: %d\n", det);

    }else{

        det = det = a[0][0] * (a[1][1]) - a[0][1] * (a[1][0]);
        printf("\n2X2 Determinant: %d\n", det);

    }

}

void matrix_diagonal_sum_program(){

    printf("Diagonal Sum Program\n\n");

    int r, c;

    printf("Enter rows and columns: ");
    scanf(" %d %d", &r, &c);

    int a[r][c], i, j, sum=0;

    printf("\nEnter elements: \n");

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf(" %d", &a[i][j]);
        }
    }

    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            if(i == j){
                sum += a[i][j];
            }
        }
    }

    printf("\nDiagonal Sum: %d\n", sum);

}

