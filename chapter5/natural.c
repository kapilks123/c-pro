//natural number recursive focus kapil   sum asked natural number ka
#include<stdio.h>
int natural(int a);
int main(){
    int x;
    
        printf("the value of no . \n");
        scanf("%d",&x); 
        printf("Sum of natural numbers is %d%d\n", x, natural(x)); 
    
    return 0;
}
int natural(int a){
    {  
    if(a)  
        return(a + natural(a-1));   //for sum  if user put 5 so 1+0 ,2+1, etc becouse natural start
        // from 1  
    else  
        return 0;  
} 
}