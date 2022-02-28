// explain step by step evoluation 3*x/y-z+k
#include<stdio.h>

int main(){
    int x=2 ,y=3 ,z=3, k=1;
    int a,b;
    a=3*x/y-z+k;
    //3*2/3 -3+1
    //6/3-3+1
    //2-3+1
    //0
    b=((3*x/y) -(z+k));
    printf("the step by step :%d\n",a);
    printf("the step by step :%d\n",b);

    return 0;
}