#include <stdio.h>

int main()
{
    int *q;
    int a[5];
    q = a;
    printf("Input Array.\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &q[i]);
    }
    printf("Output Array.\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", i[q]);
    }

    return 0;
}