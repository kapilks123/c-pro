//pointer in array  DEPEND UPON PC BYTE MEMORY SIZE ALLSO 
#include<stdio.h>

int main(){
    float f= 3.4; // only one bit will increases
    float*ptr=&f; //in ptr i address store
    printf("the valur of ptr %u\n",ptr);
    // ++ptr;
    // ++ptr;  //it will add by sequence
    // ++ptr;
    ptr =ptr+1; //means ptr=ptr-1; -4 byte if you add -2 it will 4*2=8 byte will subtract , using add 8 byte will add
    //ptr =ptr+1;
    // int =4 byte 
    //float=4 byte
    //char=8byte will add or sub
    //ptr-=1;
    printf("the valur of ptr %u\n",ptr);

    return 0;
}