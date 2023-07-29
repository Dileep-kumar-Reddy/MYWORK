#include <stdio.h>
#include <stdlib.h>
int swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
    return 0;
}
int main()
{
    int i, n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("No.of should be greater than zero");
        exit(-1);
    }
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos = n - 1;
    i = 0;
    while (i < pos)
    {
        if (a[i] == 0)
        {
            while(a[pos]==0)
            {
                pos--;
            }
            swap(a, i, pos);
            pos--;
        }
        i++;
    }
    for (i = 0; i < n; i++)
    {
        printf("%2d", a[i]);
    }
}