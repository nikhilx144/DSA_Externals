#include <stdio.h>
int main()
{
    int arr[20],n , i, j, low, high, mid, key;
    printf("Enter the number of elements in the array (1 - 20): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter key value: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while (high >= low)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
            break;
        else if (arr[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }
    if (arr[mid] == key)
        printf("Key found at position %d", mid + 1);
    else
        printf("Key not found");
}