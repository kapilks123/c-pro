//this prime number code
#include<stdio.h>

int main(){
    int n=19, prime=1; // prime number are those who can divisable by 1 or itself
    for(int i=2; i<n; i++){
        if(n % i==0)
        {
            prime=0;
            break;
        }
    }
        if(prime==0){
            printf("this not a prime number;\n");
        }else
        {
            printf("this a prime number;\n");
        }
    
    return 0;
}