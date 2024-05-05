#include <stdio.h>
#include <stdlib.h>
/* struct singly_ll
{
    int data;
    struct singly_ll * next;
};
struct singly_ll *head, *newnode, *temp;
int main() {
    int choice;
    head = 0;
    // ! malloc(sizeof(struct singly_ll))
    while(choice) {
    newnode = (struct singly_ll *) malloc(sizeof(struct singly_ll));
    printf("Enter data\n");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (head == 0)
    {
        head = temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    printf("Enter value of ch (for continue 1 and for exit 0)\n");
    scanf("%d", &choice);
}
    // ? traverse the linkled list ->
    temp = head;
    while (temp != 0)
    {
        printf("data ->> %d \n", temp->data);
        temp = temp->next;
    }
     return 0;
} */
struct singly_ll_two 
{
    int data;
    struct singly_ll_two * next;
};
struct singly_ll_two *head, *newnode, *temp;
int main() {
    int choice;
    // ! Linked List
    head = 0;
    while(choice) {
    newnode = (struct singly_ll_two *) malloc(sizeof(struct singly_ll_two));
    printf("Enter data ->> \n");
    scanf("%d", &newnode->data);
    // ? newnode->next = 0;
    if (head == 0)
    {
        head = temp = newnode;  
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
    printf("Do you want to continue or not (1 -> continue and 0 -> exit)\n");
    scanf("%d", &choice);
    }
    newnode->next = 0;
    // ? traverse Linked list ->>
    temp = head;
    while (temp != 0)
    {
        printf("data is ->> %d \n", temp->data);
        temp = temp->next;
    }
    return 0;
}