
/*Name : Reduan Ahmad
  ID : 232-35-016
  Section : A2
  Problem : Find the positive number in the array.
*/
#include <stdio.h>
int main()
{
    int size, index, element;
    printf("Enter the array size : ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the element :");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("The positive number in the array :");
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0)
        {
            printf("%d ", arr[i]);
        }
    }
}