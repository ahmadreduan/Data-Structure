#include<stdio.h>
int main(){
    int arr[] = {50,8,40,66,85,4,5,87,96,42,56,42};
    int size = sizeof(arr)/sizeof(arr[0]);

    int target;
    printf("Enter your target value : ");
    scanf("%d",&target);

    for(int i = 0; i < size ; i++){
        if(arr[i] == target){
            printf("Element %d found at index %d",target,i);
            break;
        }
    }
    return 0;
}