//pinter to pointer decrement
#include<stdio.h>

int main(){
    float a=8.4 ,b=8.6;
    float *ptr1,*ptr2;
    //float sum;
    //ptr1=&a;
    //ptr2=&b;
    //  printf("enter the value of a: \n ");
    // scanf("%f",&a);
    //  printf("enter the value of b: \n ");
    // scanf("%f",&b);
    ptr1=&a;
    ptr2=&b;
    printf("increment %u: \n",ptr1);
    ptr1++;
    printf("decrement %u: \n ",ptr2);
    ptr2 --;
    printf("increment %u : and decrement   %u : \n ",ptr1,ptr2);
    ptr2 ++;
    ptr1 --;
     printf("increment %u : and decrement   %u : \n ",ptr2,ptr1);

    return 0;
}