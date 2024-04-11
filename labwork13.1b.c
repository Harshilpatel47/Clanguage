#include <stdio.h>

int main() 
{
    FILE *file;
    int i;

    file = fopen("divisible_by_3_and_5.txt", "w");
    if (file == NULL) {
        printf("Error creating or opening divisible_by_3_and_5.txt file.\n");
        return 1;
    }

    for (i = 1; i <= 50; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            fprintf(file, "%d\n", i);
        }
    }

    fclose(file);

    printf("Number is divisible.\n");

    return 0;
}
