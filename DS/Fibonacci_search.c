#include<stdio.h>
int main()
{
    int size,a[size],fib[size],i,offest=-1;
    printf("Enter size of array:");
    scanf("%d",&size);
    fib[0]=0,fib[1]=1;
    for(i=2;i<size;i++)
    {
        a[i]=a[i-1]+a[i-2];
        if(a[i]>size)
        {
            int x=a[i]-size;
            int y=size-a[i-1],k;
            x>=y?k=x:k=y;
            if(k==0)
            printf("Element not found");            
        }
    }    
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    while(k!=0)
    {
        offset=
    }

}