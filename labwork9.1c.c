#include <stdio.h>

int main() {
    char str[100];
    int i;

    printf("Enter any string: ");
    fgets(str, sizeof(str), stdin);

    printf("Toggle case string: ");
    for (i = 0; str[i] != '\0'; i++) {
        // Toggle case of alphabetic characters
        if (str[i] >= 'A' && str[i] <= 'Z') {
            printf("%c", str[i] + 32); // Convert uppercase to lowercase
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            printf("%c", str[i] - 32); // Convert lowercase to uppercase
        } else {
            printf("%c", str[i]); // Non-alphabetic characters remain unchanged
        }
    }
}

