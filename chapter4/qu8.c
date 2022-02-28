//write a program on sum number of multiplication of 8 number
#include<stdio.h>

int main(){
    int i,b=8,c,sum=0;
    printf("the multiplication of 8\n");
    for(i=0;i<=10;i++){
        c=b*i;

        printf("8 * %d=%d\n",i,c);
        sum=sum+c;
        }    
        printf("sum:%d\n",sum);
    
    return 0;
}