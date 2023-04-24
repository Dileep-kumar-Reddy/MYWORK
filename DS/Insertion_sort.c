#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter no.of elements in array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements in array:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int j=i;
        while(j>0&&a[j]<a[j-1])
        {
            int temp=a[j];
            a[j]=a[j-1];
            a[j-1]=temp;
            j--;
        }
    }
    printf("Insertion sorted array:");
    for(i=0;i<n;i++)
    printf("%3d",a[i]);

}