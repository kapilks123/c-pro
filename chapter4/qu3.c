//Multiplication Table Using While Loop
#include<stdio.h>

int main(){
    int a ,b=1;
    printf("enter a number\n:");
    
    scanf("%d",&a);
    printf("multiplication of %d\n:",a);
    while(b<=10){
    printf("%d * %d=%d\n",a,b,a*b);
    b++;
    }
    return 0;
}