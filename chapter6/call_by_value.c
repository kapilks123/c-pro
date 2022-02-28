#include<stdio.h>
int sum(int a, int b);

int main(){
    int a =4,b=7;
    printf("the value of a and b %d is %d\n", a, b);
    printf("the value 4+8= %d\n",sum(a,b));//it will print sum of both
    printf("the value of a and b after function call %d is %d\n", a, b);///show a,b value
    return 0;
}
int sum(int a, int b){
return a+b ;
}