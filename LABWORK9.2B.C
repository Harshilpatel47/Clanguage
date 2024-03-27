#include <stdio.h>
#include <string.h>

int main() {
    char email[100];
    char password[100];

    // Predefined email and password
    char correct_email[] = "harshil@gmail.com";
    char correct_password[] = "H@46";

    // Input email and password from user
    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);

    // Compare entered email and password with correct ones
    if (strcmp(email, correct_email) == 0 && strcmp(password, correct_password) == 0) {
        printf("Login Successful...\n");
    } else {
        printf("Login Failed. Invalid Credentials.\n");
    }

}

