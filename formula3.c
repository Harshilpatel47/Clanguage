// Write a Program to find the formula's answer (x+y)^3.
#include <stdio.h>
int main()
{
    double a,b, ans;
    printf("Enter the value x&y: ");
    scanf("%lf %lf", &a,&b);
    ans = (a+b)*(a+b)*(a+b);
    printf("The result is: %.2f\n", ans);
}
