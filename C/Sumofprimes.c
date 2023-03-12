/*Write a program in C to Check Whether a Number can be Express as Sum of Two Prime Numbers. Go to the editor
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11*/
#include<stdio.h>
int check(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++)
    {
        int x=check(i);
        int y=check(n-i);
        if(x==1&y==1)
        printf("%d=%d+%d\n",n,i,n-i);
    }
}
int check(int i)
{
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
        return 0;
    }
    return 1;
}
