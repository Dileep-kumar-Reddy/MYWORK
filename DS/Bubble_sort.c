#include<stdio.h>
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
        for(int j=0;j<size;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    printf("%3d",a[i]);
}