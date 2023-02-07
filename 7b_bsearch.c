#include<stdio.h>
int binary_search(int arr[], int key, int low, int high)
{
    if (high >= low){
        int mid = low + (high - low)/2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            return binary_search(arr, key, low, mid - 1);
        return binary_search(arr, key, mid+1, high);
    }
    return -1;
}
int main()
{
    int n, result, key_value, a[5] = {1, 5, 6, 11, 20};
    n = sizeof(a);
    printf("Enter key: ");
    scanf("%d", &key_value);
    result = binary_search(a, key_value, 0, n-1);
    if(result == -1)
        printf("Key not found");
    else
        printf("Key found at index %d", result);
}