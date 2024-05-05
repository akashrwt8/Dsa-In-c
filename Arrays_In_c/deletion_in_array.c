#include <stdio.h>
/* Deletion operation in array*/
void PrintArr(int arr[], int **n)
{
    for (int i = 0; i < (**n); i++)
    {
        printf("%d ", arr[i]);
    }
}
void Deletion(int arr[], int *n)
{
    int idx;
    int **p1;
    p1 = &n;
    printf("Enter index to delete\n");
    scanf("%d", &idx);
    if (0 > idx || idx > *n)
    {
        printf("Index out of bound.\n");
    }
    else
    {
        for (int i = idx; i < (*n) - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        (*n)--;
        printf("Array after deletion\n");
        PrintArr(arr, p1);
    }
}
int main()
{
    int n, *p;
    int arr[] = {1, 2, 3, 4, 6, 5};
    n = sizeof(arr) / sizeof(arr[0]);
    p = &n;
    Deletion(arr, p);
    return 0;
}