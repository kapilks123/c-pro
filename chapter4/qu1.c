//Multiplication Table Using forloop
#include<stdio.h>

int main(){
    int a ,b,c;
    printf("the multiple value\n");
    scanf("%d",&a);
    for(b=1;b<=10;++b)
    {
        
         printf("%d * %d=%d\n",a,b,a*b);
        
       
    
    }
    return 0;
}