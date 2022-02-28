//using structure complex number
#include<stdio.h>
struct complex{
     int real , img;

};


int main(){
    struct complex  a, b,c;
    printf("enter the value of a real number\n");
    scanf("%d%d",&a.real,&a.img);
    printf("enter the value of a img number\n");
    scanf("%d%d",&b.real,&b.img);
    c.real=  a.real + b.real;
    c.img= a.img + b.img;
    printf("the value of complex number :(%d) + (%di)\n", c.real, c.img);
    return 0;
}