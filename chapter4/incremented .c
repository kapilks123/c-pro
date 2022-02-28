#include<stdio.h>

int main(){
    int a=0;
    printf(" the value of a %d\n",a++); //  a ++first print and then increment 
    printf("the value of  a %d\n",++a);// ++a  first increment then decrement
    printf("the value of  a %d\n",a);
    printf("the value of  a %d\n",a); //compound operator
    a+=30;
    printf("the value of  a %d\n",a);//compound operator
    a-=10;

    printf("the value of  a %d\n",a);//compound operator
    a*=10;
    printf("the value of  a %d\n",a);//compound operator
    a/=10;
    printf("the value of  a11 %d\n",a);//compound operator
    a%=10;
    printf("the value of  a11 %d\n",a);//compound operator

    return 0;
}