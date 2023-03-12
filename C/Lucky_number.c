/*Problem
Chef calls a number lucky if it contains the digit 
7
7 at least once.

Given a number 
�
X, determine if it is a lucky number or not.*/
//Testcase passed
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        scanf("%d",&x);
        while(x!=0)
        {
            if(x%10==7)
            {
                printf("YES\n");
                break;
            }
            x=x/10;
            if(x==0)
            printf("NO\n");
        }
        
    }
}