#include <stdio.h>
#include <stdlib.h>

struct node{

  int d;
  struct node *l;
  struct node *r;

}*root = NULL, *temp;

struct node* findmin(struct node *j){

    if(j == NULL){
        printf("Tree is empty\n");
        return NULL;
    }
    while(j->l != NULL){
        j = j->l;
    }
    return j;

}

struct node* findmax(struct node *j){

    if(j == NULL){
        printf("Tree is empty\n");
        return NULL;
    }
    while(j->r != NULL){
        j = j->r;
    }
    return j;

}

void search(struct node *q, int s){

    if(q == NULL){
        printf("No element is found\n");
    }else if(s == q->d){
        printf("Search element found\n");
    }else if(s < q->d){
        search(q->l, s);
    }else if(s > q->d){
        search(q->r, s);
    }

}

struct node* delete(struct node *p, int n){

    if(p == NULL){
        printf("tree is empty\n");
        return NULL;
    }else if(n < p->d){
        p->l = delete(p->l, n);
    }else if(n > p->d){
        p->r = delete(p->r, n);
    }else if(p->l == NULL && p->r == NULL){
        free(p);
        return NULL;
    }else if(p->l == NULL){
        temp = p;
        free(temp);
        return p->r;
    }else if(p->r == NULL){
        temp = p;
        free(temp);
        return p->l;
    }else{
        temp = findmin(p->r);
        p->d = temp->d;
        p->r = delete(p->r, temp->d);
    }

}

struct node* insert(struct node *root, int x){
    if(root == NULL){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->d = x;
        temp->l = temp->r = NULL;
        root = temp;
    }else if(x < root->d){
        root->l = insert(root->l, x);
    }else if(x > root->d){
        root->r = insert(root->r, x);
    }
    return root;
}

void inorder(struct node *root){
    if(root != NULL){
        inorder(root->l);
        printf("%d ", root->d);
        inorder(root->r);
    }
}

void preorder(struct node * root){
    if(root != NULL){
        printf("%d ", root->d);
        preorder(root->l);
        preorder(root->r);
    }
}

void postorder(struct node *root){
    if(root != NULL){
        postorder(root->l);
        postorder(root->r);
        printf("%d ", root->d);
    }
}

int main(){

    printf("Binary Search Tree Traversal, Inorder, Preorder, Postorder, Insertion, Deletion, Maximum, Minimum Program\n");

    int p, c, m;

    while(1){

        printf("\n\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Deletion\n6. Search\n7. Maximum\n8. Minimum\n9. Quit\n");

        printf("\nEnter your Choice: ");
        scanf(" %d", &c);

        switch(c){
        case 1:
            printf("Enter the data: ");
            scanf(" %d", &p);
            root = insert(root, p);
            break;

        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            printf("Enter the number to delete: ");
            scanf(" %d", &m);
            root = delete(root, m);
            break;
        case 6:
            printf("Enter the element to be searched: ");
            scanf(" %d", &m);
            search(root, m);
            break;
        case 7:
            printf("To find max in the given binary search tree\n");
            temp = findmax(root);
            printf("%d\n", temp->d);
            break;
        case 8:
            printf("To find minimumin the given binary search tree\n");
            temp = findmin(root);
            printf("%d\n", temp->d);
            break;
        case 9:
            exit(0);
        }

    }

    return 0;

}
