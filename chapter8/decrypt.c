
#include<stdio.h>
void encrypt (char *c){
    char *ptr=c;//initialize the value eual to the  c
    while(*ptr!='\0'){
        *ptr=*ptr-1;//subtract -1 from means individual elements
        *ptr++;
    }
}

int main(){
    char c[]= "lbqjm!zpvs!bxftpnf!csp";//individual elments you do you can used this format char*c[]="kapil"
//  char *c[]="kapil";  read only memory      char*c[]= string
    encrypt(c);
    printf("Encrypted string is: %s",c);


    return 0;
}
//it will convert lbqjm!zpvs!bxftpnf!csp to original sencetence