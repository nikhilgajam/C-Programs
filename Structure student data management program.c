#include <stdio.h>
#include <stdlib.h>

struct student{
    int rno;
    char name[50];
    int marks[6], total;
}s[3], temp;

int k = 3, l = 6;

void dispall();
void sear();
void high();
void read();
void exits();

int main(){

    printf("Students Data Management Program\n\n");

    int s;

    read();

    printf("1. Print all students details\n"
           "2. Search students by roll no\n"
           "3. Print names having highest score\n");

    while(1){

    printf("\nEnter: ");
    scanf(" %d", &s);

    switch(s){

    case 0:
        exits();
        break;

    case 1:
        dispall();
        break;

    case 2:
        sear();
        break;

    case 3:
        high();
        break;

    default:
        printf("Enter mentioned numbers only\n");

    }

    }



    return 0;

}

void dispall(){

    int i, j;

    for(i=0; i<k; i++){
        printf("Student no %d Details:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll no: %d\n", s[i].rno);
        printf("Marks: \n");

        for(j=0; j<l; j++){
            printf("Marks %d:  %d\n", i+1,s[i].marks[j]);
        }

        printf("Total = %d\n", s[i].total);

        printf("\n\n");
    }

}

void sear(){

    int search, i, j;

    printf("Enter roll no to search: ");
    scanf(" %d", &search);

    for(i=0; i<k; i++){
        if(search == s[i].rno){

        printf("Student no %d Details:\n", i+1);
        printf("Name: %s\n", s[i].name);
        printf("Roll no: %d\n", s[i].rno);
        printf("Marks: \n");

        for(j=0; j<l; j++){
            printf("Marks %d:  %d\n", i+1 ,s[i].marks[j]);
        }

        printf("Total = %d\n", s[i].total);

        printf("\n\n");

        }
        }
}


void high(){

    int i, j;

    for(i=0; i<k; i++){
        for(j=0; j<k-1; j++){
            if(s[i].total < s[i+1].total){
                temp = s[i];
                s[i] = s[i+1];
                s[i+1] = temp;
            }
        }
    }

    printf("Highest Score:\n");
    printf("%s got %d total\n", s[0].name, s[0].total);
    printf("%s got %d total\n", s[1].name, s[1].total);
    printf("%s got %d total\n", s[2].name, s[2].total);

    printf("\n");

}

void read(){

    int i, j;

    for(i=0; i<k; i++){
        printf("Enter student no %d:\n", i+1);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Roll no: ");
        scanf(" %d", &s[i].rno);
        printf("Enter marks: \n");

        for(j=0; j<l; j++){
            printf("Enter %d: ", j+1);
            scanf(" %d", &s[i].marks[j]);

            s[i].total += s[i].marks[j];
        }

        printf("\n\n");
    }

}

void exits(){

    exit(1);

}
