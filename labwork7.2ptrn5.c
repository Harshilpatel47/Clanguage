#include <stdio.h>

int main()
{
    int i,j,n;

    for (i=0;i<5;i++)
    {
        for (j=0;j<i;j++)
        {
            printf("  ");
        }
        for (n=5-i;n>=1;n--)
        {
            printf("%d ", n);
        }

        printf("\n");
    }
}
