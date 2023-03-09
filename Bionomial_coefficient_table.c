/*Write a C program to print a binomial coefficient table. Go to the editor
Mx 0 1 2 3 4 5 6 7 8 9 10
----------------------------------------------------------
0 1
1 1 1
2 1 2 1
3 1 3 3 1
4 1 4 6 4 1
5 1 5 10 10 5 1
6 1 6 15 20 15 6 1
7 1 7 21 35 35 21 7 1
8 1 8 28 56 70 56 28 8 1
9 1 9 36 84 126 126 84 36 9 1
10 1 10 45 120 210 252 210 120 45 10 1
----------------------------------------------------------
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Bionomial coefficient table:\n");
    printf("Enter the size of table:");
    scanf("%d",&size);
    int table[size+1][size+2];
    table[1][1]=0;
    for(int i=1;i<=size+1;i++)
    {
        for(int j=1;j<=i+1;j++)
        {
            table[i][j]=table[i-1][j-1]+table[i-1][j];
            if(j==2||j==i+1)
            table[i][j]=1;
            if(j==1)
            table[i][j]=i-1;
            printf("%d   ",table[i][j]);
        }
        printf("\n");
    }
}