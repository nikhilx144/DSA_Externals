#include <stdio.h>
#include <stdlib.h>
#define MAX 50
int queue_array[MAX], rear = -1, front = -1;

void enqueue()
{
  int item;
  if (rear == MAX - 1)
  {
    printf("Overflow");
    exit(1);
  }
  else
  {
    if (front == -1 && rear == -1)
      front += 1;
      scanf("%d", &item);
      rear += 1;
      queue_array[rear] = item;
  }
}

void dequeue()
{
  if (front == -1 && rear == -1)
  {
    printf("Underflow");
    exit(1);
  }
  else
    front ++;
}

void display()
{
  if (front == -1 && rear == -1)
    printf("Queue is empty");
  else
  {
    for (int i = front; i <= rear; i++)
    {
      printf("%d ", queue_array[i]);
    }
  }
}

void main()
{
  int choice;
  while (1)
  {
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      enqueue();
      break;
    
    case 2:
      dequeue();
      break;

    case 3:
      display();
      exit(0);
      break;

    default:
      printf("Invalid Choice");
      break;
    }
  }
}