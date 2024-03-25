//Write a Program to Swap two variables without using the third variable.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter A&B:");
    scanf("%d %d", &a, &b);
    printf("\n Before swapping A=%d , B=%d", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n After swapping A=%d , B=%d", a, b);
}
