/*Write a C program to print indiviual digits of a give number*/
/*Rounded numbers like 100,10000,1000000 won,t work*/
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
    printf("%d\n",i);
    while(x!=0)
    {
        int y=pow(10,i-1);
        if(i-1==0)
        printf("%2d",x);
        else
        {  
        printf("%2d",x/y);
        x=x-(x/y*y);
        }
        i--;
        
    }
}