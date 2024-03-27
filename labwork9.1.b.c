#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("Lowercase string: ");
    for (i = 0; str[i] != '\0'; i++) {
        // Convert uppercase letters to lowercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32);
        }
        else {
            printf("%c", str[i]);
        }
    }
}

