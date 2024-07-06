#include <stdio.h>
#include <conio.H>
#include <stdlib.h>

int main() {
	clrscr();
    int *arr = NULL;  // Initial pointer to NULL
    int size = 0;     // Initial size is 0
     int i;
    // Allocate initial memory for 5 elements
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
	printf("Memory allocation failed.\n");
	return 1;
    }
    size = 5;

    // Fill the array with some values
    for (i = 0; i < size; i++) {
	arr[i] = i + 1;
    }

    // Print the original array
    printf("Original array:\n");
    for (i = 0; i < size; i++) {
	printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the array to hold 10 elements
    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL) {
	printf("Memory reallocation failed.\n");
	return 1;
    }
    size = 10;

    // Fill the new elements with values
    for (i = 5; i < size; i++) {
	arr[i] = i + 6;  // Ensure this line is correct
    }

    // Print the reallocated array
    printf("Reallocated array:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);  // Free the memory when done
	getch();
    return 0;
}
