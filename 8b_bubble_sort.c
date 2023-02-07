#include <stdio.h>
int main()
{
    int arr[20], i, j, n, temp;
    printf("Enter the number of elements in the array (1 - 20): ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter element%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}