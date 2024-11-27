#include <stdio.h>

// Function to swap two numbers using pointers and a temporary variable
void swap(int *a, int *b) {
    int temp;  // Temporary variable
    temp = *a; // Store the value of a in temp
    *a = *b;   // Assign the value of b to a
    *b = temp; // Assign the value of temp to b
}

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers:\n");
    printf("Number 1: ");
    scanf("%d", &num1);
    printf("Number 2: ");
    scanf("%d", &num2);

    // Display original values
    printf("\nBefore swapping:\n");
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);

    // Call swap function
    swap(&num1, &num2);

    // Display swapped values
    printf("\nAfter swapping:\n");
    printf("Number 1 = %d, Number 2 = %d\n", num1, num2);

    return 0;
}
