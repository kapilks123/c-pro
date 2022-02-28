#include<stdio.h>

int main(){
    int n, i=1, prime=0;
    printf("prime or not:\n");
    scanf("%d",&n);
     while (i<=n)
     {
        if (n % i==0)
        prime ++;
        i++;
     }
     if(prime==2)//this condition show after two or eual  or more than value can compare
     // any number is divisiable it should prime or not
         printf("this  a prime number;\n");
         
        
        else
            printf("this is a not prime number\n");
        
    return 0;
}