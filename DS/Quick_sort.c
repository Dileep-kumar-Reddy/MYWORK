#include<stdio.h>
int quicksort(int [],int);
int swap(int [],int,int);
int main()
{
    int i,size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter %d elements in array:\n");
    for(i=0;i<size;i++)
    scanf("%d",&a[i]);
    quicksort(a,size);
    printf("Quick sorted array is:\n");
    for(i=0;i<size;i++)
    printf("%3d",a[i]);
}
int quicksort(int a[],int size)
{
    int left=0,right=size-1,loc=0;
    while(left!=right)

    {
        if(a[loc]<a[right])
        right--;
        else
        {
            swap(a,loc,right);
            loc=right;
            if(a[loc]>a[left])
            left++;
            else
            {
                swap(a,loc,left);
                loc=left;
            }
        }
    }
}
int swap(int a[],int loc,int right)
{
    int swap;
    swap=a[right];
    a[right]=a[loc];
    a[loc]=swap;
    return;
}