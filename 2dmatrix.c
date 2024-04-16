#include <stdio.h>

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int myArray[3][4];

    // Initialize the elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            myArray[i][j] = i * 4 + j + 1;  // You can use any values as per your requirement
        }
    }

    // Access and print the elements of the array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}
