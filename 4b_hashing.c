#include <stdio.h>
#include <stdlib.h>
# define size 7
int arr[size];

void init() {
  for (int i = 0; i < size; i++)
    arr[i] = -1;  
}

void insert(int value) {
  int key = value % size;
  if (arr[key] == -1) {
    arr[key] = value;
    printf("%d inserted at arr[%d]\n", value, key);
  }
  else {
    printf("Collision\narr[%d] has element %d\nUnable to insert", key, arr[key]);
  }
}

void delete(int value) {
  int key = value % size;
  if (arr[key] == -1)
    printf("No element present");
  else
    arr[key] = -1;
}

void search(int value) {
  int key = value % size;
  if (arr[key] == value)
    printf("Search Found\n");
  else
    printf("Search Not Found\n");
}

void print() {
  for (int i = 0; i < size; i++)
    printf("arr[%d] = %d\n", i, arr[i]);
}

void main() {
  int choice, data;
  init();
  while (choice != 5) {
    printf("1. Insert 2. Delete 3. Search 4. Display 5. Exit\nEnter you choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
      printf("Enter data to be inserted: ");
      scanf("%d", &data);
      insert(data);
      break;
    case 2:
      printf("Enter data to be deleted: ");
      scanf("%d", &data);
      delete(data);
      break;
    case 3:
      printf("Enter data to be searched: ");
      scanf("%d", &data);
      search(data);
      break;
    case 4:
      print();
      break;
    case 5:
      exit(0);
    default:
      printf("Invalid Input\nPlease try again\n");
    }
  }
}