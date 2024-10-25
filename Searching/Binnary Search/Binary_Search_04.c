#include <stdio.h>
int binary_search(int arr[], int size , int btarget){
    int left = 0;
    int right = size - 1;
    while (left<= right){
        int mid = (left+right)/2;

        if(arr[mid] == btarget){
            return mid;
        }else if (arr[mid]< btarget)
        {
          left = mid + 1;
        }else{
            right = mid -1;
        }
        
    }
    return -1;

    
}

int main()
{
    int size;
    printf("Enter array size : ");
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("After sorting the array : ");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    int btarget;

    printf("Enter your target for the binary search : ");
    scanf("%d",&btarget);

    int result = binary_search(arr,size ,btarget);

    if(result != -1){
        printf("Element %d found at index %d", btarget, result);
    }else{
        printf("Element %d is not found ",btarget);
    }
    
}