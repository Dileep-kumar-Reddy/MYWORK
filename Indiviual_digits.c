#include<stdio.h>
#include<math.h>
int main()
{
    int x,copy,i=0;
    printf("Enter a number:");
    scanf("%d",&x);
    copy=x;
    while(copy!=0)
    {
        copy=copy/10;
        i++;
    }
    while(x!=0)
    {
        int y=pow(10,i);
        printf("%d\n",y);
        printf("%2d",x/y);
        i--;
        x=x/10;
    }
}