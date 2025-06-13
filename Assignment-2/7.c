//7.	Write a C program that stores 5 integers in a one-dimensional array and prints them. Extend this to handle a two-dimensional array (3x3 matrix) and calculate the sum of all elements.

#include <stdio.h>

int main() {
    // Part 1: 1D Array
    int arr[5], i;
    printf("Enter 5 integers:\n");
    for(i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nYou entered the 1D array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    // Part 2: 2D Array (3x3 matrix)
    int matrix[3][3], row, col, sum = 0;
    printf("\n\nEnter elements for a 3x3 matrix:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            printf("Element at [%d][%d]: ", row, col);
            scanf("%d", &matrix[row][col]);
            sum += matrix[row][col];
        }
    }

    printf("\nThe 3x3 matrix is:\n");
    for(row = 0; row < 3; row++) {
        for(col = 0; col < 3; col++) {
            printf("%d\t", matrix[row][col]);
        }
        printf("\n");
    }

    printf("\nSum of all elements in the matrix = %d\n", sum);

    return 0;
}
