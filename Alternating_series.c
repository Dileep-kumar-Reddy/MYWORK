/*Write a program in C to find the sum of the series [x - x^3 + x^5 + ......]. Go to the editor
Test Data :
Input the value of x :3
Input number of terms : 5*/
#include<stdio.h>
#include<math.h>
int main()
{
    int x,terms,sum=0;
    printf("Enter the value of X:");
    scanf("%d",&x);
    printf("Enter the number of terms:");
    scanf("%d",&terms);
    for(int i=0;i<terms;i++)
        sum=sum+pow(-1,i)*pow(x,2*i+1);
    printf("The sum of the series is %d\n",sum);    
}