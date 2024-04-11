#include <stdio.h>
#include <ctype.h>


int isConsonant(char ch) {
    ch = toupper(ch);
    return !(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') && ch >= 'A' && ch <= 'Z';
}

void countConsonants(const char *sentence, int *consonantCounts) {
    while (*sentence) {
        if (isConsonant(*sentence)) {
            consonantCounts[toupper(*sentence) - 'A']++;
        }
        sentence++;
    }
}

int main() {
    char sentence[1000];
    int consonantCounts[26] = {0},i;

   
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    countConsonants(sentence, consonantCounts);

    printf("Occurrences of each consonant:\n");
    for ( i = 0; i < 26; i++) {
        if (consonantCounts[i] > 0) {
            printf("%c: %d\n", 'A' + i, consonantCounts[i]);
        }
    }

    return 0;
}
