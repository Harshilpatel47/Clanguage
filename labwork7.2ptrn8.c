#include <stdio.h>

int main()
{
    int i,j,n;

    for (i=0;i<5;i++)
    {
        for (j=1;j<=5-i;j++)
        {
            printf("%d ", j);
        }

        for (n=0;n<2*i;n++)
        {
            printf("  ");
        }
        for (j=5-i;j>=1;j--)
        {
            if (j==5&&i!=0)
                continue;
            printf("%d ", j);
        }

        printf("\n");
    }
    for (i=1;i<5;i++)
    {
        for (j=1;j<=i+1;j++)
        {
            printf("%d ", j);
        }

        for (n=0;n<2*(5-i-1);n++)
        {
            printf("  ");
        }

        for (j=i+1;j>=1;j--)
        {
            printf("%d ", j);
        }

        printf("\n");
    }
}
