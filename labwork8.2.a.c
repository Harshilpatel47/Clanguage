#include <stdio.h>

int main() {
    int sizeA, sizeB, sizeC, i, j;
    
    printf("Enter array A's size: ");
    scanf("%d", &sizeA);
    
    int A[sizeA];
    
    printf("Enter array A's elements:\n");
    for (i = 0; i < sizeA; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &A[i]);
    }
    
    printf("\nEnter array B's size: ");
    scanf("%d", &sizeB);
    
    int B[sizeB];
    
    printf("Enter array B's elements:\n");
    for (i = 0; i < sizeB; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &B[i]);
    }
    
    sizeC = sizeA + sizeB;
    int C[sizeC];
    
    // Copy elements of A to C
    for (i = 0; i < sizeA; i++) {
        C[i] = A[i];
    }
    
    // Copy elements of B to C
    for (j = 0; j < sizeB; j++) {
        C[sizeA + j] = B[j];
    }
    
    printf("\nArray C is: ");
    for (i = 0; i < sizeC; i++) {
        printf("%d", C[i]);
        if (i < sizeC - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

