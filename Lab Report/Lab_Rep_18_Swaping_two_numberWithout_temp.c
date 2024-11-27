#include <stdio.h>

// Function to swap two numbers using XOR
void swap(int *a, int *b) {
    *a = *a ^ *b; // Step 1: XOR a and b
    *b = *a ^ *b; // Step 2: XOR the result with b (new value of a)
    *a = *a ^ *b; // Step 3: XOR the result with b (new value of b)
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
