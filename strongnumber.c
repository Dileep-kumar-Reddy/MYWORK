#include<stdio.h>
int fact(int*);
int main()
{
    int x,temp,sum=0;
    printf("Enter a number:");
    scanf("%d",&x);//user input stored here
    temp=x;//input is copied to temp
    while(x!=0)
    {
        int r;
        r=x%10;
        sum=sum+fact(&r);
        x=x/10;
    }
    temp==sum?printf("Strong number"):printf("Not a strong number");
}
int fact(int *r)
{
    int fact=1;
    for(int i=1;i<=*r;i++)
    fact*=i;
    return fact;
}