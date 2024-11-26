#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n], even[n], odd[n];
    int evenCount = 0, oddCount = 0;


    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] % 2 == 0) {
            even[evenCount++] = arr[i];
        } else {
            odd[oddCount++] = arr[i];
        }
    }

    printf("First part (Even elements): ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", even[i]);
    }
    printf("\n");


    printf("Second part (Odd elements): ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
