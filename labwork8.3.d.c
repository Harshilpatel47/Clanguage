#include <stdio.h>

int main() {
    int i,j,arr[3][3], sum = 0;

    printf("Enter array's elements:\n");
    for ( i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");
    // Print the matrix and calculate the sum of boundary elements
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 0 || i == 2 || j == 0 || j == 2) {
                printf("%d ", arr[i][j]);
                sum += arr[i][j];
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    printf("\nThe sum of boundary elements of an Array: %d\n", sum);

    return 0;
}

