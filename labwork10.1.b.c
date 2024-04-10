#include <stdio.h>

int div(int num) {
    if (num % 3 == 0 && num % 5 == 0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (div(num)) {
        printf("Number is divisible by both 3 and 5\n");
    } else {
        printf("Number is not divisible by both 3 and 5\n");
    }

    return 0;
}
