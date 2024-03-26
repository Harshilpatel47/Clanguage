// Write a Program to print the multiplication table of the number N using any type of loop.
#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter any Number:");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d \n", n, i, n * i);
    }
}
