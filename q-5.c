#include <stdio.h>
int i;
void sumArrays(const int *arr1, const int *arr2, int *result, int size) {
    for ( i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
}

void printArray(const int *arr, int size) {
    for (i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int size = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {5, 6, 7, 8, 9};
    int result[size];


    sumArrays(arr1, arr2, result, size);

    printf("Sum of the arrays: ");
    printArray(result, size);

    return 0;
}
