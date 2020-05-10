#include <stdio.h>
#define SIZE 100

struct queue{
    int que[SIZE];
    int rear;
    int front;
}q;

void enqueue();  // Insert
void dequeue();  // Delete
void display();  // Show All

int main(){

    printf("Queue Implementation Program\n\n");

    q.front = -1;
    q.rear = -1;

    int choice;

    printf("1.Enqueue\n2.Dequeue\n3.Display\n0.Quit\n");

    while(1){

        printf("\n==> ");
        scanf(" %d", &choice);

        switch(choice){
        case 0:
            return 1;
            break;

        case 1:
            enqueue();
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        default:
            printf("\nEnter instructed numbers only\n\n");

        }

    }

    return 0;
}

void enqueue(){

    int num;

    if(q.rear == SIZE - 1){
        printf("\nQueue Overflow (Queue is full)\n\n");
    }else{
        if(q.front == -1){
            q.front = 0;   //If queue is initially empty
        }

        printf("\nEnter enqueue element: ");
        scanf(" %d", &num);
        q.rear = q.rear + 1;
        q.que[q.rear] = num;
    }
}

void dequeue(){

    int num;

    if(q.front == -1 || q.front > q.rear){
        printf("\nQueue Underflow (Queue is empty)\n\n");
    }else{
        printf("\nDequeued element: %d\n\n", q.que[q.front]);
        q.front = q.front + 1;
    }
}

void display(){

    int j;

    if(q.rear == -1 || q.front > q.rear){
        printf("\nQueue Underflow (Queue is empty)\n\n");
    }else{
        printf("Queue elements:\n");
        for(j=q.front; j<=q.rear; j++){
            printf(" %d\n", q.que[j]);
        }
    }
}
