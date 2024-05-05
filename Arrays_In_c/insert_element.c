#include <stdio.h>
void PrintArr(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
}
int main() {
    int val, idx;
    int arr[6] = {1, 2, 3, 7, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Enter value and index respectively\n");
    scanf("%d%d", &val, &idx);
    for (int i = n - 1; i > idx; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[idx] = val;
    PrintArr(arr, n);
    return 0;
}