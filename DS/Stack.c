#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct stack *next;
} *top = NULL;
typedef struct node NODE;
int nodes_count, data = 0, flag = 0;
int display()
{
    if (top == NULL)
    {
        printf("Stack is empty");
        return 0;
    }
    else
    {
        NODE *ptr = top;
        while (ptr != NULL)
        {
            printf("%d->", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int attach(data)
{
    NODE *temp;
    temp = (NODE *)malloc(sizeof(NODE));
    temp->data = data;
    temp->next = NULL;
    if (top == NULL)
    {
        top = temp;
    }
    else
    {
        temp->next = top;
        top = temp;
    }
}
int pop()
{
    if (top == NULL)
    {
        printf("Underflow occurs\n");
        return 0;
    }
    else
    {
        NODE *ptr = top;
        top = top->next;
        free(ptr);
    }
}
int create()
{
    int i;
    if (flag == 0)
    {
        printf("Enter no.of nodes:");
        scanf("%d", &nodes_count);
        printf("Enter data:\n");
        for (i = 0; i < nodes_count; i++)
        {
            scanf("%d", &data);
            attach(data);
        }
        flag++;
    }
    else
    {
        for (i = 0; i < nodes_count; i++)
        {
            pop();
        }
        flag = 0;
        create();
    }
}
int main()
{
    int choice;
    printf("Stack and its operations\n");
    while (1)
    {
        printf("1.Create\n2.Push\n3.pop\n4.Display\n5.Exit\n");
        printf("Enter choice:\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            printf("Enter data to be pushed:");
            scanf("%d", &data);
            attach(data);
            break;
        case 3:
            pop();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(-1);
        default:
            printf("Enter correct choice\n");
            break;
        }
    }
}