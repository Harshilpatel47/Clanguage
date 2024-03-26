#include <stdio.h>

int main()
{
    int s, sum = 0;

    printf("Enter array size: ");
    scanf("%d", &s);

    int a[s];
    int i;

    printf("Enter array elements:\n");
    for (i = 0; i < s; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }

    double avg = (double)sum / s;
    printf("Average of an Array: %.2lf\n", avg);
}
