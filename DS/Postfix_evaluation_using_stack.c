// Need to check
#include <stdio.h>
#include <ctype.h>
int stack[20];
int stack_top = 0;
int push(int num)
{
    stack[++stack_top] = num;
}
int pop()
{
    return stack[stack_top--];
}
int main()
{
    char exp[20];
    int i = 0, opr_1, opr_2;
    printf("Enter a postfix expression:");
    gets(exp);
    while (exp[i] != '\0')
    {
        exp[i] = exp[i] - 48;
        if (isdigit(exp[i]))
        {
            push(exp[i]);
        }
        else
        {
            opr_1 = pop();
            opr_2 = pop();
            switch (exp[i])
            {
            case '+':
                push(opr_1 + opr_2);
            case '-':
                push(opr_1 - opr_2);
            case '*':
                push(opr_1 * opr_2);
            case '/':
                push(opr_1 / opr_2);
            }
        }
    }
    i++;
    printf("%d", pop());
}