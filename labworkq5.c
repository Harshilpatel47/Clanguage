
#include <stdio.h>

int main() {
    float r, perimeter;
   
    printf("Enter the r: ");
    scanf("%f", &r);

    perimeter = 2 * 3.14 * r;

    printf("The perimeter of circle is: %.2f\n", perimeter);
}
