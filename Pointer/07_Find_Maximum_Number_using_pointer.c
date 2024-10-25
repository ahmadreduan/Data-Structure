#include<stdio.h>
int main(){
    int x , y , z;
    x = 10;
    y = 50;
    z = 30;

    int *p1,*p2,*p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    if(*p1>*p2 && *p1>*p3){
        printf("The largest number is : %d",*p1);
    }else if(*p2>*p3){
        printf("The largest number is : %d",*p2);
    }else{
        printf("The largest number is :%d",*p3);
    }

    return 0;
}