#include <stdio.h>
#include <stdlib.h>
int data;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *start, *newnode, *ptr;
int disp()
{
    struct node *ptr;
    ptr = start;
    printf("NULL=>");
    while (ptr != NULL)
    {
        printf("%d<=>", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int at_beg()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->prev=NULL;
    printf("Enter data:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=start;
    start=newnode;
}
int at_pos()
{
    ptr=start;
    int i=1,pos;
    printf("Enter position to enter data:");
    scanf("%d",&pos);
    while(i<pos-1)
    {
        ptr=ptr->next;
        i++;
    }
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d",&data);
    newnode->data=data;
    newnode->prev=ptr;
    newnode->next=ptr->next;
    ptr->next->prev=newnode;
    ptr->next=newnode;
}
int at_end()
{
    printf("Enter data:");
    scanf("%d",&data);
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    ptr=start;
    while(ptr!=NULL)
    {
        ptr=ptr->next;
    }
    newnode->prev=ptr->next;
    newnode->data=data;
    newnode->next=NULL;
    return 0;
}
int main()
{
    int i, n, choice;
    printf("Enter no.of nodes:");
    scanf("%d", &n);
    newnode = (struct node *)malloc(sizeof(struct node));
    start = newnode;
    ptr = newnode;
    if (start == NULL)
    {
        printf("Unable to allocate memory");
        return 0;
    }
    else
    {
        printf("Enter data:");
        scanf("%d", &data);
        newnode->prev = NULL;
        newnode->data = data;
        for (i = 1; i < n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            ptr->next = newnode;
            printf("Enter data:");
            scanf("%d", &data);
            newnode->data = data;
            newnode->prev = ptr;
            ptr = ptr->next;
        }
        ptr->next = NULL;
    }
    printf("1.insertion at front\n2.Insertion at Position\n3.Insertion at ending\n4.Display\n5.Exit\n");
    while (1)
    {
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            at_beg();
            break;
        case 2:
            at_pos();
            break;
        case 3:
            at_end();
            break;
        case 4:
            disp();
            break;
        case 5:
            exit(0);
        }
    }
}
