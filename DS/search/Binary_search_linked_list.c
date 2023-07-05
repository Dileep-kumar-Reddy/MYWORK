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
NODE *shift(int pos)
{
    int i = 1;
    ptr = head;
    while (i <= pos)
    {
        ptr = ptr->next;
        i++;
    }
    return ptr;
}
int binary_search(int k, int n)
{
    int l_boun = 0, r_boun = n, mid;
    NODE *flag;
    while (l_boun <= r_boun)
    {
        mid = (l_boun + r_boun) / 2;
        flag = shift(mid);
        if (flag->data == k)
        {
            printf("%d is found at %d node %p", k, mid, flag);
            return 0;
        }
        else
        {
            if (k < flag->data)
            {
                l_boun = 0;
                r_boun = mid - 1;
            }
            else
            {
                l_boun = mid + 1;
                r_boun = n;
            }
        }
    }
}
int main()
{
    int data, no_of_nodes, i, key;
    printf("Enter no.of Nodes:");
    scanf("%d", &no_of_nodes);
    printf("Enter data:");
    scanf("%d", &data);
    head = allocate();
    head->data = data;
    ptr = head;
    for (i = 1; i < no_of_nodes; i++)
    {
        temp = allocate();
        printf("Enter data:");
        scanf("%d", &data);
        temp->data = data;
        ptr->next = temp;
        ptr = ptr->next;
    }
    printf("Enter key to search:");
    scanf("%d", &key);
    binary_search(key, no_of_nodes);
}