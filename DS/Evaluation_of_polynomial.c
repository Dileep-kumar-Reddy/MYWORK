#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct node
{
    int coeff;
    int exp;
    struct node *next;
} *head = NULL, *ptr = NULL, *temp = NULL;
int x_value;
typedef struct node NODE;
NODE *allocate()
{
    NODE *dummy;
    dummy = (NODE *)malloc(sizeof(NODE));
    dummy->next = NULL;
    return dummy;
}
int display()
{
    ptr = head;
    while (ptr != NULL)
    {
        printf(" %dx^%d ", ptr->coeff, ptr->exp);
        ptr = ptr->next;
    }
    printf("\n");
}
NODE *eval()
{
    ptr = head;
    int res = 0;
    while (ptr != NULL)
    {
        res = res + (ptr->coeff * pow(x_value, ptr->exp));
        ptr = ptr->next;
    }
    printf("The result of the given polynomial is %d", res);
    return 0;
}
int main()
{
    int degree, coeff;
    printf("Enter the highest degree:");
    scanf("%d", &degree);
    head = allocate();
    ptr = head;
    printf("Enter the coefficient of ^%d term:", degree);
    scanf("%d", &coeff);
    ptr->coeff = coeff;
    ptr->exp = degree;
    for (int i = degree - 1; i >= 0; i--)
    {
        printf("Enter the coefficient of ^%d term:", i);
        scanf("%d", &coeff);
        temp = allocate();
        temp->coeff = coeff;
        temp->exp = i;
        ptr->next = temp;
        ptr = ptr->next;
    }
    display();
    printf("Enter the x value to evaluate:");
    scanf("%d", &x_value);
    eval();
}