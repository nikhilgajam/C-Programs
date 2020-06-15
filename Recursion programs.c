#include <stdio.h>

int summation(int num);
int fact(int num);
int reverse_number(int num);
int armstrong(int num);
int fibonacci(int num);
int true_fibonacci(int num);
int print_n_times(int num);
int even_odd_count(int num);

int main(){

    even_odd_count(100);

}

int summation(int num){

    int n;
    static int r;  //Static data type default value is 0 so there's no need

    if(num > 0){

        n = num % 10;

        r = n+r;

        return (summation(num/10));

    }else{

        return r;

    }
}

int fact(int num){

    if(num == 0){

        return 1;

    }else{

        return (num * fact(num-1));

    }
}

int reverse_number(int num){

    int n;
    static int r; //Static data type default value is 0 so there's no need

    if(num > 0){

        n = num % 10;

        r = r*10+n;

        return (reverse_number(num/10));
    }else{

        return r;

    }
}

int armstrong(int num){

    //The sum of individual numbers with power 3 is called as armstrong number Ex: 153 => 1^3+5^3+3^3 => 1+125+27

    int n;
    static int r; //Static data type default value is 0 so there's no need

    if(num > 0){

        n = num % 10;

        r = r+(n*n*n);

        return (armstrong(num/10));
    }else{

        return r;

    }
}

int fibonacci(int num){

    static int a=0, b=1, c;

    if(num > 0){

        printf("%d\n", a);
        c = a+b;
        a = b;
        b = c;

        return fibonacci(num-1);

    }else{

        return a; //Highest value in list

    }

}

int true_fibonacci(int num){
    if(num == 0 || num == 1){

        return num;

    }else if(num > 1){

        return true_fibonacci(num - 1) + true_fibonacci(num - 2);

    }else{

        int fib_neg = true_fibonacci(-num);
        if(num % 2 == 0){
            return fib_neg;
        }else{
            return -fib_neg;
        }
    }
}

int print_n_times(int num){

    static int k=1;

    if(k <= num){
        printf("Hello World\n");
        return print_n_times(num - 1);
    }else{
        return 0;
    }
}

int even_odd_count(int num){

    static int ecount, esum, ocount, osum, tsum;
    if(num > 0){

            tsum += num;

        if(num%2 == 0){

        esum += num;

        ecount++;

        }else{

        osum += num;

        ocount++;

        }
        return (even_odd_count(num - 1));
    }else{

        printf("Even Sum =\t%d, Count = %d\n", esum, ecount);

        printf("Odd Sum =\t%d, Count = %d\n", osum, ocount);

        printf("Total Sum =\t%d\n", tsum);

        return 0;

    }
}
