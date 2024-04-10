#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0,i;
    for (i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size,i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for ( i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int total = sumArray(arr, size);
    printf("Sum of array elements: %d\n", total);

    return 0;
}
