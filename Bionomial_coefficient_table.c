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