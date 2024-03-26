#include <stdio.h>

int main() {
    int rows, cols,i,j;
    float sum = 0, average;
    
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array's column size: ");
    scanf("%d", &cols);
    
    int arr[rows][cols];
    
    printf("\nEnter array's elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
        }
    }
    
    average = sum / (rows * cols);
    printf("\nAverage of an Array: %.2f\n", average);
}

