
#include <stdio.h>

int main()
{
    float p, r, n, simple_interest;

    printf("Enter the p: ");
    scanf("%f", &p);
    printf("Enter the r: ");
    scanf("%f", &r);
    printf("Enter the n: ");
    scanf("%f", &n);

    simple_interest = (p * r * n) / 100.0;

    printf("The simple interest is: %.2f\n", simple_interest);
}
