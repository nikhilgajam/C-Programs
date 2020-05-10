#include <stdio.h>

int main(){
    int dept_code, desig_code;
    printf("Department and designation determining program\n\n");

    printf("Type Department Code: ");
    scanf(" %d",&dept_code);

    printf("Type Designation Code: ");
    scanf(" %d",&desig_code);

    printf("\nYour Department is: \n");

    switch(dept_code){
        case 1:
            printf("CIVIL (Civil Engineering)\n");
            break;

        case 2:
            printf("EEE (Electrical & Electronics Engineering)\n");
            break;

        case 3:
            printf("MECH (Mechanical Engineering)\n");
            break;

        case 4:
            printf("ECE (Electronics & Communications Engineering)");
            break;

        case 5:
            printf("CSE (Computer Science And Engineering)\n");
            break;

        case 8:
            printf("CHEM (Chemical Engineering)\n");
            break;

        case 12:
            printf("IT (Information Technology)\n");
            break;

        case 35:
            printf("AI (Artificial Technology)\n");
            break;

        default:
            printf("Type Correct Department Code\n");

    }

    printf("\nYour Designation is: \n");

    switch(desig_code){
        case 1:
            printf("HOD (Head Of The Department)\n");
            break;

        case 2:
            printf("Professor\n");
            break;

        case 3:
            printf("Associate Professor\n");
            break;

        case 4:
            printf("Assistant Professor\n");
            break;

        case 5:
            printf("Programmer\n");
            break;

        default:
            printf("Type Correct Designation Code\n");
    }

    return 0;
}
