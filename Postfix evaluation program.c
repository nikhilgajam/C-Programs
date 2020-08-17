#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 50

int pop();
void push(int);

char postfix[SIZE];
int stack[SIZE], top=-1;

int main(){

    int i, a, b, result, pEval;
    char ch;
    // All elements in stack will be -1 after this loop
    for(i=0; i<SIZE; i++){
        stack[i] = -1;
    }

    printf("Postfix Expression Evaluation Program\n\n");

    printf("Enter A Postfix Expression: ");
    scanf("%s", postfix);

    for(i=0; postfix[i]!='\0'; i++){
        ch = postfix[i];
        if(isdigit(ch)){
            // ASCII Values of a char number - char 0 gives the actual number value
            push(ch-'0');

        }else if(ch == '+' || ch == '-' || ch == '*' || ch == '/'){

            b = pop();
            a = pop();

            switch(ch){
            case '+':
                result = a+b;
                break;
            case '-':
                result = a-b;
                break;
            case '*':
                result = a*b;
                break;
            case '/':
                result = a/b;
            }

            push(result);

        }

    }

    pEval = pop();
    printf("\nThe Postfix Expression Evaluated Answer: %d\n", pEval);

    return 0;

}

void push(int n){

    if(top<SIZE-1){

        stack[++top] = n;   // ++top will increment the value before execution of the statement

    }else{

        printf("Stack Exceeded The Limit Which Is %d\n", SIZE);
        exit(-1);

    }

}

int pop(){

    int n;

    if(top > -1){

        n = stack[top];
        stack[top--] = -1;
        return n;

    }else{

        printf("Stack is empty\n");
        exit(-1);

    }

}
