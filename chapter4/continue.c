#include<stdio.h>

int main(){
    int skip=45;
    int i=0;
    while(i <100){
        i++;
        if (i!=skip){
        continue;
        }else{
        printf("%d\n",i);
        }
    }
    return 0;
}