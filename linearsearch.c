#include <stdio.h>

int main() {
    const int size = 10;
    int a[size], i, n;

    // Input 10 elements into the array
    printf("Enter 10 elements in array:\n");
    for (i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }

    // Input the number to search
    printf("Enter the number to search:\n");
    scanf("%d", &n);

    // Search for the number in the array
    for (i = 0; i < size; i++) {
        if (a[i] == n) {
            printf("\nNumber found at index = %d\n", i);
            break;
        }
    }

    // If the loop completes and the number is not found
    if (i == size) {
        printf("\nNumber not found in the array.\n");
    }

    return 0;
}
