#include<stdio.h>
int insertion(int [],int,int);
int main()
{
    int i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
        int j=i;
        while(j>0&&a[j-1]>a[j])
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
    }
    for(i=0;i<size;i++)
    printf("%d",a[i]);
    
}