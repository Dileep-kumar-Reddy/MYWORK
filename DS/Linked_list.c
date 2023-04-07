#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} *head, *start;
int createlist();
int display();
int main()
{
    int choice;
    while (7)
    {
        printf("1.Create list\n2.Display list\n3.Exit\n");
        printf("Enter choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            createlist();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(-1);
        default:
            printf("Enter Proper choice\n");
        }
    }
}
int createlist()
{
    int n, data;
    struct node *temp, *newnode;
    start = NULL;
    printf("Enter no.of nodes:");
    scanf("%d", &n);
    head = (struct node *)malloc(sizeof(struct node));
    start = head;
    if (head == NULL)
    {
        printf("Unable allocate to memory");
        exit(0);
    }
    else
    {
        printf("Enter data:");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (int i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode == NULL)
            {
                printf("Unable to allocate memory\n");
                exit(0);
            }
            else
            {
                printf("Enter data:");
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }
        }
    }
    printf("Created Succesfully\n");
    return 0;
}
int display()
{
    struct node *ptr = head;
    if (start = NULL)
    {
        printf("List is empty");
        return 0;
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL");
        printf("\n");
    }
}