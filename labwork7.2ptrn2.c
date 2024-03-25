#include <stdio.h>

int main()
{
    int i,j,n;

    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf("  ");
        }
        for (n=5-i+1;n<=5;n++)
        {
            printf("%d ", n);
        }

        printf("\n");
    }

}
