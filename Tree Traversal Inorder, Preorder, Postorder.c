#include <stdio.h>
#include <stdlib.h>

struct node{
    int value;
    struct node *left;
    struct node *right;
};

struct node *root;
struct node *insert(struct node *r, int data);
void inorder(struct node *r);
void preorder(struct node *r);
void postorder(struct node *r);

int main(){

    root = NULL;

    printf("Tree Traversal All Inorder, Preorder, Postorder Program\n\n");

    int n, v, i;
    printf("How many data elements you want to insert: ");
    scanf(" %d", &n);

    for(i=0; i<n; i++){
        printf("Data %d: ", i+1);
        scanf(" %d", &v);
        root = insert(root, v);
    }

    printf("\nInorder Traversal:\n");
    inorder(root);
    printf("\nPreorder Traversal:\n");
    preorder(root);
    printf("\nPostorder Traversal:\n");
    postorder(root);
    printf("\n");

    return 0;

}

struct node *insert(struct node *r, int data){

    if(r == NULL){
        r = (struct node*)malloc(sizeof(struct node));
        r->value = data;
        r->left = NULL;
        r->right = NULL;
    }else if(data < r->value){
        r->left = insert(r->left, data);
    }else{
        r->right = insert(r->right, data);
    }

    return r;

}

void inorder(struct node *r){

    if(r != NULL){
        inorder(r->left);
        printf("%d-> ", r->value);
        inorder(r->right);
    }

}

void preorder(struct node *r){

    if(r != NULL){
        printf("%d-> ", r->value);
        preorder(r->left);
        preorder(r->right);
    }

}

void postorder(struct node *r){

    if(r != NULL){
        postorder(r->left);
        postorder(r->right);
        printf("%d-> ", r->value);
    }

}

/*

// Tree traversal in C

#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};
// Inorder traversal
void inorder(struct node* root) {
  if (root == NULL) return;
  inorder(root->left);
  printf("%d ->", root->item);
  inorder(root->right);
}
// preorder Traversal
void preorder(struct node* root) {
  if (root == NULL) return;
  printf("%d ->", root->item);
  preorder(root->left);
  preorder(root->right);
}
// postorder Traversal
void postorder(struct node* root) {
  if (root == NULL) return;
  postorder(root->left);
  postorder(root->right);
  printf("%d ->", root->item);
}
// Create a new Node
struct node* createNode(value) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->item = value;
  newNode->left = NULL;
  newNode->right = NULL;

  return newNode;
}
// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = createNode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = createNode(value);
  return root->right;
}

int main() {
  struct node* root = createNode(1);
  insertLeft(root, 12);
  insertRight(root, 9);

  insertLeft(root->left, 5);
  insertRight(root->left, 6);

  printf("Inorder traversal \n");
  inorder(root);

  printf("\nPreorder traversal \n");
  preorder(root);

  printf("\nPostorder traversal \n");
  postorder(root);
}

*/
