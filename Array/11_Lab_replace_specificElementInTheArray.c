#include<stdio.h>
int main(){
    int size,new,pos;
    printf("Enter array size :");
    scanf("%d",&size);
    int arr[size];

    printf("Enter element : ");
    for(int i = 0; i< size ; i++){
        scanf("%d",&arr[i]);
    }

    printf("Your entered array is : ");
    for(int i = 0; i< size ; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Enter the new element : ");
    scanf("%d",&new);

    printf("Enter the new position : ");
    scanf("%d",&pos);

   arr[pos-1] = new;

   for(int i = 0 ; i< size ; i++){
    printf("%d ",arr[i]);
   } 
}