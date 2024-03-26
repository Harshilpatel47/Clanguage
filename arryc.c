#include <stdio.h>

int main()
{
    int size;

    printf("Enter array size: ");
    scanf("%d", &size);

    int arrayA[size], arrayB[size], arrayC[size];
    int i;

    printf("\nEnter array A's elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &arrayA[i]);
    }

    printf("\nEnter array B's elements:\n");
    for (i = 0; i < size; i++)
    {
        printf("b[%d] = ", i);
        scanf("%d", &arrayB[i]);
    }

    for (i = 0; i < size; i++)
    {
        arrayC[i] = arrayA[i] + arrayB[i];
    }

    printf("\nArray C is: ");
    for (i = 0; i < size; i++)
    {
        printf("%d", arrayC[i]);
        if (i != size - 1)
        {
            printf(", ");
        }
    }
    printf("\n");
}
