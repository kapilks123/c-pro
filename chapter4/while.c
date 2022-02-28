#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while (a<1000) // while check condition is true or not in this its true start excuting
    {
        printf("%d\n",a);  // if you put more than 1000 it s false condition
        a++;
    }
    
    return 0;
}
