#include <stdio.h>

int main() {
    int i,j,size, sum = 0;
    
    printf("Enter the array row & column size: ");
    scanf("%d", &size);
    
    int arr[size][size];
    
    printf("\nEnter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
            
            // Add the element to the sum if it's on the diagonal
            if (i == j) {
                sum += arr[i][j];
            }
        }
    }
    printf("\nThe sum of diagonal elements of an Array: %d\n", sum);
   
}

