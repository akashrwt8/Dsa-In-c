#include <stdio.h>

void push(int *s, int m, int *top, int x){
    if((*top) == m - 1){
        printf("stack overflow.\n");
    }
    s[++(*top)] = x;
}

int pop(int *s, int *top){
    if ((*top) == -1)
    {
        printf("stack underflow.\n"); 
    }

    return s[(*top)--];
}

int isEmpty(int m, int top){
    return top == m - 1;
}

int isFull(int top){
    return top == -1;
}

int main(){
    int top = -1, m, stack[10];

    m = sizeof(stack)/sizeof(stack[0]);

    for (int  i = 7; i < 12; i++)
    {
        push(stack, m, &top, i);
    }
    
    int n = top;
    printf("stack is = ");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", stack[i]);
    }
    
    printf("\n");

    for (int i = 0; i < 2; i++)
    {
        printf("element %d poped %d\n", i + 1, pop(stack, &top));
    }
    
    printf("stack is full or not %d \n", isFull(top));
    printf("stack is empty or not %d \n", isEmpty(top, m));

    return 0;
}