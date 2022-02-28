#include<stdio.h>
void encrypt (char *c){
    char *ptr=c;//initialize the value eual to the  c
    while(*ptr!='\0'){
        *ptr=*ptr+1;//adding +1 means from individual elements
        *ptr++;
    }
}

int main(){
    char c[]= "kapil your awesome bro";//individual elments you do you can used this format char*c[]="kapil"
//  char *c[]="kapil";  read only memory      char*c[]= string
    encrypt(c);
    printf("Encrypted string is: %s",c);


    return 0;
}