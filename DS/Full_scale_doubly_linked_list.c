#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
} *start, *newnode, *ptr;
typedef struct node NODE;
int nodes_count, data;
int display()
{
    ptr = start;
    printf("NULL=>");
    while (ptr != NULL)
    {
        printf("%d<=>", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}
int create_list()
{
    printf("Enter no.of nodes:");
    scanf("%d", &nodes_count);
    newnode = (NODE *)malloc(sizeof(NODE));
    start = ptr = newnode;
    if (start == NULL)
    {
        printf("Unable to allocate memory");
        exit(0);
    }
    else
    {
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        newnode->prev = NULL;
        newnode->next = NULL;
        for (int i = 1; i < nodes_count; i++)
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
    display();
    return 0;
}
int ins_at_beg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->prev = NULL;
    printf("Enter data:");
    scanf("%d", &data);
    newnode->data = data;
    newnode->next = start;
    start = newnode;
    nodes_count++;
    display();
    return 0;
}
int ins_at_end()
{
    ptr = start;
    if (start == NULL)
    {
        printf("List is empty");
        return 0;
    }
    else
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Unable to allocate memory");
            return 0;
        }
        else
        {
            printf("Enter data:");
            scanf("%d", &data);
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
            newnode->prev = ptr;
            newnode->data = data;
            newnode->next = NULL;
            nodes_count++;
            display();
            return 0;
        }
    }
}
int ins_at_pos()
{
    struct node *ptr;
    ptr = start;
    int i = 1, pos;
vk:
    printf("Enter position to enter data:");
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
        while (i < pos - 1)
        {
            ptr = ptr->next;
            i++;
        }
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d", &data);
        newnode->data = data;
        newnode->prev = ptr;
        newnode->next = ptr->next;
        ptr->next->prev = newnode;
        ptr->next = newnode;
        nodes_count++;
        display();
        return 0;
    }
    else
    {
        printf("Enter correct choice:");
        goto vk;
    }
}
int del_at_beg()
{
    if (start == NULL)
    {
        printf("List is empty");
        return 0;
    }
    else
    {
        ptr = start;
        start = start->next;
        free(ptr);
        start->prev = NULL;
    }
    nodes_count--;
    display();
    return 0;
}
int del_at_end()
{
    struct node *preptr;
    if (start == NULL)
    {
        printf("List is empty");
        return 0;
    }
    else
    {
        ptr = start;
        while (ptr->next != NULL)
        {
            preptr = ptr;
            ptr = ptr->next;
        }
        free(ptr);
        preptr->next = NULL;
    }
    nodes_count--;
    display();
    return 0;
}
int del_at_pos()
{
    struct node *preptr;
    int pos;
vk:
    printf("Enter position to delete:");
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
        int i = 1;
        ptr = start;
        if (start == NULL)
        {
            printf("List is empty");
            return 0;
        }
        else
        {
            while (i < pos)
            {
                ptr = ptr->next;
                i++;
            }
            ptr->next->prev= ptr->prev;
            ptr->prev->next=ptr->next;
            free(ptr);
            nodes_count--;
            display();
            return 0;
        }
    }
    else
    {
        printf("Enter correct choice");
        goto vk;
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
    return 0;
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
    return 0;
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
            create_list();
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
        }
    }
}