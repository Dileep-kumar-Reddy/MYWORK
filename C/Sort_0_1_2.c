#include<stdio.h>
int main()
{
    int size,i,temp,count=0;;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements(0,1,2):");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    //arranging zeros
    for(i=0;i<size;i++)
    {
        if(a[i]==0)
        {
            temp=a[count];
            a[count]=a[i];
            a[i]=temp;
            count++;
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==1)
        {
            temp=a[count];
            a[count]=a[i];
            a[i]=temp;
            count++;
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]==2)
        {
            temp=a[count];
            a[count]=a[i];
            a[i]=temp;
            count++;
        }
    }
    for(i=0;i<size;i++)
        printf("%3d",a[i]);

}