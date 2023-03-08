/* Write a C program to find the median of the two given sorted arrays which are not empty. Go to the editor*/
#include<stdio.h>
#include<malloc.h>
int n;
int ascending(int*);
int median(int*);
int main()
{
    int *ptr;
    printf("Enter the number of array");
    scanf("%d",&n);
    ptr=(int*)malloc(4*n);
    for(int i=0;i<n;i++)
    scanf("%d",ptr+i);
    ascending(ptr);
    median(ptr);
}
int ascending(int *p)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int temp;
            if(*(p+i)>*(p+j))
            {
                temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    return 0;
}
int median(int *p)
{
    if(n%2!=0)
    printf("The medain is %.2f\n",*(p+((n+1)/2)));
    else
    printf("The median is %.2f\n",(*(p+n/2)+*(p+n/2+1))/2);
}