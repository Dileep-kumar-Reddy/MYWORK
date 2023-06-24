#include <stdio.h>
int swap(int[], int, int);
int main()
{
    int i, size, j;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("Enter %d elements in tha array:\n", size);
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a, j, j + 1);
            }
        }
    }
    printf("Bubble sorted array is:\n");
    for (i = 0; i < size; i++)
        printf("%3d", a[i]);
}
int swap(int a[], int i, int j)
{
    int swap;
    swap = a[j];
    a[j] = a[i];
    a[i] = swap;
}