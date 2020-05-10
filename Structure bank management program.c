#include <stdio.h>
#include <stdlib.h>

struct bank{

    int accno;
    char name[50];
    int bal;

}c[3];

int k=3;

void dispall();
void search();
void withdraw();
void deposit();
void read();

int main(){

    int s;

    printf("Bank Management Program\n\n");

    read();

    printf("Press 1 to see all accounts\n");
    printf("Press 2 to deposit money\n");
    printf("Press 3 to withdraw money\n");
    printf("Press 4 to search a customer\n");
    printf("Press 0 to exit\n");

    printf("\nEnter: ");
    scanf(" %d", &s);

    switch(s){

    case 1:
        dispall();
        break;

    case 2:
        deposit();
        break;

    case 3:
        withdraw();
        break;

    case 4:
        search();
        break;

    default:
        printf("Enter mentioned numbers\n");
    }


    return 0;

}

void read(){
    int i;

    for(i=0; i<k; i++){
        printf("Enter Customer %d Details: \n", i+1);
        printf("Acc No: ");
        scanf(" %d", &c[i].accno);
        printf("Name: ");
        scanf(" %d", c[i].name);
        fflush(stdin);
        printf("Balance: ");
        scanf(" %d", &c[i].bal);

        printf("\n");
    }

    printf("\nSuccessfully read the details of customers\n\n");
}

void dispall(){

    int i;

    for(i=0; i<k; i++){
        printf("Enter Customer %d Details: \n", i+1);
        printf("Acc No: %d\n", c[i].accno);
        printf("Name: %s\n", c[i].name);
        printf("Balance: %d\n", c[i].bal);

        printf("\n\n");
    }

}

void deposit(){

    int acc, dep, i;

    printf("Enter Acc No to deposit: ");
    scanf(" %d", &acc);

    for(i=0; i<k; i++){
        if(acc == c[i].accno){

            printf("Enter Customer %d Details: \n", i+1);
            printf("Acc No: %d\n", c[i].accno);
            printf("Name: %s\n", c[i].name);
            printf("Balance: %d\n", c[i].bal);

            printf("\n\n");

            printf("Enter money to deposit: ");
            scanf(" %d", &dep);
            c[i].bal += dep;

        }else{

            printf("Enter Correct Acc. No\n");

        }
    }

}

void withdraw(){

    int acc, wit, i;

    printf("Enter Acc No to deposit: ");
    scanf(" %d", &acc);

    for(i=0; i<k; i++){
        if(acc == c[i].accno){

            printf("Enter Customer %d Details: \n", i+1);
            printf("Acc No: %d\n", c[i].accno);
            printf("Name: %s\n", c[i].name);
            printf("Balance: %d\n", c[i].bal);

            printf("\n\n");

            printf("Enter money to deposit: ");
            scanf(" %d", &wit);
            c[i].bal -= wit;

        }else{

            printf("Enter Correct Acc. No\n");

        }

}

}

void search(){

    int acc, i;

    printf("Enter Acc No to deposit: ");
    scanf(" %d", &acc);

    for(i=0; i<k; i++){
        if(acc == c[i].accno){

            printf("Enter Customer %d Details: \n", i+1);
            printf("Acc No: %d\n", c[i].accno);
            printf("Name: %s\n", c[i].name);
            printf("Balance: %d\n", c[i].bal);

            printf("\n\n");

        }else{

            printf("Enter Correct Acc. No\n");

        }
    }
}
