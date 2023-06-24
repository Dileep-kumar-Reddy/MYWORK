#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL, *ptr;
typedef struct node NODE;
int bubble_sort()
{
    ptr = start;
    while (ptr != NULL)
    {
        if (ptr->data > ptr->next->data)
        {
            int data = ptr->data;
            ptr->data = ptr->next->data;
            ptr->next->data = data;
        }
    }
    return 0;
}
NODE *allocate(int data)
{
    NODE *dummy;
    dummy = (NODE *)malloc(sizeof(NODE));
    dummy->data = data;
    dummy->next = NULL;
    return dummy;
}
NODE *display()
{
    if (start == NULL)
        return NULL;
    else
    {
        ptr = start;
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
    }
    return NULL;
}
int main()
{
    int nodes_count, data;
    NODE *add = NULL;
    printf("Enter no.of nodes:");
    scanf("%d", &nodes_count);
    for (int i = 0; i < nodes_count; i++)
    {
    vk:
        printf("Enter data:");
        scanf("%d", &data);
        add = allocate(data);
        if (start == NULL)
        {
            start = add;
            ptr = add;
            i++;
            goto vk;
        }
        ptr->next = add;
        ptr = ptr->next;
    }
    bubble_sort();
    display();
}