#include<stdio.h>

int main(){
    int n , i=1,prime=0;
    printf("the prime or not\n:");
    scanf("%d",&n);
    do{
    if(n % i==0)
        
        prime++;
        i++;
    }while (i<=n);
    if(prime==2)
      printf("this is a prime number\n");
      else
      printf("the is not a prime number\n");
    
    return 0;
}