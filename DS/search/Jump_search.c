#include <stdio.h>
#include <math.h>
int linear_search(int a[], int i, int j, int key)
{
    for (int x = i; x <= j; x++)
    {
        if (a[x] == key)
        {
            return x + 1;
        }
    }
    return 0;
}
int jump_search(int a[], int key, int n)
{
    int m = sqrt(n);
    for (int i = 0; i <= m; i++)
    {
        int outer_bond = (i + 1) * m;
        if (outer_bond > n)
        {
            outer_bond = n;
        }
        if (a[i * m] <= key && key <= a[outer_bond])
        {
            return linear_search(a, i * m, outer_bond, key);
        }
    }
}
int main()
{
    int n, key;
    printf("Enter no.of numbers:");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("No.of elements should be greater than zero");
        exit(-1);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter key:");
    scanf("%d", &key);
    int res = jump_search(a, key, n);
    if (res == 0)
    {
        printf("Element not found");
    }
    else
    {
        printf("%d", res);
    }
}