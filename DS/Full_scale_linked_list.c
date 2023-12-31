#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *start, *newnode, *ptr;
typedef struct node NODE;
int data, nodes_count;
int display()
{
    ptr = start;
    if (start == NULL)
    {
        printf("List is empty");
        exit(0);
    }
    else
    {
        while (ptr)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n\n");
    }
    return 0;
}
int Create_list()
{
    int i;
    printf("Enter no.of nodes");
    scanf("%d", &nodes_count);
    newnode = (NODE *)malloc(sizeof(NODE));
    if (newnode == NULL)
    {
        printf("Unable to allocate memory");
        exit(-1);
    }
    else
    {
        start = newnode;
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = NULL;
        ptr = newnode;
        for (i = 1; i < nodes_count; i++)
        {
            newnode = (NODE *)malloc(sizeof(NODE));
            ptr->next = newnode;
            printf("Enter data:");
            scanf("%d", &data);
            newnode->data = data;
            newnode->next = NULL;
            ptr = ptr->next;
        }
    }
    printf("Created Linked list Successfully\n");
    display();
    return 0;
}
int del_at_beg()
{
    if (start == NULL)
    {
        printf("List is empty");
        exit(0);
    }
    else
    {
        ptr = start;
        start = start->next;
        free(ptr);
    }
    nodes_count--;
    display();
    return 0;
}
int del_at_end()
{
    struct node *preptr;
    ptr = start;
    while (ptr->next != NULL)
    {
        preptr = ptr;
        ptr = ptr->next;
    }
    preptr->next = NULL;
    free(ptr);
    nodes_count--;
    display();
    return 0;
}
int del_at_pos()
{
    ptr = start;
    struct node *preptr;
    int i = 1, pos;
vk:
    printf("Enter position:");
    scanf("%d", &pos);
    if (pos == 1)
    {
        del_at_beg();
        return 0;
    }
    else if (pos == nodes_count)
    {
        del_at_end();
        return 0;
    }
    else if (pos > 1 && pos < nodes_count)
    {
        while (i <= pos - 1)
        {
            preptr = ptr;
            ptr = ptr->next;
            i++;
        }
        preptr->next = ptr->next;
        free(ptr);
        nodes_count--;
        display();
        return 0;
    }
    else
    {
        printf("Enter correct position\n");
        goto vk;
    }
}
int ins_at_end()
{
    if (start == NULL)
    {
        printf("Linked list is empty");
        exit(0);
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        ptr->next = newnode;
        newnode->next = NULL;
    }
    nodes_count++;
    display();
    return 0;
}
int ins_at_beg()
{
    if (start == NULL)
    {
        printf("List is empty");
        exit(0);
    }
    else
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        newnode->next = start;
        start = newnode;
    }
    nodes_count++;
    display();
    return 0;
}
int ins_at_pos()
{
    if (start == NULL)
    {
        printf("List is empty\n");
        exit(0);
    }
    else
    {
        int i = 1, pos;
    vk:
        printf("Enter position to enter data");
        scanf("%d", &pos);
        if (pos == 1)
        {
            ins_at_beg();
            return 0;
        }
        else if (pos == nodes_count)
        {
            ins_at_end();
            return 0;
        }
        else if (pos > 1 && pos < nodes_count)
        {
            printf("Enter data:");
            scanf("%d", &data);
            ptr = start;
            while (i < pos)
            {
                ptr = ptr->next;
                i++;
            }
            newnode = (NODE *)malloc(sizeof(NODE));
            newnode->data = data;
            newnode->next = ptr->next;
            ptr->next = newnode;
            nodes_count++;
            display();
            return 0;
        }
        else
        {
            printf("Enter correct choice\n");
            goto vk;
        }
    }
}
int insertion()
{
    int choice;
    while (7)
    {
        printf("1.Insertion at beggining\n2.insertion at postion\n3.Insertion at end\n4.Return to mainmenu\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            ins_at_beg();
            break;
        case 2:
            ins_at_pos();
            break;
        case 3:
            ins_at_end();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Select correct choice");
        }
    }
}
int deletion()
{
    int choice;
    while (7)
    {
        printf("1.Deletion at Start\n2.Deletion at position\n3.Deleltion at End\n4.Return to mainmenu\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            del_at_beg();
            break;
        case 2:
            del_at_pos();
            break;
        case 3:
            del_at_end();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("Enter proper choice");
        }
    }
}
int main()
{
    int choice;
    while (7)
    {
        printf("1.Create list\n2.Insertion\n3.Deletion\n4.Display\n5.Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            Create_list();
            break;
        case 2:
            insertion();
            break;
        case 3:
            deletion();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Enter correct choice");
            break;
        }
    }
}