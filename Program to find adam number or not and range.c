#include <stdio.h>

int reverse_num(int num);
void adam_number();
void adam_numbers_in_range(int num);

int main(){

    printf("Adam Number Program\n");
    printf("Ex: 12 because \n12^2=144 and 21^2=441 then 144 is reverse of 441 then it is called adam number\n");

    adam_number();

    // adam_numbers_in_range(10000);

    return 0;

}

int reverse_num(int num){

    int n, r=0, i;

    for(; num>0; num/=10){
        n = num%10;
        r = r*10+n;
    }

    return r;

}

void adam_number(){

    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

    int num_sqr = num*num;

    int rev = reverse_num(num);
    int rev_sqr = rev*rev;
    int rev_sqr_rev = reverse_num(rev_sqr);

    if(rev_sqr_rev == num_sqr){
        printf("\n%d is reverse of %d, So it is an Adam Number\n", num_sqr, rev_sqr);
    }else{
        printf("\n%d is not reverse of %d, So it is not an Adam Number\n", num_sqr, rev_sqr_rev);
    }

}

void adam_numbers_in_range(int num){

    int num_sqr, rev, rev_sqr, rev_sqr_rev, i;

    printf("\nAdam Numbers: \n");

    for(i=0; i<=num; i++){

        num_sqr = i*i;
        rev = reverse_num(i);
        rev_sqr = rev*rev;
        rev_sqr_rev = reverse_num(rev_sqr);

        if(rev_sqr_rev == num_sqr){
            printf("%d\n", i);
        }

    }

}
