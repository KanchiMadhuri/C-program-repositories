#include <stdio.h>

int main() {
    // Declare and initialize a 2D array
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
     int i,j;
    // Print all elements of the 2D array
    printf("Elements of the 2D array:\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 4; j++) {
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    return 0;
}

