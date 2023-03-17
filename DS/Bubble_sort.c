#include<stdio.h>
int swap(int *,int *);
int main()
{
    int i,size;
    printf("Enter size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter elements in array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    for(i=0;i<size;i++)
    {
        for(int j=0;j<size-1;j++)
        {
            swap(&a[j],&a[j+1]);
        }
    }
    for(i=0;i<size;i++)
    printf("%3d",a[i]);
}
int swap(int *a,int *b)
{
    if(*a>*b)
    {
        int temp=*b;
        *b=*a;
        *a=temp;
    }
}