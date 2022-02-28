#include<stdio.h>

int main(){
    int a=3.0/8 - 2;     //int give you single value
    float b=3.0/8 - 2;
    float c=(3.0/8 - 2);  // using bodmas
      // float give you always double value
    printf("the value of a %d\n",a);
    printf("the value of b %f\n",b);
    printf("the value of b %f\n",c);
    return 0;
}