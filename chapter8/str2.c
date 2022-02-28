#include<stdio.h>

int main(){
    char str[]="kapil";
    char *ptr=str;
    while(*ptr!='\0')//ptr equal or not eual null haracter  
    {
        printf("%c",*ptr);//derefernce =the value of object located in memory location
        ptr++;
    }
    return 0;
}