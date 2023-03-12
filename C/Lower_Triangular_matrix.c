#include<stdio.h>
int main()
{
    int r,c,i,j;
    printf("Enter rows and columns:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    printf("\nLower triangular matrix is:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
}