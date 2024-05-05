#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p, sum = 0;
    p = (int *)calloc(4 , sizeof(int));
    printf("Enter values\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", p + i);
        sum += *(p + i);
    }
    printf("%d", sum);
    free(p);
    return 0;
}