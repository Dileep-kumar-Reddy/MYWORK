#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,i,j;
    printf("Enter the size of array:");
    scanf("%d",&n);
    ptr=(int*)malloc(4*n);
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            int temp;
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%3d",*(ptr+i));
    free(ptr);
}