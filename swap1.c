//Write a Program to Swap two variables using the third variable.
#include <stdio.h>
int main()
{
    int a, b, t;
    printf("Enter A&B:");
    scanf("%d %d", &a, &b);
    printf("\n Before swapping A=%d , B=%d", a, b);
    t = a;
    a = b;
    b = t;
    printf("\n After swapping A=%d , B=%d", a, b);
}
