#include <stdio.h>
#include <stdlib.h>

struct Node {
  int data;
  struct Node *next;
} *newNode, *temp, *front = NULL, *rear = NULL;

void insert(int val) {
  newNode = (struct Node*)malloc(sizeof(struct Node));
  newNode -> data = val;
  newNode -> next = NULL;
  if (front == NULL)
    front = rear = newNode;
  else {
    rear -> next = newNode;
    rear = newNode;
  }
}

void delete() {
  if (front == NULL)
    printf("Queue is empty\n");
  else {
    temp = front;
    front = front -> next;
    printf("Deleted element: %d", &temp -> data);
    free(temp);
  }
}

void display() {
  if (front == NULL)
    printf("Queue is empty\n");
  else {
    temp = front;
    while (temp -> next != NULL)
    {
      printf("%d --> ", temp -> data);
      temp = temp -> next;
    }
    printf("%d --> NULL\n", temp -> data);
  }
}

void main() {
  int choice, value;
  while (choice != 4) {  
    printf("1. Insert 2. Delete 3. Display 4. Exit\nEnter you choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be inserted: \n");
      scanf("%d", &value);
      insert(value);
      break;
    
    case 2:
      delete();
      break;

    case 3:
      display();
      break;
    
    case 4:
      exit(0);

    default:
      printf("Invalid Input\n");
    }
  }
}