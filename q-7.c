#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2;
    char sentence[1000];


    file1 = fopen("file1.txt", "w");
    if (file1 == NULL) {
        printf("Error opening file1.txt!\n");
        return 1;
    }

   
    printf("Enter a sentence to write into file1.txt: ");
    fgets(sentence, sizeof(sentence), stdin);


    fprintf(file1, "%s", sentence);


    fclose(file1);


    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt!\n");
        return 1;
    }


    file2 = fopen("file2.txt", "w");
    if (file2 == NULL) {
        printf("Error opening file2.txt!\n");
        return 1;
    }


    while (fgets(sentence, sizeof(sentence), file1) != NULL) {
        fprintf(file2, "%s", sentence);
    }

    fclose(file1);
    fclose(file2);

    printf("The sentence has been written to file1.txt and copied to file2.txt successfully.\n");

    return 0;
}
