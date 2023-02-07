#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left, *right;
};

struct node *create() {
  struct node *temp;
  int data, choice;
  temp = (struct node *)malloc(sizeof(struct node));
  printf("\nPress 0 to exit");
  printf("\nPress 1 for new node");
  printf("\nEnter your choice : ");
  scanf("%d", &choice);
  if (choice == 0)
    return 0;
  else {
    printf("\nEnter the data:");
    scanf("%d", &data);
    temp->data = data;
    printf("\nEnter the left child of %d", data);
    temp->left = create();
    printf("\nEnter the right child of %d", data);
    temp->right = create();
    return temp;
  }
}

void inorder(struct node *p) {
  if (p != NULL) {
    inorder(p->left);
    printf("%d ", p->data);
    inorder(p->right);
  }
  else
    return;
}

void preorder(struct node *p) {
  if (p != NULL) {
    printf("%d ", p->data);
    preorder(p->left);
    preorder(p->right);
  }
  else
    return;
}

void postorder(struct node *p) {
  if (p != NULL) {
    postorder(p->left);
    postorder(p->right);
    printf("%d ", p->data);
  }
  else
    return;
}

void main() {
  struct node *root;
  root = create();
  printf("\ninorder: ");
  inorder(root);
  printf("\npreorder: ");
  preorder(root);
  printf("\npostorder: ");
  postorder(root);
}
