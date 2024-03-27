#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("Uppercase string: ");
    for (i = 0; str[i] != '\0'; i++) {
        // Convert lowercase letters to uppercase
        if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32);
        }
        else {
            printf("%c", str[i]);
        }
    }
}

