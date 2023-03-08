/* Write a C program to get the indices of the two numbers of a given array of integers, such that the sum of the two numbers equal to a specific target. Go to the editor
Expected Output:

Original Array: 4  2  1  5  
Target Value: 7
Indices of the two numbers whose sum equal to target value: 7
2 4
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*ptr,target_value;
    printf("Enter array:");
    scanf("%d",&n);
    ptr=(int*)malloc(4*n);
    for(int i=0;i<n;i++)
    scanf("%d",ptr+i);
    printf("Enter target value");
    scanf("%d",&target_value);
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(*(ptr+i)+*(ptr+j)==target_value)
            printf("%2d%2d",i+1,j+1);
        }
    }
    
}