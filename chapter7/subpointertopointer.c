#include<stdio.h>

int main(){
    float a ,b;
    
    float *ptr1=&a;
    float *ptr2=&b;
    float sum;
    printf("enter the value of a: \n ");
    scanf("%u",&a);
    printf("enter the value of b: \n ");
    scanf("%u",&b);
    ptr1 =ptr1-1;
    ptr2=ptr2-1;
    printf("totla sum of a :%u\n and b :%u \n",ptr1,ptr2);
    sum=*ptr1-*ptr2;
    //ptr1=&a;
     // ptr2=&b;
    // float ptr1=*(&a);
    //float ptr2=*(&b);

    printf("totla sum of %u :\n",ptr1,ptr2);
    return 0;
}