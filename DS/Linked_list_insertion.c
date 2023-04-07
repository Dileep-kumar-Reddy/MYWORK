#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head, *start, *newnode;
typedef struct node NODE;
int data;
int display()
{
    NODE *ptr;
    ptr = start;
    if (ptr == NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int at_pos()
{
    int pos;
    printf("Enter position:");
    scanf("%d", &pos);
    printf("Enter data:");
    scanf("%d", &data);
    newnode = (NODE *)malloc(sizeof(NODE));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    else
    {
        NODE *ptr;
        ptr = start;
        int i = 1;
        while (i < pos)
        {
            ptr = ptr->next;
            i++;
        }
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = ptr->next;
        ptr->next = newnode;
    }
}
int at_end()
{
    int i=1;
    NODE *ptr;
    ptr=start;
    newnode=(NODE*)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    else
    {
        while(ptr!=NULL)
        {
            ptr=ptr->next;
        }
        ptr->next=newnode;
        newnode->next=NULL;
        printf("Enter data:");
        scanf("%d",&data);
        newnode->data=data;
    }
}
int at_beg()
{
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("Enter data:");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = start;
    start = newnode;
    return 0;
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n1.At front\n2.At End\n3.At position\n4.Display\n5.Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            at_beg();
            break;
        case 2:
            at_end();
            break;
        case 3:
            at_pos();
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            break;
        }
    }
}