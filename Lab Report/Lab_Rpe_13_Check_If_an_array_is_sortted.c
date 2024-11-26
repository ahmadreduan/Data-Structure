#include <stdio.h>
/* Name : Reduan Ahmad
   ID : 232-35-016
   Section : A2
   Problem : Check if an array is sorted or not.

*/

int isAscending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}


int isDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] < arr[i + 1]) {
            return 0; 
        }
    }
    return 1;
}

int main() {
    int n;

    
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];


    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

  
    if (isAscending(arr, n)) {
        printf("The array is sorted in ascending order.\n");
    } else if (isDescending(arr, n)) {
        printf("The array is sorted in descending order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}
