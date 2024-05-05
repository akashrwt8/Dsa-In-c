// #include <stdio.h>
// struct stack
// {
//     int data;
//     struct stack *next;
// };

// struct stack *push(struct stack *top, int x)
// {
//     struct stack *newnode;
//     newnode = (struct stack *)malloc(sizeof(struct stack));
//     newnode->data = x;
//     newnode->next = top;
//     top = newnode;

//     return top;
// }

// struct stack *pop(struct stack *top)
// {
//     struct stack *temp;
//     temp = top;
//     if (top == 0)
//     {
//         printf("stack is empty.\n");
//     }
//     else
//     {

//         printf("poped element is %d ", temp->data);
//         temp = temp->next;
//         free(temp);
//     }
// }

// int peek(struct stack *top){
//     if (top == 0)
//     {
//         printf("stack is empty.\n");
//         return -1;
//     }

//     return top->data;
// }

// void display(struct stack *top)
// {
//     struct stack *temp;
//     printf("stack is = ");
//     temp = top;
//     while (temp != 0)
//     {
//         printf("%d ",temp->data);
//         temp = temp->next;
//     }
//     printf("\n");
// }

// int main()
// {
//     struct stack *top = 0;
    
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};

struct stack *push(struct stack *top, int x)
{
    struct stack *newnode;
    newnode = (struct stack *)malloc(sizeof(struct stack));
    newnode->data = x;
    newnode->next = top;
    top = newnode;

    return top;
}

struct stack *pop(struct stack *top)
{
    struct stack *temp;
    temp = top;
    if (top == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Popped element is %d\n", temp->data);
        top = temp->next;
        free(temp);
    }

    return top;
}

int peek(struct stack *top)
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
        return -1;
    }

    return top->data;
}

void display(struct stack *top)
{
    struct stack *temp;
    printf("Stack: ");
    temp = top;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct stack *top = NULL;
    int choice, x;

    do
    {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter element to push: ");
            scanf("%d", &x);
            top = push(top, x);
            break;

        case 2:
            top = pop(top);
            break;

        case 3:
            x = peek(top);
            if (x != -1)
                printf("Top element is %d\n", x);
            break;

        case 4:
            display(top);
            break;

        case 5:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 5);

    return 0;
}
