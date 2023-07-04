#include <stdio.h>
#include <stdlib.h>
int poly_count, highest_degree = 0;
struct node
{
    int coeff;
    int exp;
    struct node *next;
} *ptr = NULL, *temp, *poly_heads[10];
typedef struct node NODE;
NODE *allocate()
{
    NODE *dummy;
    dummy = (NODE *)malloc(sizeof(NODE));
    dummy->next = NULL;
    return dummy;
}
int display(int index)
{
    ptr = poly_heads[index];
    while (ptr != NULL)
    {
        printf("(%dx^%d)+", ptr->coeff, ptr->exp);
        ptr = ptr->next;
    }
    printf("\n");
}
int coeff_find(int index)
{
    ptr = poly_heads[index];
    {
        while (ptr != NULL)
        {
            if (ptr->exp == highest_degree)
            {
                return ptr->coeff;
            }
            ptr = ptr->next;
        }
        return 0;
    }
}
NODE *add()
{
    int s = 0;
    while (highest_degree != -1)
    {
        for (int j = 0; j < poly_count; j++)
        {
            s = s + coeff_find(j);
        }
        printf("%dx^%d+ ", s, highest_degree);
        s = 0;
        highest_degree--;
    }
}
int main()
{
    int i, degree, coeff, j;
    printf("Enter no.of polynomials:");
    scanf("%d", &poly_count);
    if (poly_count <= 0)
    {
        printf("No.of polynomials must be zero\n");
        return 0;
    }
    for (j = 0; j < poly_count; j++)
    {
        printf("Enter the highest degree of the polynomial:");
        scanf("%d", &degree);
        if (degree > highest_degree)
        {
            highest_degree = degree;
        }
        printf("Enter coefficient of ^%d term:", degree);
        scanf("%d", &coeff);
        poly_heads[j] = allocate();
        poly_heads[j]->coeff = coeff;
        poly_heads[j]->exp = degree;
        ptr = poly_heads[j];
        for (i = degree - 1; i >= 0; i--)
        {
            printf("Enter coefficient of ^%d term:", i);
            scanf("%d", &coeff);
            temp = allocate();
            temp->exp = i;
            temp->coeff = coeff;
            ptr->next = temp;
            ptr = ptr->next;
        }
        display(j);
    }
    add();
}