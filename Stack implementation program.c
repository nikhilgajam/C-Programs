#include <stdio.h>
#define SIZE 5

struct stack{

    int stak[SIZE];
    int top;

}s;

void push();   // Insert
void pop();    // Delete
void peek();   // Show top element
void display();// Show all

int main(){

    printf("Stack Implementation Using Array\n\n");

    s.top = -1;
    int choice;

    printf("1.Push\n2.Pop\n3.Peek\n4.Display\n0.Quit\n\n");

    while(1){

        printf("\n==> ");
        scanf(" %d", &choice);

        switch(choice){
        case 0:
            return 1;
            break;
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        default:
            printf("\nEnter instructed numbers only\n");
        }

    }

    return 0;

}

void push(){

    int num;

    if(s.top == SIZE-1){
        printf("\nStack is full\n");
    }else{
        printf("\nEnter push element: ");
        scanf(" %d", &num);
        s.top = s.top + 1;
        s.stak[s.top] = num;
    }
}

void pop(){

    int num;

    if(s.top == -1){
        printf("\nStack is empty\n");
    }else{
        num = s.stak[s.top];
        s.top = s.top - 1;
        printf("\nPopped element: %d\n", num);
    }
}

void peek(){

    if(s.top == -1){
        printf("\nStack is empty\n");
    }else{
        printf("\nTop element in the Stack: %d\n", s.stak[s.top]);
        printf("Stack contains %d element(s)\n");
    }

}

void display(){

    int j;

    if(s.top == -1){
        printf("\nStack is empty\n");
    }else{
        printf("\nStack elements: \n");
        for(j=s.top; j>=0; j--){
            printf(" %d\n", s.stak[j]);
        }
    }
}
