#include<stdio.h>
int main()
{
    int n,i,key,beg,end;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("Enter elements:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the key element to search:");
    scanf("%d",&key);
    int mid=(n-1)/2;
    if(a[mid]==key)
    printf("Key is found at %d\n",mid);

}