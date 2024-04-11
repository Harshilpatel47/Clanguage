#include <stdio.h>

int main()
{
    int i,j,n;

    for (i=0;i<6;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("  ");
        }
        for (n=10-i;n>=6;n--)
        {
            printf("%d ", n);
        }

        printf("\n");
    }
}

