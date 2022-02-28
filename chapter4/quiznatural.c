#include<stdio.h>

int main(){
    int a=0;
    int n;
    printf("the natural value \n");
    scanf("%d",&n);
    do{
    printf("the natural is %d\n",a+1);      //natueral number 1 to 4 input =4
    a++;
        

    }while(a<n);

    return 0;
}