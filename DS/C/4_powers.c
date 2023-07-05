/*Write a C program that accepts a positive integer n less than 100 from the user. It prints out the sum of 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + • • • + m^4. In this case, m is less than or equal to n. Print an appropriate message. Go to the editor
 Input a positive number less than 100: 68
 Sum of the series is 37361622*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x, add = 0, p = 1, test = 0;
    printf("Input a positive number(<100):");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
        add = add + 1;
        test = test + 1;
        p = p + pow(test, 4);
    }
    printf("Sum of the series is %d\n", p);
}