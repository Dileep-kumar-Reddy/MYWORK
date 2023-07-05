/*Write a C program to create a new array from a given array of integers shifting all zeros to left direction. Go to the editor
Expected Output:

Elements in original array are: 1, 2, 0, 3, 5, 7, 0, 9, 11
Elements in new array are: 0, 0, 1, 3, 5, 7, 2, 9, 11*/
#include <stdio.h>
int main()
{
    int n, i, zero_count = 0;
    ;
    printf("Enter the count of number of elements:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            int temp;
            temp = a[zero_count];
            a[zero_count] = a[i];
            a[i] = temp;
            zero_count++;
        }
    }
    for (i = 0; i < n; i++)
        printf("%4d", a[i]);
}