/*Write a program in C to insert New value in the array (sorted list ).. Go to the editor
Test Data :
Insert New value in the sorted array :
-----------------------------------------
Input the size of array : 5
Input 5 elements in the array :
element - 0 : 2
element - 1 : 10
element - 2 : 7
element - 3 : 9
element - 4 : 11
Input the value to be inserted : 8
The exist array list is :
2 10 7 9 11
After Insert the list is :
2 7 8 9 10 11*/
#include<stdlib.h>
#include<stdio.h>
int main()
{
    int i,n,*ptr,new,j;
    printf("Enter the array size:");
    scanf("%d",&n);
    ptr=(int*)malloc(4*n+1);
    for(i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("Enter the new value:");
    scanf("%d",ptr+n);
    for(i=0;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
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
    for(i=0;i<=n;i++)
    printf("%3d",*(ptr+i));
    free(ptr);
}