/*Given an array arr[] of integers, segregate even and odd numbers in the array such that all the even numbers should be present first, and then the odd numbers.

Examples:

Input: arr[] = {7, 2, 9, 4, 6, 1, 3, 8, 5}
Output: 2 4 6 8 7 9 1 3 5

Input: arr[] = {1, 3, 2, 4, 7, 6, 9, 10}
Output:  2 4 6 10 7 1 9 3*/
#include <stdio.h>
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
    printf("Enter size of array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int pos = n - 1;
    for (i = 0; i < pos; i++)
    {
        if (a[i] % 2 != 0)
        {
            while (a[pos] % 2 != 0)
            {
                --pos;
            }
            swap(a, i, pos);
            pos--;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%3d", a[i]);
    }
}