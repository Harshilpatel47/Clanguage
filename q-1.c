#include <stdio.h>

int main() {
    int no, fd, ld, sum;

    printf("enter a 3-digit positive integer: ");
    scanf("%d", &no);

    ld = no% 10;
    fd = no / 100;

    sum = fd + ld;

    printf("The sum of first and last digit is: %d\n", sum);

    return 0;
}
