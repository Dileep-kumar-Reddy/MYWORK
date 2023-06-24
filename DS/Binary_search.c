#include <stdio.h>
int main()
{
    int size, i, beg = 0, end = size - 1, key, pos = -1;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("Enter the elements in array(Ascending order):");
    for (i = 0; i < size; i++)
        scanf("%d", &a[i]);
    i = 1;
    printf("Enter an element to search:");
    scanf("%d", &key);
    while (end!=0||end!=size)
    {
        int mid = (beg + end) / 2;
        if (a[mid] == key)
        {
            pos = mid;
            printf("Element is found at %d\n", pos + 1);
            while (a[pos + i] == a[pos] || a[pos - i] == a[pos])
            {
                printf("Element is also found at %d", pos + i + 1);
                i++;
            }
            return 0;
        }
        else
        {
            if (key < a[mid])
            {
                beg = 0;
                end = mid - 1;
            }
            else
            {
                beg = mid + 1;
                end = size - 1;
            }
        }
    }
    if (pos == -1)
        printf("Element not found");
}