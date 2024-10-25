/* Name : Reduan Ahmad
   ID : 232-35-016
   Section : A2
   Problem : Insert a number in the array.
*/
#include <stdio.h>
int main()
{
    int size, index, element;

    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size + 1]; 

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }


    printf("The original array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

  
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    printf("Enter the index to insert the element at (0 to %d): ", size);
    scanf("%d", &index);


    if (index < 0 || index > size) {
        printf("Invalid index! Please enter an index between 0 and %d.\n", size);
        return 1;
    }

    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }


    arr[index] = element;
    size++;


    printf("The updated array is: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
