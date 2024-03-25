// Write a Program to find the area of a triangle.

#include <stdio.h>
int main()
{
    float b, h, area;

    printf("Enter the b of the triangle: ");
    scanf("%f", &b);
    printf("Enter the h of the triangle: ");
    scanf("%f", &h);

    area = (b * h) / 2;
    printf("\n\n Area of Triangle is: %.2f", area);
}
