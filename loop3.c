// Write a Program to print 1 to N using a while loop.
#include <stdio.h>

int main()
{
    int i = 1, n;
    printf("Enter The n:");
    scanf("%d", &n);
    while (i <= n)
    {
        printf("%d \n", i);
        i++;
    }
}
