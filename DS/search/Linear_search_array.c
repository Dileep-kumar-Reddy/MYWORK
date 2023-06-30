/* Linear search
Linear search is also known as sequential search
Linear search is used to search an element from the unsorted data
In linear search we search an element by comparing each element the array with key
Key is a variable which store the to be searched
Algorithm:
Step_1: Start
Step_2: linear_search(a[],n,key)
step_3: set i=0,pos=-1
Step_4: while(i<n) repeat step 5
step_5: if(a[i]==key)
        set pos=i+1
        print pos
        goto step 7
step_6: if pos==-1
        print(element not found)
step_7: STOP
 */
#include <stdio.h>
#include <stdlib.h>
int linear_search(int a[], int n, int k)
{
    int i = 0, pos = -1;
    while (i < n)
    {
        if (a[i] == k)
        {
            pos = i + 1;
            printf("%d is found at %d location", k, pos);
            return 0;
        }
        i++;
    }
    if (pos == -1)
    {
        printf("%d is not found", k);
    }
    return 0;
}
int main()
{
    int i, no_of_elements, key;
    printf("Enter no.of elements in the array:");
    scanf("%d", &no_of_elements);
    int array[no_of_elements];
    printf("Enter elements in the array:");
    for (i = 0; i < no_of_elements; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Enter the key to search:");
    scanf("%d", &key);
    linear_search(array, no_of_elements, key);
}
