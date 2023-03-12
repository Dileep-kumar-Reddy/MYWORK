#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n,*ptr,i,position;
    printf("Enter the array size:");
    scanf("%d",&n);
    ptr=(int*)malloc(4*n);
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("Input the value of index to delete");
    scanf("%d",&position);
    for(i=position-1;i<n;i++)
        *(ptr+i)=*(ptr+i+1);
    *(ptr+n)=0;
    for(i=0;i<n-1;i++)
    printf("%3d",*(ptr+i));
    free(ptr);
}