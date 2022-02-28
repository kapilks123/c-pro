//write  a program on if else condition odd or even number are there or not
#include<stdio.h>

int main(){
    int a,b;
    printf("difference odd or even:\n");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("number should be even:%d\n",a);
        
    }
    else{
        printf("the number be odd: %d\n",a);
    }
    
    return 0;
}