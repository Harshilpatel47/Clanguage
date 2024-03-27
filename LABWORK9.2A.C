#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isStrongPassword(char *password) {
    int has_letter = 0, has_digit = 0, has_special = 0;
    int length = strlen(password);

    if (length < 6)
        return 0;

    for (int i = 0; i < length; i++) {
        if (isalpha(password[i])) {
            has_letter = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else {
            has_special = 1;
        }
    }

    return (has_letter && has_digit && has_special);
}

int main() {
    char password[100];

    printf("Create your password: ");
    fgets(password, sizeof(password), stdin);

    // Removing trailing newline character
    if (password[strlen(password) - 1] == '\n')
        password[strlen(password) - 1] = '\0';

    if (isStrongPassword(password)) {
        printf("Your password is Strong.\n");
    } else {
        printf("Your password is not Strong.\n");
    }

}

