#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head = NULL, *ptr;
typedef struct node NODE;
NODE *allocate()
{
    NODE *dummy;
    dummy = (NODE *)malloc(sizeof(NODE));
    dummy->next = NULL;
    return dummy;
}
int linear_search(int key)
{
    ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == key)
        {
            printf("%u", ptr);
            return 0;
        }
        ptr = ptr->next;
    }
    printf("%d is found in the list", key);
    return 0;
}
int main()
{
    int no_of_nodes, data, key;
    printf("Enter no.of nodes:");
    scanf("%d", &no_of_nodes);
    head = allocate();
    ptr = head;
    for (int i = 1; i < no_of_nodes; i++)
    {
        printf("Enter data:");
        scanf("%d", &data);
        ptr->data = data;
        ptr->next = allocate();
        ptr = ptr->next;
    }
    printf("Enter key to search:");
    scanf("%d", &key);
    linear_search(key);
}
