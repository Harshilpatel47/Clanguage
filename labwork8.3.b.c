#include <stdio.h>

int main() {
    int rows, cols,i,j;
    
    printf("Enter the array row size: ");
    scanf("%d", &rows);
    
    printf("Enter the array column size: ");
    scanf("%d", &cols);
    
    int A[rows][cols], B[rows][cols], C[rows][cols];
    
    printf("\nEnter array A elements:\n");
    for ( i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("\nEnter array B elements:\n");
    for (i = 0; i < rows; i++) {
        for ( j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &B[i][j]);
        }
    }
    
    printf("\nArray C is:\n");
    for ( i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

}

