#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50, 60}; // Initial array
    int len = sizeof(arr) / sizeof(arr[0]); // Length of the array
    int pos; // Position of the element to delete

    printf("Enter the index of the element you want to delete: ");
    scanf("%d", &pos);

    // Check if the index is within the valid range
    if(pos < 0 || pos >= len){
        printf("Invalid index!\n");
    } else {
        // Shift elements to the left to overwrite the element at index 'pos'
        for(int i = pos; i < len - 1; i++){
            arr[i] = arr[i + 1];
        }

        // Decrease the length of the array logically by 1
        len--;

        // Print the array after deletion
        printf("Array after deletion: ");
        for(int i = 0; i < len; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}
