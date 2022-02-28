#include<stdio.h>
float average(int a, int b, int c);
int main(){
    int a, b, c;
    printf("enter the average the number a\n");
    scanf("%d",&a);
    printf("enter the average the number b\n");
    scanf("%d",&b);
    printf("enter the average the number c\n");
    scanf("%d",&c);
     printf("total avrage value %f\n",average (a,b,c));
     
    return 0;
}
float average(int a, int b, int c){
     int d;
     d=(float)(a+b+c)/3; //this is caveat modified for float add
     
     return d;
}