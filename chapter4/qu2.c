//Multiplication Table Using do While Loop
#include<stdio.h>

int main(){
    int a ,b,c;
    printf("the multiple value\n");
    scanf("%d",&a);
    do
    {
        printf("enter the range of \n");
        scanf("%d",&c);

    }
        while (c<=0);
    
        for(b=1;b<=c;b++){
            printf("%d * %d=%d\n",a,b,a*b);
        
        
       
    
    }
    return 0;
}