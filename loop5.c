// Write a Program to print leap years between two given numbers using a while loop.
#include <stdio.h>

int main()
{
    int i, n;
    printf("enter two vlaues:");
    scanf("%d %d", &i, &n);
    while (i <= n)
    {
        if (i % 4 == 0)
        {
            printf("%d is a leap year \n", i);
        }
        i++;
    }
}
