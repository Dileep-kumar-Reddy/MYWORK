#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL;
typedef struct node NODE;
int reverse()
{
    NODE *prev_node, *current_node, *next_node;
    prev_node = NULL;
    current_node = next_node = head;
    while (next_node != NULL)
    {
        next_node = next_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }
    head = prev_node;
    return 0;
}
int display()
{
    NODE *temp;
    temp = head;
    while (temp != NULL)
    {
        printf("%d->", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
    return 0;
}
int main()
{
    int nodes_count, data;
    NODE *temp, *add;
    printf("Create a linked list\n");
    printf("Enter no.of nodes:");
    scanf("%d", &nodes_count);
    printf("Enter data:");
    scanf("%d", &data);
    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = data;
    head = temp;
    for (int i = 1; i < nodes_count; i++)
    {
        add = (NODE *)malloc(sizeof(NODE));
        add->next = NULL;
        printf("Enter data:");
        scanf("%d", &data);
        add->data = data;
        temp->next = add;
        temp = temp->next;
    }
    display();
    reverse();
    display();
}
