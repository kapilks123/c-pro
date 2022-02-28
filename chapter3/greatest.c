//practice code
#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("the value of a\n");
    scanf("%d",&a);
    printf("the value of b\n");
    scanf("%d",&b);
    printf("the value of c\n");
    scanf("%d",&c);
    printf("the value of d\n");
    scanf("%d",&d);
    if(a > b )
    {
        printf("a is greater than b,c,d:\n");
        
    }
    else if(b >c ){
        printf("b is greater than c,a,d:\n");
        
    }
    else if(c > d ){
         printf("c is greater than d,a,b:\n");
         
    }
    else if(d > a){
    
        printf("d is greater than a,b,c:\n");
        
    }
    
    
    return 0;
}
