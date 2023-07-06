#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL, *ptr = NULL, *temp = NULL;
typedef struct node NODE;
NODE *allocate()
{
    NODE *dummy;
    dummy = (NODE *)malloc(sizeof(NODE));
    dummy->next = NULL;
    return dummy;
}
int bubble_sort()
{
    int data;
    ptr = head;
    temp = ptr->next;
    while (ptr != NULL)
    {
        if (ptr->data > temp->data)
        {
            data = ptr->data;
            ptr->data = temp->data;
            temp->data = data;
        }
        ptr = temp;
        temp = temp->next;
    }
    return 0;
}
int display()
{
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d->", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int main()
{
    int nodes_count, data;
    printf("Enter no.of nodes:");
    scanf("%d", &nodes_count);
    head = allocate();
    printf("Enter data:");
    scanf("%d", &data);
    ptr = head;
    ptr->data = data;
    for (int i = 0; i < nodes_count - 1; i++)
    {
        printf("Enter data:");
        scanf("%d", &data);
        temp = allocate();
        temp->data = data;
        ptr->next = temp;
        ptr = ptr->next;
    }
    display();
    bubble_sort();
    display();
}
