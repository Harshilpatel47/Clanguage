#include <stdio.h>

int main()
{
    int s;
    printf("Enter array size: ");
    scanf("%d", &s);

    int array[s];
    int i;

    printf("Enter array elements:\n");
    for (i = 0; i < s; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &array[i]);
    }
    printf("\n Length of an Array: %d\n", s);

}
