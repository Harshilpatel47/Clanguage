#include <stdio.h>

int main() {
    int i,firstNum, secondNum, count= 0;
    int year;
    printf("Enter the first number: ");
    scanf("%d", &firstNum);
    
    printf("Enter the second number: ");
    scanf("%d", &secondNum);
    
    int leapYears[secondNum - firstNum + 1];
    
    for ( year = firstNum; year <= secondNum; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            leapYears[count] = year;
            count++;
        }
    }
    
    printf("The array is: ");
    for ( i = 0; i < count; i++) {
        printf("%d", leapYears[i]);
        if (i < count - 1) {
            printf(", ");
        }
    }
    printf("\n");
    
}

