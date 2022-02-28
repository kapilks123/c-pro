#include<stdio.h>
int sum(int a, int b);

int main(){
    int x=4,y=7;
    printf("the value of a and b %d is %d\n", x, y);
    printf("the value 4+8= %d\n",sum(x,y));//it will print sum of both
    //if you pass pionter also still show basic principle value
    printf("the value of a and b after function call %d is %d\n", x, y);///show a,b value
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    b=3434;   ///this thing canot change the value of main 
    //function can not do main value place
    c=23432;
return a+b ;
}