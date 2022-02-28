#include<stdio.h>

int main(){
    float a ,b;
    float *ptr1,*ptr2;
    float sum;
    printf("enter the value of a: \n ");
    scanf("%f",&a);
    printf("enter the value of b: \n ");
    scanf("%f",&b);
    ptr1=&a;
    ptr2=&b;
    sum=*ptr1+*ptr2;
    printf("totla sum %f\n ",sum);

    return 0;
}