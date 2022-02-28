#include<stdio.h>

int main(){
    int n;
    printf("the value od natural number%d\n",n);
    scanf("%d",&n);
    for(int i=0;i<n;i--){                   //look the condition for using scanf i =n you get decremented
    //value  or using i=n or i=0 ,i<n
        printf("the value of nature number%d\n",i);
    }
    return 0;
}