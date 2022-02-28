#include<stdio.h>

int main(){
    int q=0;
    do{
        printf("the value of natural %d\n",q);
        
        if(q==41)
        {
            break;
        }
        q++;
    }while(q<100);
    return 0;
}