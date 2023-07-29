#include <stdio.h>
int ternery_search(int l, int r, int key, int a[])
{
    int mid_1, mid_2;
    if (r != 0 && l != r)
    {
        mid_1 = l + (r - 1) / 3;
        mid_2 = r - (r - 1) / 3;
        if (a[mid_1] == key)
        {
            return mid_1;
        }
        else if (a[mid_2] == key)
        {
            return mid_2;
        }
        if (a[mid_1] > key)
        {
            return ternery_search(l, mid_1 - 1, key, a);
        }
        else if (a[mid_2] < key)
        {
            return ternery_search(mid_2 + 1, r, key, a);
        }
        else
        {
            return ternery_search(mid_1 + 1, mid_2 - 1, key, a);
        }
    }
    return 0;
}
int main()
{
    int n, l = 0, key;
    printf("Enter no.of elements in the array:");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter kay value to search:");
    scanf("%d", &key);
    int r = n - 1;
    printf("%d", ternery_search(l, r, key, a));
}