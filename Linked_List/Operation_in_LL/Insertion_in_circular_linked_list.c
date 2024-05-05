#include <stdio.h>
#include <stdlib.h>
// todo /* implementation of circular linked list */
struct Circular_linked_list
{
    int data;
    struct Circular_linked_list *next;
};
struct Circular_linked_list *temp, *newnode, *head = 0;
void create_CLL()
{
    int x = 1;
    while (x)
    {
        newnode = (struct Circular_linked_list *)malloc(sizeof(struct Circular_linked_list));
        printf("Enter data for newnode.\n");
        scanf("%d", &newnode->data);
        if (head == 0)
        {
            temp = head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("Enter 1 for continue and 0 for exit.\n");
        scanf("%d", &x);
    }
    newnode->next = head;
}
void display_CLL()
{
    if (head == 0)
    {
        printf("List is empty.\n");
    }
    else
    {
        temp = head;
        do
        {
            printf("%d->", temp->data); 
            temp = temp->next;
        } while (temp->next != head);
        printf("%d", temp->data); 
    }
}
int main()
{
    create_CLL();
    display_CLL();
    return 0;
}