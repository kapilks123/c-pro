#include<stdio.h>

int main(){
    float a =4,b=5;
    int *ptr1,*ptr2;
    ptr1=&a;
    ptr2=&b;
    // printf("enter the value of a: \n ");
    // scanf("%f",&a);
    // printf("enter the value of b: \n ");
    // scanf("%f",&b);
    if(ptr2 > ptr1){
        printf("ptr2 greater than ptr1\n");
    }
    return 0;
}