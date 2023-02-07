#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next;
};
struct Node *front = NULL, *rear = NULL;

void insert(int x);
void delete();
void display();

void insert(int value)
{
  struct Node *newNode;
  newNode = (struct Node *)malloc(sizeof(struct Node));
  newNode->data = value;
  newNode->next = NULL;
  if (front == NULL)
    front = rear = newNode;
  else
  {
    rear->next = newNode;
    rear = newNode;
  }
  printf("\nInsertion is Success!!!");
}
void delete()
{
  if (front == NULL)
    printf("\nQueue is Empty!!!\n");
  else
  {
    struct Node *temp = front;
    front = front->next;
    printf("\nDeleted element: %d", temp->data);
    free(temp);
  }
}
void display()
{
  if (front == NULL)
    printf("\nQueue is Empty!!!");
  else
  {
    struct Node *temp = front;
    while (temp->next != NULL)
    {
      printf("%d--->", temp->data);
      temp = temp->next;
    }
    printf("%d--->NULL\n", temp->data);
  }
}

void main()
{
  int choice, value;

  printf("\n:: Queue Implementation using Linked List ::");
  while (1)
  {
    printf("\n****** MENU ******\n");
    printf("1. Insert  2. Delete  3. Display  4. Exit   Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter the value to be insert: ");
      scanf("%d", &value);
      insert(value);
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
    default:
      printf("\nWrong selection!!! Please try again!!!");
    }
  }
}
