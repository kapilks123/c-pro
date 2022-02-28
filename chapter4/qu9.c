//write a program on sum number of multiplication of 8 number  extra 2
#include<stdio.h>

int main(){
    int i,b=8,c,sum=0;
    printf("the multiplication of 8\n");
    for(i=0;i<=10;i++){
        c=b*i;
         sum =sum+c;
        printf("8 * %d=%d\n",i,c); //look the slution 8  multiplication sum 
       
        }    
        printf("sum:%d\n",sum);
    
    return 0;
}