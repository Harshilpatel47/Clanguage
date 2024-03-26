// Write a Program to print the factorial of number N using for loop.
#include <stdio.h>

int main()
{
    int n, i, f;
    f = i = 1;
    printf("Enter any Number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        f *= i;
    }
    printf("The Factorial is :%d", f);
}
