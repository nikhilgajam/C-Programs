#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

}*head, *p, *end;

int show_all();
void search();
void insert_at_begin();
void insert_at_index();
void insert_at_end();
void del_at_begin();
void del_at_index();
void del_at_end();
void del_n_elements();
void del_by_num();
void sort();

int main(){

    int choice;

    printf("Linked List\n");

    while(1){

        printf("\n");

        printf("1.Show All\n2.Search\n3.Insert At End(Append)\n4.Insert At Index\n5.Insert At Begin\n6.Delete Begin\n7.Delete By Index\n8.Delete End\n9.Delete n elements\n10.Delete A Number\n11.Sort\n0.Quit\n");

        printf("\n==> ");
        scanf(" %d", &choice);

        if(choice == 1){
            show_all();
        }else if(choice == 2){
            search();
        }else if(choice == 3){
            insert_at_end();
        }else if(choice == 4){
            insert_at_index();
        }else if(choice == 5){
            insert_at_begin();
        }else if(choice == 6){
            del_at_begin();
        }else if(choice == 7){
            del_at_index();
        }else if(choice == 8){
            del_at_end();
        }else if(choice == 9){
            del_n_elements();
        }else if(choice == 10){
            del_by_num();
        }else if(choice == 11){
            sort();
        }else if(choice == 0){
            return 1;
        }


    }


    return 0;

}


int show_all(){

    int count = 0;

    end = head;

    printf("\n[ ");

    while(end != 0){

        printf("%d, ", end->data);
        end = end->next;
        count++;

    }

    if(count == 0){
        printf("No Elements To Show");
    }

    printf(" ]\n\n");

    return count;

}

void search(){

    int sear, count=0, pos=-1, position=0;

    printf("Enter a number to search: ");
    scanf(" %d", &sear);

    end = head;

    while(end != 0){

        pos++;
        if(end->data == sear){
            printf("%d\t", count);
            count++;
            position = pos;
        }

        end = end->next;

    }

    if(count == 0){

        printf("Cannot find element %d\n\n", sear);

    }else{

        printf("\nElement %d is at %d position and repeated %d time(s)\n\n", sear, position, count);

    }

}

void insert_at_begin(){

    p = (struct node*)malloc(sizeof(struct node));

    if(p == NULL){
        printf("Memory Error\n\n");
    }else{

        printf("Enter Data: ");
        scanf(" %d", &p->data);

        p->next = head;
        head = p;

    }

}

void insert_at_index(){

    struct node *temp, *add;

    add = (struct node*)malloc(sizeof(struct node));

    int sear, count=0, pos=-1, position=0;

    printf("Enter index to insert: ");
    scanf(" %d", &sear);
    printf("Enter Data: ");
    scanf(" %d", &add->data);

    end = head;

    while(end != NULL){
        pos++;
        if(pos == sear){
            count++;
            p->next = add;
            add->next = end;
            break;
        }

        temp = end->next;
        p = end;
        end = temp;
    }

     if(count == 0){

        printf("Cannot locate index %d\n\n", sear);

    }

}

void insert_at_end(){

    p = (struct node*)malloc(sizeof(struct node));

    if(p == NULL){
        printf("Memory Error\n\n");
        return;
    }

    printf("Enter Data: ");
    scanf(" %d", &p->data);

    if(head == NULL){

        head = p;
        p->next = NULL;

    }else{

        end = head;

        while(end->next != NULL){
            end = end->next;
        }

        end->next = p;
        p->next = NULL;

    }

}

void del_at_begin(){

    p = (struct node*)malloc(sizeof(struct node));
    int temp;

    if(head == NULL){

        printf("\nLinked list is empty\n\n");

    }else{

        temp = head->data;
        p = head->next;
        free(head);
        head = p;

        printf("\n%d Deleted Successfully\n\n", temp);

    }
}

void del_at_index(){

    struct node *temp;

    int sear, count=0, pos=-1, position=0;

    printf("Enter index to delete: ");
    scanf(" %d", &sear);

    end = head;

    while(end != NULL){
        pos++;
        if(pos == sear){
            count++;
            p->next = end->next;
            break;
        }

        temp = end->next;
        p = end;
        end = temp;
    }

     if(count == 0){

        printf("Cannot locate index %d\n\n", sear);

    }

}

void del_at_end(){

    int temp;

    if(head == NULL){

        printf("\nLinked list is empty\n\n");

    }else{

        if(head->next == NULL){
            temp = head->data;
            head = NULL;
            free(head);
        }else{
            p = head;
            while(p->next->next != NULL){
                p = p->next;
            }

            temp = p->next->data;
            free(p->next);
        }

        printf("\n%d Deleted Successfully\n\n", temp);

    }
}

void del_n_elements(){

    int num, count = -1;

    printf("Enter n: ");
    scanf(" %d", &num);

    p=head;
    while(head->next!=NULL){

        count++;
        end=head->next;
        p=head;
        head=end;

        if(count == num)
            break;

        p->next=head->next;
    }

}

void del_by_num(){

    struct node *temp;

    int sear, count=0, pos=-1, position=0;

    printf("Enter a number to delete: ");
    scanf(" %d", &sear);

    end = head;

    while(end != 0){

        pos++;
        if(end->data == sear){
            count++;
            end->data=0;
            p->next=end->next;
            break;
        }
        p=end;
        temp = end-> next;
        end = temp;

    }

    if(count == 0){

        printf("Cannot find element %d\n", sear);

    }

}

void sort(){

    int temp;

    if(head == NULL){
        printf("\nLinked list is empty\n");
    }else{

        p = head;

        while(p != NULL){

            end = p->next;

            while(end != NULL){

                if((p->data) > (end->data)){
                    temp = p->data;
                    p->data = end->data;
                    end->data = temp;
                }
                end = end->next;

            }

            p = p->next;
        }
    }

}

/*


#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

}*head=NULL, *cur, *temp=NULL;


int prints();

int main(){

    int ask=1;

    while(ask != 0){

    cur = (struct node*)malloc(sizeof(struct node));


    if(head == NULL){

        head = temp = cur;

    }else{

        temp->next=cur;
        temp = cur;

    }

    printf("Enter Data: ");
    scanf(" %d", &cur->data);

    temp->next = NULL;

    printf("Do you want to continue: ");
    scanf(" %d", &ask);

    }

    printf("\n\n\n");

    int a = prints();

    printf("No. of lists = %d\n", a);


    return 0;

}

int prints(){

    int count=0;

    temp = head;

    while(temp != 0){
        printf("%d\n", temp->data);
        temp = temp->next;
        count++;
    }

    return count;

}

*/
