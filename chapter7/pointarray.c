//pointer in array
#include<stdio.h>

int main(){
    int i= 34;
    int *ptr=&i; //in ptr i address store
    printf("the valur of ptr %u\n",ptr);
    // ++ptr;
    // ++ptr;  //it will add by sequence
    // ++ptr;
    ptr -=1; //means ptr=ptr-1; -4 byte if you add -2 it will 4*2=8 byte will subtract , using add 8 byte will add
    // int =4 byte 
    //float=4 byte
    //char=8byte will add or sub
    ptr-=1;
    printf("the valur of ptr %u\n",ptr);

    return 0;
}