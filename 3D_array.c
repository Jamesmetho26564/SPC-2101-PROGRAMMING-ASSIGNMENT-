/*
Name: METHO JAMES KITHUKA 
reg no: CT101/G/26564/25
Date:30 October 2025
Description: c program for 3D array 
*/

#include<stdio.h>
#include <stdlib.h>


int main() {
    int matrix[3][3];
    int row, col;
    int rowSum, colSum;

    // Fill matrix with random numbers (1–10)
    printf("Generated Matrix:\n");
    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            matrix[row][col] = rand() % 10 + 1;
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    // Display row sums
    printf("\nRow sums:\n");
    for (row = 0; row < 3; row++) {
        rowSum = 0;
        for (col = 0; col < 3; col++) {
            rowSum += matrix[row][col];
        }
        printf("Sum of Row %d = %d\n", row + 1, rowSum);
    }

    // Display column sums
    printf("\nColumn sums:\n");
    for (col = 0; col < 3; col++) {
        colSum = 0;
        for (row = 0; row < 3; row++) {
            colSum += matrix[row][col];
        }
        printf("Sum of Column %d = %d\n", col + 1, colSum);
    }

    return 0;
}