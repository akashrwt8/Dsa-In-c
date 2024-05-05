#include <stdio.h>
void Input_2D_Array(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}
void Output_2D_Array(int arr[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int n = 3;
    int arr[n][n];
    printf("Input 2D array.\n");
    Input_2D_Array(arr);
    printf("Output of 2D array.\n");
    Output_2D_Array(arr);
}