#include <stdio.h>

void swap(int *x, int *y) 
{
    int 
     t = *x;
    *x = *y;
    *y = t;
}

int main() {
    int n1, n2;

    printf("Enter the value of Number1: ");
    scanf("%d", &n1);
    printf("Enter the value of Number2: ");
    scanf("%d", &n2);

    printf("\nBefore swapping:\n");
    printf("Number1 = %d\n", n1);
    printf("Number2 = %d\n", n2);

    swap(&n1, &n2);

    printf("\nAfter swapping:\n");
    printf("Number1 = %d\n", n1);
    printf("Number2 = %d\n", n2);

    return 0;
}
