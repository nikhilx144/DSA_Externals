#include<stdio.h>
int linear_search(int arr[], int n, int key) {
    for(int i = 0; i < n; i++)
        if(arr[i] == key)
            return i;
    return 0;
}
int main() {
    int key, a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(a)/sizeof(a[0]);
    printf("Enter the key value: ");
    scanf("%d", &key);
    int result = linear_search(a, n, key);
    if(result == 0)
        printf("Key is not found");
    else
        printf("Key is found");
}