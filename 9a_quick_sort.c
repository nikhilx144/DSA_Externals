#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", array[i]);
  }
  printf("\n");
}

int partition(int l, int h, int array[]) {
  l = 0;
  h = sizeof(array) / sizeof(array[0]) - 1;
  int pivot = array[l];
  int i = l;
  int j = h;
  while (i < j) {
    do {
      i++;
    } while (array[i] <= pivot);
    do {
      j--;
    } while (array[j] > pivot);
    if (i < j) {
      int t = array[i];
      array[i] = array[j];
      array[j] = t;
    }
  }
  return j;
}

int quicksort(int low, int high, int array[]) {
  if (low < high) {
    int j = partition(low, high, array[]);
    quicksort(low, j, array[]);
    quicksort(j + 1, high, array[]);
  }
}

int main() {
  int data[] = {8, 7, 2, 1, 0, 9, 6};
  
  int n = sizeof(data) / sizeof(data[0]);
  
  printf("Unsorted Array\n");
  printArray(data, n);
  
  // perform quicksort on data
  quickSort(0, n - 1, data);
  
  printf("Sorted array in ascending order: \n");
  printArray(data, n);
}